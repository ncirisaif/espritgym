typedef struct
{
int jour;
int moi;
int annee;
}date;
typedef struct {
	char nom[20];	
	char prenom[20];
	char prenom2[20];
	int contact;
	int CIN;
	date date_nais;
	char email[100];
	int IMC;
	char allergie[50];
	char cond_med[50];
	char sexe[20];
	

} adh,*Padh;
typedef struct
{

char acteur[20];
date date_res;
char heur[20];
}reservationRDV;


void ajout_information(adh ad);

void affiche_information(adh ad);

void reserver_RDV(reservationRDV re, char act[20]);


