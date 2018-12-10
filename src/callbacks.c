#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include <gtk/gtkwidget.h>
#include <stdlib.h>
#include <string.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "adherent.h"

//******************************************************************************************************************************
void
on_saves1_clicked                      (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *nom1;	
GtkWidget *prenom1;
GtkWidget *CIN1;
GtkWidget *sexe1;
GtkWidget *email1;
GtkWidget *contact1;
GtkWidget *poids1;
GtkWidget *taille1;
GtkWidget *commentairemed1;
GtkWidget *commentairediet1;
GtkWidget *allergie1;
GtkWidget *cond_med1;
GtkWidget *jour1;
GtkWidget *moi1;
GtkWidget *annee1;
adh ad,*Padh;

	Padh=malloc(sizeof(adh));
	nom1=lookup_widget(objet_graphique,"entry1");
	prenom1=lookup_widget(objet_graphique,"entry2");
	sexe1=lookup_widget(objet_graphique,"combobox3");
	CIN1=lookup_widget(objet_graphique,"entry3");
	contact1=lookup_widget(objet_graphique,"entry7");
	email1=lookup_widget(objet_graphique,"entry6");
	allergie1=lookup_widget(objet_graphique,"entry9");
	cond_med1=lookup_widget(objet_graphique,"entry10");
	jour1=lookup_widget(objet_graphique,"comboboxs1");
	moi1=lookup_widget(objet_graphique,"comboboxs2");
	annee1=lookup_widget(objet_graphique,"comboboxs3");
affiche_information(Padh);

  gtk_entry_set_text (GTK_ENTRY (nom1), _(Padh->nom));
  gtk_entry_set_text (GTK_ENTRY (prenom1), _(Padh->prenom));
  gtk_entry_set_text (GTK_ENTRY (CIN1), _(Padh->CIN));
  gtk_entry_set_text (GTK_ENTRY (poids1), _(Padh->poids));
  gtk_entry_set_text (GTK_ENTRY (taille1), _(Padh->taille));
  gtk_entry_set_text (GTK_ENTRY (commentairemed1), _(Padh->commentairemed));
  gtk_entry_set_text (GTK_ENTRY (commentairediet1), _(Padh->commentairediet));
  gtk_entry_set_text (GTK_ENTRY (contact1), _(Padh->contact));
  gtk_entry_set_text (GTK_ENTRY (email1), _(Padh->email));
  gtk_entry_set_text (GTK_ENTRY (allergie1), _(Padh->allergie));
  gtk_entry_set_text (GTK_ENTRY (cond_med1), _(Padh->cond_med));


}



//******************************************************************************************************************************


void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget* windows1;
GtkWidget* admin;
GtkWidget* entry1;


windows1=create_windows1();
   gtk_widget_show (windows1);

admin=lookup_widget(button,"admin");

gtk_widget_hide(admin);
}
//******************************************************************************************************************************



void
on_enregs1_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *nom1;	
GtkWidget *prenom1;
GtkWidget *CIN1;
GtkWidget *sexe1;
GtkWidget *email1;
GtkWidget *contact1;
GtkWidget *poids1;
GtkWidget *taille1;
GtkWidget *commentairemed1;
GtkWidget *commentairediet1;
GtkWidget *allergie1;
GtkWidget *cond_med1;
GtkWidget *jour1;
GtkWidget *moi1;
GtkWidget *annee1;

adh ad;
	nom1=lookup_widget(objet_graphique,"entry1");
	prenom1=lookup_widget(objet_graphique,"entry2");
	sexe1=lookup_widget(objet_graphique,"combobox3");
	CIN1=lookup_widget(objet_graphique,"entry3");
	contact1=lookup_widget(objet_graphique,"entry7");
	email1=lookup_widget(objet_graphique,"entry6");
	allergie1=lookup_widget(objet_graphique,"entry9");
	cond_med1=lookup_widget(objet_graphique,"entry10");
	jour1=lookup_widget(objet_graphique,"comboboxs1");
	moi1=lookup_widget(objet_graphique,"comboboxs2");
	annee1=lookup_widget(objet_graphique,"comboboxs3");
