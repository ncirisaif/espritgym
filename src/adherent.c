#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "adherent.h"
void ajout_information(adh ad)
{
	FILE* infoadherent=NULL;



	infoadherent=fopen("/home/sayf/Projects/mygym/src/infoadherent.txt", "a+");
	    if (infoadherent != NULL)
{
fprintf(infoadherent,"%s|%s|%d|%d|%d|%d|%d|%s|%s|%d|%s|%s\n",ad.nom, ad.prenom,ad.CIN,ad.contact,ad.date_nais.jour,ad.date_nais.moi,ad.date_nais.annee,ad.sexe,ad.email,ad.IMC,ad.allergie,ad.cond_med);


  fclose(infoadherent);
}
}


void affiche_information (adh ad)
{
		FILE* infoadherent;


	infoadherent=fopen("/home/sayf/Projects/mygym/src/infoadherent.txt", "r+");
	    if (infoadherent != NULL)
            {
while(fscanf(infoadherent,"%s|%s|%d|%d|%d|%d|%d|%s|%s|%d|%s|%s",ad.nom, ad.prenom2,&ad.CIN,&ad.contact,&ad.date_nais.jour,&ad.date_nais.moi,&ad.date_nais.annee,ad.sexe,ad.email,&ad.IMC,ad.allergie,ad.cond_med)!=EOF){

fscanf(infoadherent,"%s|%s|%d|%d|%d|%d|%d|%s|%s|%d|%s|%s",ad.nom, ad.prenom2,&ad.CIN,&ad.contact,&ad.date_nais.jour,&ad.date_nais.moi,&ad.date_nais.annee,ad.sexe,ad.email,&ad.IMC,ad.allergie,ad.cond_med);

}
  fclose(infoadherent);


}
}
void reserver_RDV(reservationRDV re, char act[])
{
		FILE* RDV_med;
		FILE* RDV_kine;
		FILE* RDV_coach;
		FILE* RDV_diet;

char kine[]="Kiné";
char med[]="Medecin";
char coach[]="Coach";
char diet[]="Diet";

		if(strcmp(act,"Medecin")==0) 
{
	FILE* RDV_med=fopen("/home/sayf/Projects/mygym/src/RDV_med.txt", "a");
	if(RDV_med!=NULL)
	{
	fprintf(RDV_med,"%s %d %d %d %s \n",re.acteur,re.date_res.jour,re.date_res.moi,re.date_res.annee,re.heur);
	fclose(RDV_med);
	}


}

		if(strcmp(act,kine)==0) 
{
	FILE* RDV_kine=fopen("/home/sayf/Projects/mygym/src/RDV_kine.txt", "a");
	if(RDV_kine!=NULL)
	{
	fprintf(RDV_kine,"%s %d %d %d %s \n",re.acteur,re.date_res.jour,re.date_res.moi,re.date_res.annee,re.heur);
	fclose(RDV_kine);
	}
}
		if(strcmp(act,coach)==0) 
{
	FILE* RDV_coach=fopen("/home/sayf/Projects/mygym/src/RDV_coach.txt", "a");
	if(RDV_coach!=NULL)
	{
	fprintf(RDV_coach,"%s %d %d %d %s \n",re.acteur,re.date_res.jour,re.date_res.moi,re.date_res.annee,re.heur);
	fclose(RDV_coach);
	}
}
		if(strcmp(act,diet)==0) 
{
	FILE* RDV_diet=fopen("/home/sayf/Projects/mygym/src/RDV_med.txt", "a");
	if(RDV_diet!=NULL)
	{
	fprintf(RDV_diet,"%s %d %d %d %s \n",re.acteur,re.date_res.jour,re.date_res.moi,re.date_res.annee,re.heur);
	fclose(RDV_diet);
	}
}
}

