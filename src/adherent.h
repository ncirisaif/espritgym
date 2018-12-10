#include <gtk/gtk.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char l[20]; char p[20]; 
typedef struct
{
char jour[10];
char moi[10];
char annee[10];
}date;
typedef struct
{int intjour;
int intmoi;
int intannee;
}intdate;

typedef struct {
	char usernames1[20];	
	char passwords1[20];	
	char nom[20];	
	char prenom[20];
	char prenom2[20];
	char contact[10];
	char CIN[10];
	date date_nais;
	date *d_nais;
	char email[100];
	char IMC[10];
	char allergie[50];
	char cond_med[50];
	char sexe[20];
	char poids[20];
	char taille[20];
	char commentairemed[500];
	char commentairediet[500];

} adh;
typedef struct
{

char acteur[20];
int jour;
int moi;
int annee;
char heure[20];
}reservationRDV;
typedef struct
{

char acteur1[20];
char jour1;
char moi1;
char annee1;
char heure1[20];
}rdv;


void ajouterss(reservationRDV r);
void afficherss(GtkWidget *pListView);
int valid_mail(char x[]);
int verifier_adherent();
void ajout_information(adh ad);
void affiche_information(adh *ad);
void affichemed(adh *ad);
void affichediet(adh *ad);
int verifi(adh *ad,char user1[], char user2[]);
void reserver_RDV(rdv re, char act[20]);
 void ajoutrdv(GtkWidget *pListView);
void suprimerss(char acteur[], char heure [],int jour,int moi,int annee);
void modifierrdv(char acteur[], char heure [],int jour,int moi,int annee,char acteur1[], char heure1 [],int jour1,int moi1,int annee1);
void suprimer_hormed(char heure []);
void suprimer_hordiet( char heure []);