strcpy(ad.nom,gtk_entry_get_text(GTK_ENTRY(nom1)));
strcpy(ad.prenom,gtk_entry_get_text(GTK_ENTRY(prenom1)));
strcpy(ad.contact,gtk_entry_get_text(GTK_ENTRY(contact1)));
strcpy(ad.CIN,gtk_entry_get_text(GTK_ENTRY(CIN1)));
strcpy(ad.date_nais.jour,gtk_combo_box_get_active(GTK_COMBO_BOX(jour1)));
strcpy(ad.date_nais.moi,gtk_combo_box_get_active(GTK_COMBO_BOX(moi1)));
strcpy(ad.date_nais.annee,gtk_combo_box_get_active(GTK_COMBO_BOX(annee1)));
strcpy(ad.sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(sexe1)));
strcpy(ad.allergie,gtk_entry_get_text(GTK_ENTRY(allergie1)));
strcpy(ad.cond_med,gtk_entry_get_text(GTK_ENTRY(cond_med1)));
strcpy(ad.email,gtk_entry_get_text(GTK_ENTRY(email1)));


ajout_information(ad);


}

//*******************************************************************************************************************************
void
on_enregistrerinfo_clicked             (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *nom1;	
GtkWidget *prenom1;
GtkWidget *CIN1;
GtkWidget *sexe1;
GtkWidget *email1;
GtkWidget *contact1;
GtkWidget *poids1;
GtkWidget *taille1;
GtkWidget *commentairemed1;
GtkWidget *commentairediet1;
GtkWidget *allergie1;
GtkWidget *cond_med1;
GtkWidget *jour1;
GtkWidget *moi1;
GtkWidget *annee1;
GtkWidget *imageerreur1;
adh ad;
	nom1=lookup_widget(objet_graphique,"modifiernom");
	prenom1=lookup_widget(objet_graphique,"modifierprenom");
	sexe1=lookup_widget(objet_graphique,"modifiersexe");
	CIN1=lookup_widget(objet_graphique,"modifiercin");
	contact1=lookup_widget(objet_graphique,"modifiertele");
	email1=lookup_widget(objet_graphique,"modifieremail");
	jour1=lookup_widget(objet_graphique,"modifierjourn");
	moi1=lookup_widget(objet_graphique,"modifiermoin");
	annee1=lookup_widget(objet_graphique,"modifieranneen");
strcpy(ad.nom,gtk_entry_get_text(GTK_ENTRY(nom1)));
strcpy(ad.prenom,gtk_entry_get_text(GTK_ENTRY(prenom1)));
strcpy(ad.contact,gtk_entry_get_text(GTK_ENTRY(contact1)));
strcpy(ad.email,gtk_entry_get_text(GTK_ENTRY(email1)));
strcpy(ad.CIN,"14206610");

int a=0;
if(digital(ad.contact)!=0 && controle_saisie_numero(ad.contact)!=0)

{



imageerreur1=lookup_widget(objet_graphique,"erreurs6");
 gtk_widget_hide (imageerreur1);a=1;
}
else 
{	imageerreur1=lookup_widget(objet_graphique,"erreurs6");
 gtk_widget_show (imageerreur1);
}
if(gtk_combo_box_get_active (sexe1)!=-1)

{
strcpy(ad.sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(sexe1)));


imageerreur1=lookup_widget(objet_graphique,"erreurs5");
 gtk_widget_hide (imageerreur1);a=1;
}
else 
{	imageerreur1=lookup_widget(objet_graphique,"erreurs5");
 gtk_widget_show (imageerreur1);
}
if((gtk_combo_box_get_active (jour1)!=-1) && (gtk_combo_box_get_active (moi1)!=-1)&&(gtk_combo_box_get_active (annee1)!=-1))

{
strcpy(ad.date_nais.jour,gtk_combo_box_get_active_text(GTK_COMBO_BOX(jour1)));
strcpy(ad.date_nais.moi,gtk_combo_box_get_active_text(GTK_COMBO_BOX(moi1)));
strcpy(ad.date_nais.annee,gtk_combo_box_get_active_text(GTK_COMBO_BOX(annee1)));
imageerreur1=lookup_widget(objet_graphique,"erreurs4");
 gtk_widget_hide (imageerreur1);
a=1;
}
else 
{	imageerreur1=lookup_widget(objet_graphique,"erreurs4");
 gtk_widget_show (imageerreur1);a=0;
}

if (a==1)
ajout_information(ad);

}

