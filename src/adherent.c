#include <gtk/gtk.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "adherent.h"



//**************************************************************************************************************************


int valid_mail(char x[])
    {
   int count=0;
int countp=0;
int i,j;
int t,t2;
int k=0;
for(i=0 ; i<strlen(x) ; i++)
{
    if(x[i]=='@')
    {
        count++;
        t=i;
    }
}
if(count==1)
{
    for(j=0; j<t ; j++)
    {
        if(!(x[j]=='_' || x[j]=='.' || isalpha(x[j]) || isdigit(x[j])))
        {
            k=-1;
            break;
        }
    }
    if(k==0)
    {
        for(i=0; i>t ; i++)
        {
            if(x[i]=='.')
            {
      t2=i;
                countp++;
            }
        }
  if(countp==1)
        {
            for(i=0; i<t2 && i>t2; i++)
   {
                if(!(isalpha(x[i])))
   {
                    k=-1;
 break;
                }
                else
                {
                    k=1;
                }
            }
            if(k==1)
            {
  if(x[t2+3]!='\0')
                {
                    k=-1;
      }
            }
        }
        else
        {
            k=-1;
     }
   }
}
else
{
    k=-1;
}
return k;

}
//*************************************************************************************************************************
int controle_saisie_numero(char x[15])
{
int b=0;int a=0;
a=digital(x);
if (a==0)
{return 0;}
else {
b=atoi(x);
if((b>9999999)&&(b<=99999999))
{return 1;}
else {return 0;}
}
}
//********************************************************************************************************************

int digital(char x[15])
{
int res=0;
int i,a;
a=strlen(x);
for(i=0;i<=a;i++)
  {
    if (isdigit(x[i])!=0)
    {
      res=res+1;
    }
  }
  if(res==a)
      {return 1;}
    else {return 0;}

}
//*****************************************************************************************************************************
int verifier_adherent()
{
	FILE* infoadherent=NULL;
adh *ad;


	infoadherent=fopen("infoadherent.txt", "a+");
	    if (infoadherent != NULL)
{
if ((fscanf(infoadherent,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s",ad->nom, ad->prenom,ad->CIN,ad->contact,ad->date_nais.jour,ad->date_nais.moi,ad->date_nais.annee,ad->sexe,ad->email,ad->allergie,ad->cond_med,ad->poids,ad->taille,ad->commentairemed,ad->commentairediet))==EOF)
return 1;
else
return -1;
}
}
//*****************************************************************************************************************************************
void ajout_information(adh ad)
{
	FILE* infoadherent=NULL;



	infoadherent=fopen("infoadherent.txt", "a+");
	    if (infoadherent != NULL)
{
fprintf(infoadherent,"%s %s %s %s %s %s %s %s %s\n",ad.nom, ad.prenom,ad.CIN,ad.contact,ad.date_nais.jour,ad.date_nais.moi,ad.date_nais.annee,ad.sexe,ad.email);

}
  fclose(infoadherent);

}

//********************************************************************************************************************************************
void affiche_information (adh *ad)
{
		FILE* infoadherent=NULL;




	infoadherent=fopen("infoadherent.txt", "r");
	    if (infoadherent != NULL)
            {while(fscanf(infoadherent,"%s %s %s %s %s %s %s %s %s", ad->nom, ad->prenom,ad->CIN,ad->contact,ad->date_nais.jour,ad->date_nais.moi,ad->date_nais.annee,ad->sexe,ad->email)!=EOF){


fscanf(infoadherent,"%s %s %s %s %s %s %s %s %s",ad->nom, ad->prenom,ad->CIN,ad->contact,ad->date_nais.jour,ad->date_nais.moi,ad->date_nais.annee,ad->sexe,ad->email);
}
}
  fclose(infoadherent);



}

//*******************************************************************************************************************************************
void affichemed(adh *ad)
{
		FILE* fichemed=NULL;



	fichemed=fopen("fichemed.txt", "r");
	    if (fichemed != NULL)
            {


fscanf(fichemed,"%s %s %s",ad->allergie, ad->cond_med,ad->commentairemed);

}
  fclose(fichemed);



}
//*************************************************************************************************************************
void affichediet(adh *ad)
{
		FILE* fichediet=NULL;



	fichediet=fopen("fichediet.txt", "r");
	    if (fichediet != NULL)
            {


fscanf(fichediet,"%s %s %s",ad->poids, ad->taille,ad->commentairediet);

}
  fclose(fichediet);



}

//******************************************************************************************************************************
void ajouterss(reservationRDV r)
{




FILE *f;

f=fopen("RDV_med.txt","a+");  
if (f!=NULL)
{
  
  fprintf(f,"%s %d %d %d %s\n",r.acteur,r.jour,r.moi,r.annee,r.heure);


}
fclose(f);
}

//****************************************************************************************************************************************
void afficherss(GtkWidget *pListView)
{
enum {
ACTEUR,
JOUR,
MOI,
ANNEE,
HEURE,
TOGGLE_COLUMN,
N_COLUMN
};

GtkWidget *pScrollbar;
GtkListStore *pListStore;
GtkTreeViewColumn *pColumn;
GtkCellRenderer *pCellRenderer;
pListStore=gtk_list_store_new(N_COLUMN,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_BOOLEAN);

FILE *f;
	char acteur [30];
	char jour [30];
	char annee [30];
	char moi [30];
        char heure[30];

f=fopen("RDV_med.txt","r");
while(fscanf(f,"%s %s %s %s %s",acteur,jour,moi,annee,heure)!=EOF)
	{
GtkTreeIter pIter;
gtk_list_store_append(pListStore, &pIter);
gtk_list_store_set(pListStore, &pIter, ACTEUR, acteur, JOUR, jour, MOI, moi, ANNEE, annee, HEURE, heure, TOGGLE_COLUMN, TRUE, -1);
	}
fclose(f);

void toggled_func(GtkCellRendererToggle *cell_renderer, gchar *path, gpointer user_data)
{
 
    GtkTreeIter iter;
    GtkTreePath *ppath;
    gboolean boolean;
 
 
// convertir la chaine path en GtkTreePath 
 
     ppath = gtk_tree_path_new_from_string (path);
 
// convertir la valeure recuperée en GtkTreeIter  
     gtk_tree_model_get_iter (GTK_TREE_MODEL (user_data),
                           &iter,
                           ppath);
//  utiliser la variable GtkTreeIter pour acceder la valeure booleaine                           
     gtk_tree_model_get (GTK_TREE_MODEL (user_data),
                           &iter,
                           TOGGLE_COLUMN,&boolean,
                           -1);
// changer cette valeure booleaine (! boolean )                          
     gtk_list_store_set (user_data, &iter,
                      TOGGLE_COLUMN, !boolean,
                      -1);


}

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("ACTEUR",pCellRenderer,"text", ACTEUR,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("JOUR",pCellRenderer,"text", JOUR,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("MOI",pCellRenderer,"text", MOI,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("ANNEE",pCellRenderer,"text", ANNEE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("HEURE",pCellRenderer,"text", HEURE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_toggle_new();
pColumn = gtk_tree_view_column_new_with_attributes("SELECTION",pCellRenderer,"active", TOGGLE_COLUMN,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);	








gtk_tree_view_set_model(GTK_TREE_VIEW(pListView),GTK_TREE_MODEL(pListStore)); 
    g_object_unref (pListStore);


	
}

//******************************************************************************************************
 void ajoutrdv(GtkWidget *pListView)
{
enum {
ACTEUR,
JOUR,
MOI,
ANNEE,
HEURE,
TOGGLE_COLUMN,
N_COLUMN
};
	char acteur [30];
	int jour ;
	int annee ;
	int moi ;
        char heure[30];
GtkListStore *pListStore;
pListStore=gtk_list_store_new(N_COLUMN,G_TYPE_STRING,G_TYPE_UINT,G_TYPE_UINT,G_TYPE_UINT,G_TYPE_STRING,G_TYPE_BOOLEAN);

FILE *f;
f=fopen("RDV_med.txt","r");
while(fscanf(f,"%s %d %d %d %s",acteur,&jour,&moi,&annee,heure)!=EOF)
	{
GtkTreeIter pIter;
gtk_list_store_append(pListStore, &pIter);
    gboolean boolean;
gtk_list_store_set(pListStore, &pIter, ACTEUR, acteur, JOUR, jour, MOI, moi, ANNEE, annee, HEURE, heure, TOGGLE_COLUMN, TRUE, -1);
	}
gtk_tree_view_set_model(GTK_TREE_VIEW(pListView),GTK_TREE_MODEL(pListStore)); 
    g_object_unref (pListStore);
}

//******************************************************************************************************

void suprimerss(char acteur[], char heure [],int jour,int moi,int annee)
{
  FILE *f;
  FILE *f1;

  char ch[20], ch1[20];
int a,b,c;


f=fopen("RDV_med.txt","r"); 
f1=fopen("rdv.txt","w");   


if (f1!=NULL && f!=NULL)
{    while(fscanf(f,"%s %d %d %d %s",ch,&a,&b,&c,ch1) != EOF)
  {  

 if (strcmp(ch,acteur)==0 && strcmp(ch1,heure) == 0 && jour==a && moi == b && annee == c)
  fprintf(f1,"%s","");
else
  fprintf(f1,"%s %d %d %d %s\n",ch,a,b,c,ch1);
}
}
  fclose(f);
  fclose(f1);

  remove("RDV_med.txt");
  rename("rdv.txt","RDV_med.txt");

}

//******************************************************************************************************
void modifierrdv(char acteur[], char heure [],int jour,int moi,int annee,char acteur1[], char heure1 [],int jour1,int moi1,int annee1)
{
  FILE *f;
  FILE *f1;

  char ch[20], ch1[20];
int a,b,c;


f=fopen("RDV_med.txt","r"); 
f1=fopen("rdv.txt","a");   


if (f1!=NULL && f!=NULL)
{    while(fscanf(f,"%s %d %d %d %s",ch,&a,&b,&c,ch1) != EOF)
  {  

 if (strcmp(ch,acteur)==0 && strcmp(ch1,heure) == 0 && jour==a && moi == b && annee == c)
  fprintf(f1,"%s %d %d %d %s\n",acteur1,jour1,moi1,annee1,heure1);
else
  fprintf(f1,"%s %d %d %d %s\n",ch,a,b,c,ch1);
}
}
  fclose(f);
  fclose(f1);
  remove("RDV_med.txt");
  rename("rdv.txt","RDV_med.txt");

}


//**********************************************************************************************************************************

void suprimer_hormed( char heure [])
{
  FILE *f;
  FILE *f1;

  char ch[20], ch1[20];
int a,b,c;


f=fopen("horaire.txt","r"); 
f1=fopen("rdv.txt","w");   


if (f1!=NULL && f!=NULL)
{    while(fscanf(f," %d %d %d %s ", &a ,&b, &c, ch)!=EOF)
  {  

 if (strcmp(ch,heure) == 0)
  fprintf(f1,"%s","");
else
  fprintf(f1," %d %d %d %s \n",a,b,c,ch);
}
}
  fclose(f);
  fclose(f1);

  remove("horaire.txt");
  rename("rdv.txt","horaire.txt");

}

//**********************************************************************************************************************************

void suprimer_hordiet(char heure [])
{
  FILE *f;
  FILE *f1;

  char ch[20], ch1[20];
int a,b,c;


f=fopen("horairey.txt","r"); 
f1=fopen("rdv.txt","w");   


if (f1!=NULL && f!=NULL)
{    while(fscanf(f," %d %d %d %s ", &a ,&b, &c, ch)!=EOF)
  {  

 if (strcmp(ch,heure) == 0)
  fprintf(f1,"%s","");
else
  fprintf(f1," %d %d %d %s \n",a,b,c,ch);
}
}
  fclose(f);
  fclose(f1);

  remove("horairey.txt");
  rename("rdv.txt","horairey.txt");

}