//******************************************************************************************************************************
void
on_afficherRDV_clicked                 (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window3;
GtkWidget  *pListView     ;
window3 = lookup_widget(objet_graphique,"windows1"); 
pListView = lookup_widget(window3,"treeviews1");

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
pColumn = gtk_tree_view_column_new_with_attributes("CheckBox",pCellRenderer,"active", TOGGLE_COLUMN,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);	

gtk_tree_view_set_model(GTK_TREE_VIEW(pListView),GTK_TREE_MODEL(pListStore)); 
    g_object_unref (pListStore);


}

//******************************************************************************************************************************
void
on_supprimerRDV_clicked                (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
	gchar *acteur;
  	gint *jour;
	gint *moi;
	gint *annee;
	gchar *heure;
   
	GtkWidget *jourr;
	GtkWidget *moii;	
	GtkWidget *anneee;
	GtkWidget *acteurr;
	GtkWidget *heuree;
	GtkWidget *window;
	GtkWidget *test;
	GtkWidget *test1;
  GtkTreeSelection *selection;
  GtkTreeModel     *model;
  GtkTreeIter       iter;

	GtkWidget *list;
list=lookup_widget(objet_graphique, "treeviews1");
  selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(list));
  if (gtk_tree_selection_get_selected(selection, &model, &iter))
  {


    gtk_tree_model_get (GTK_LIST_STORE(model), &iter, 0, &acteur, 1, &jour,2,&moi,3,&annee,4,&heure, -1);}


suprimerss(acteur,heure,jour,moi,annee);

GtkWidget *pListView;
	pListView=lookup_widget(objet_graphique,"treeviews1");
ajoutrdv(pListView);
     

   }




//******************************************************************************************************************************


void
on_windows1_show                       (GtkWidget       *widget,
                                        gpointer         user_data)
{
GtkWidget *window3;
GtkWidget  *listeview     ;
window3 = lookup_widget(widget,"windows1"); 
listeview = lookup_widget(window3,"treeviews1");
afficherss(listeview);

}

//******************************************************************************************************************************
void
on_profilemodifier_show                (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *nom1;	
GtkWidget *prenom1;
GtkWidget *CIN1;
GtkWidget *email1;
GtkWidget *tele1;
GtkWidget *sexe1;
adh ad,*Padh;

Padh=malloc(sizeof(adh));

	nom1=lookup_widget(objet_graphique,"modifiernom");
	prenom1=lookup_widget(objet_graphique,"modifierprenom");
	email1=lookup_widget(objet_graphique,"modifieremail");
	CIN1=lookup_widget(objet_graphique,"modifiercin");
	tele1=lookup_widget(objet_graphique,"modifiertele");
	sexe1=lookup_widget(objet_graphique,"modifiersexe");

affiche_information(Padh);

  gtk_entry_set_text (GTK_ENTRY (nom1), _(Padh->nom));
  gtk_entry_set_text (GTK_ENTRY (prenom1), _(Padh->prenom));
  gtk_label_set_text (GTK_ENTRY (CIN1), _(Padh->CIN));
  gtk_entry_set_text (GTK_ENTRY (tele1), _(Padh->contact));
  gtk_entry_set_text (GTK_ENTRY (email1), _(Padh->email));

 /* gtk_combo_box_append_text (GTK_COMBO_BOX (sexe1), _(Padh->sexe));
gtk_combo_box_set_entry(GTK_COMBO_BOX (sexe1), _(Padh->sexe));*/


 GdkColor color;
  gdk_color_parse ("#C99FEB", &color);
  // ou gdk_color_parse ("lightmagenta", &color);
GtkWidget *color1;
	color1=lookup_widget(objet_graphique,"profilemodifier");
  gtk_widget_modify_base (color1, GTK_STATE_NORMAL, &color);

}

//******************************************************************************************************************************
gboolean
on_windows1_enter_notify_event         (GtkWidget       *objet_graphique,
                                        GdkEventCrossing *event,
                                        gpointer         user_data)
{
GtkWidget* nom1;	
GtkWidget *prenom1;
GtkWidget *CIN1;
GtkWidget *sexe1;
GtkWidget *email1;
GtkWidget *contact1;
GtkWidget *allergie1;
GtkWidget *cond_med1;
GtkWidget *jour1;
GtkWidget *moi1;
GtkWidget *annee1;
GtkWidget *poids1;
GtkWidget *taille1;
GtkWidget *imc1;
GtkWidget *commentairemed1;
GtkWidget *commentairediet1;
int a;
adh *ad,*Padh;

	Padh=malloc(sizeof(adh));
	nom1=lookup_widget(objet_graphique,"noms1");
	prenom1=lookup_widget(objet_graphique,"prenoms1");
	sexe1=lookup_widget(objet_graphique,"sexes1");
	CIN1=lookup_widget(objet_graphique,"cins1");
	contact1=lookup_widget(objet_graphique,"telephones1");
	email1=lookup_widget(objet_graphique,"emails1");
	allergie1=lookup_widget(objet_graphique,"allergies1");
	cond_med1=lookup_widget(objet_graphique,"conmeds1");
	jour1=lookup_widget(objet_graphique,"jours1");
	moi1=lookup_widget(objet_graphique,"mois1");
	annee1=lookup_widget(objet_graphique,"annees1");
	poids1=lookup_widget(objet_graphique,"poids1");
	taille1=lookup_widget(objet_graphique,"taille1");
	imc1=lookup_widget(objet_graphique,"imc1");
	commentairemed1=lookup_widget(objet_graphique,"commentairemed1");
	commentairediet1=lookup_widget(objet_graphique,"commentairediet1");

affichemed(Padh);
affichediet(Padh);


		FILE* infoadherent=NULL;
	infoadherent=fopen("infoadherent.txt", "r");
	    if (infoadherent != NULL)
            {while(fscanf(infoadherent,"%s %s %s %s %s %s %s %s %s", Padh->nom, Padh->prenom,Padh->CIN,Padh->contact,Padh->date_nais.jour,Padh->date_nais.moi,Padh->date_nais.annee,Padh->sexe,Padh->email)!=EOF){

fscanf(infoadherent,"%s %s %s %s %s %s %s %s %s",Padh->nom, Padh->prenom,Padh->CIN,Padh->contact,Padh->date_nais.jour,Padh->date_nais.moi,Padh->date_nais.annee,Padh->sexe,Padh->email);

	if (strncmp("14206610",Padh->CIN,20)==0) 
{


  gtk_label_set_text(GTK_LABEL (imc1), _("imc"));

  gtk_label_set_text(GTK_LABEL (nom1), _(Padh->nom));

  gtk_label_set_text(GTK_LABEL (prenom1), _(Padh->prenom));
  gtk_label_set_text(GTK_LABEL (CIN1), _(Padh->CIN));
  gtk_label_set_text(GTK_LABEL (contact1), _(Padh->contact));

  {gtk_label_set_text(GTK_LABEL (email1), _(Padh->email));}
  gtk_label_set_text(GTK_LABEL (allergie1), _(Padh->allergie));
  gtk_label_set_text(GTK_LABEL (cond_med1), _(Padh->cond_med));
  gtk_label_set_text(GTK_LABEL (jour1), _(Padh->date_nais.jour));
  gtk_label_set_text(GTK_LABEL (moi1), _(Padh->date_nais.moi));
  gtk_label_set_text(GTK_LABEL (annee1), _(Padh->date_nais.annee));
  gtk_label_set_text(GTK_LABEL (sexe1), _(Padh->sexe));
  gtk_label_set_text(GTK_LABEL (poids1), _(Padh->poids));
  gtk_label_set_text(GTK_LABEL (taille1), _(Padh->taille));
  gtk_label_set_text(GTK_LABEL (commentairemed1), _(Padh->commentairemed));
  gtk_label_set_text(GTK_LABEL (commentairediet1), _(Padh->commentairediet));
}
}
}  fclose(infoadherent);





  return FALSE;
}

//******************************************************************************************************************************


void
on_Modifierprofile_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
                GtkWidget* modifierprofile;

modifierprofile=create_profilemodifier ();
  gtk_widget_show (modifierprofile);

}

//******************************************************************************************************************************


void
on_deconnects1_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget* window1;
GtkWidget* admin;


	window1=lookup_widget(button,"windows1");
admin=create_admin();
   gtk_widget_hide (window1);



gtk_widget_show(admin);
}


//******************************************************************************************************************************

void
on_quittertree_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}

//******************************************************************************************************************************
void
on_quitterss1_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget* window1;
GtkWidget* admin;


	window1=lookup_widget(button,"windows1");
admin=create_admin();
   gtk_widget_hide (window1);



gtk_widget_show(admin);
}

//******************************************************************************************************************************



void
on_quittrermodifier_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget* window1;


	window1=lookup_widget(button,"profilemodifier");

   gtk_widget_destroy (window1);



gtk_widget_show(window1);
}


void
on_quitterinfo_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}


void
on_ajtrdv_clicked                      (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *jour;
GtkWidget *spinbutton1;
GtkWidget *spinbutton2;
GtkWidget *spinbutton3;
GtkWidget *moi;
GtkWidget *annee;
GtkWidget *combobox7;
GtkWidget *combobox8;
GtkWidget *label20;
reservationRDV r;
rdv re;


combobox7=lookup_widget(objet_graphique, "heurerdv");
combobox8=lookup_widget(objet_graphique, "acteurrdv");

jour=lookup_widget(objet_graphique, "jourrdv");
moi=lookup_widget(objet_graphique, "moirdv");
annee=lookup_widget(objet_graphique, "anneerdv");


r.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
r.moi=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (moi));
r.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));









enum {
ACTEUR,
JOUR,
MOI,
ANNEE,
HEURE,
TOGGLE_COLUMN,
N_COLUMN
};

GtkWidget *combobox1;

GtkWidget *image;
GtkTreeIter pIter;
GtkListStore *pListStore;
pListStore=gtk_list_store_new(N_COLUMN,G_TYPE_STRING,G_TYPE_UINT,G_TYPE_UINT,G_TYPE_UINT,G_TYPE_STRING,G_TYPE_BOOLEAN);
GtkWidget *pListView;
	pListView=lookup_widget(objet_graphique,"treeviews1");
combobox1=lookup_widget(objet_graphique, "heurerdv");

int a;
if(gtk_combo_box_get_active (combobox8)!=-1)

{

image=lookup_widget(objet_graphique,"erreursss3");
 gtk_widget_hide (image);



a=1;
}
else 
{	image=lookup_widget(objet_graphique,"erreursss3");
 gtk_widget_show (image);a=0;
}

if(gtk_combo_box_get_active (combobox7)!=-1)

{

image=lookup_widget(objet_graphique,"erreursss1");
 gtk_widget_hide (image);



a=1;
}
else 
{	image=lookup_widget(objet_graphique,"erreursss1");
 gtk_widget_show (image);
a=0;
}
if (a==1)
{
strcpy(r.acteur,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox8)));
strcpy(r.heure,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox7)));
gtk_combo_box_remove_text (GTK_COMBO_BOX (combobox1), gtk_combo_box_get_active (GTK_COMBO_BOX (combobox1)));
ajouterss(r);
ajoutrdv(pListView);

if (strcmp(r.acteur,"Medecin")==0)
suprimer_hormed(r.heure);
if (strcmp(r.acteur,"Kine")==0)
suprimer_hordiet(r.heure);
}

}





void
on_treeviews1_row_activated            (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	

}




void
on_modifierrdv_clicked                 (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{


GtkWidget *verifi;
GtkWidget *test,*b1,*b2,*b3;

verifi=lookup_widget(GTK_WIDGET(objet_graphique),"verifi");
b1=lookup_widget(objet_graphique, "enrmodification");
b2=lookup_widget(objet_graphique, "annulermodification");
b3	=lookup_widget(objet_graphique, "ajtrdv");

 gtk_widget_show (b1);
 gtk_widget_show (b2);

    gtk_label_set_text(GTK_LABEL(verifi),"veuiller modifier votre RDV");

 gtk_widget_hide (b3);



}








void
on_item3_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{


}




void
on_test1_clicked                       (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_enrmodification_clicked             (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{

	gchar *acteur;
  	gint *jour;
	gint *moi;
	gint *annee;
	gchar *heure;
   
	GtkWidget *jourr;
	GtkWidget *moii;	
	GtkWidget *anneee;
	GtkWidget *acteurr;
	GtkWidget *heuree;
	GtkWidget *window;
	GtkWidget *test;
	GtkWidget *test1;
  GtkTreeSelection *selection;
  GtkTreeModel     *model;
  GtkTreeIter       iter;

	GtkWidget *list;
list=lookup_widget(objet_graphique, "treeviews1");
  selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(list));
  if (gtk_tree_selection_get_selected(selection, &model, &iter))
  {


    gtk_tree_model_get (GTK_LIST_STORE(model), &iter, 0, &acteur, 1, &jour,2,&moi,3,&annee,4,&heure, -1);}




     



GtkWidget *jour1;
GtkWidget *spinbutton1;
GtkWidget *spinbutton2;
GtkWidget *spinbutton3;
GtkWidget *moi1;
GtkWidget *annee1;
GtkWidget *combobox7;
GtkWidget *combobox8;
GtkWidget *label20;
reservationRDV r;


combobox7=lookup_widget(objet_graphique, "heurerdv");
combobox8=lookup_widget(objet_graphique, "acteurrdv");

jour1=lookup_widget(objet_graphique, "jourrdv");
moi1=lookup_widget(objet_graphique, "moirdv");
annee1=lookup_widget(objet_graphique, "anneerdv");


r.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour1));
r.moi=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (moi1));
r.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee1));




GtkWidget *image;



int a;
if(gtk_combo_box_get_active (combobox8)!=-1)

{

image=lookup_widget(objet_graphique,"erreursss3");
 gtk_widget_hide (image);
a=1;
}

else 
{	image=lookup_widget(objet_graphique,"erreursss3");
 gtk_widget_show (image);a=0;
}

if(gtk_combo_box_get_active (combobox7)!=-1)

{

image=lookup_widget(objet_graphique,"erreursss1");
 gtk_widget_hide (image);



a=1;
}
else 
{	image=lookup_widget(objet_graphique,"erreursss1");
 gtk_widget_show (image);
a=0;
}
if (a==1)
{
strcpy(r.acteur,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox8)));
strcpy(r.heure,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox7)));

modifierrdv(acteur,heure,jour,moi,annee,r.acteur,r.heure,r.jour,r.moi,r.annee);

GtkWidget *pListView;
	pListView=lookup_widget(objet_graphique,"treeviews1");
ajoutrdv(pListView);



}

}



void
on_annulermodification_clicked         (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *verifi;
GtkWidget *test,*b1,*b2,*b3;

verifi=lookup_widget(GTK_WIDGET(objet_graphique),"verifi");
b1=lookup_widget(objet_graphique, "enrmodification");
b2=lookup_widget(objet_graphique, "annulermodification");
b3	=lookup_widget(objet_graphique, "ajtrdv");

 gtk_widget_hide (b1);
 gtk_widget_hide (b2);

    gtk_label_set_text(GTK_LABEL(verifi),"");

 gtk_widget_show (b3);


}


void
on_validers1_clicked                   (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
reservationRDV r;

GtkWidget *combobox7;
GtkWidget *combobox8;

combobox7=lookup_widget(objet_graphique, "heurerdv");
combobox8=lookup_widget(objet_graphique, "acteurrdv");

strcpy(r.acteur,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox8)));
int i=0;
FILE* f;
if (strcmp(r.acteur,"Medecin")==0)
{


	f=fopen("horaire.txt","r");
  	if(f!=NULL) 
         {
           while(fscanf(f," %d %d %d %s ", &r.jour ,&r.moi, &r.annee, r.heure)!=EOF){   gtk_combo_box_append_text (GTK_COMBO_BOX (combobox7), _(r.heure)); i++;}

}
  fclose(f);

}
if (strcmp(r.acteur,"Kine")==0)
{


	f=fopen("horairey.txt","r");
  	if(f!=NULL) 
         {
           while(fscanf(f," %d %d %d %s ", &r.jour ,&r.moi, &r.annee, r.heure)!=EOF){   gtk_combo_box_append_text (GTK_COMBO_BOX (combobox7), _(r.heure)); }

}
  fclose(f);

}




}


gboolean
on_heurerdv_popdown                    (GtkComboBox     *combobox,
                                        gpointer         user_data)
{

  return FALSE;
}


void
on_checkbutton1sss_toggled             (GtkToggleButton *objet_graphique,
                                        gpointer         user_data)
{

GtkWidget *a;


a=lookup_widget(objet_graphique, "usersayf");



gtk_entry_set_visibility (a,
                          TRUE);

}


void
on_checkbutton2sss_toggled             (GtkToggleButton *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *a;


a=lookup_widget(objet_graphique, "passsayf");



gtk_entry_set_visibility (a,
                          TRUE);

}


void
on_checkbutton1sss_pressed             (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *a;
a=lookup_widget(objet_graphique, "usersayf");
gtk_entry_set_visibility (a,TRUE);
       
}


void
on_checkbutton1sss_released            (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *a;
a=lookup_widget(objet_graphique, "usersayf");
gtk_entry_set_visibility (a,FALSE);
}

