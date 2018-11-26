#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "adherent.h"




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
GtkWidget *IMC1;
GtkWidget *allergie1;
GtkWidget *cond_med1;
GtkWidget *jour1;
GtkWidget *moi1;
GtkWidget *annee1;
	char nom[20];	
	char prenom[20];
	char *prenom2[20];
	date date_nais;
	int CIN;
	char email[100];
	int contact;
	int IMC;
	char allergie[50];
	char cond_med[50];
	char sexe[20];
adh ad;
	nom1=lookup_widget(objet_graphique,"entry1");
	prenom1=lookup_widget(objet_graphique,"entry2");
	sexe1=lookup_widget(objet_graphique,"combobox3");
	CIN1=lookup_widget(objet_graphique,"entry3");
	contact1=lookup_widget(objet_graphique,"entry7");
	email1=lookup_widget(objet_graphique,"entry6");
	IMC1=lookup_widget(objet_graphique,"entry8");
	allergie1=lookup_widget(objet_graphique,"entry9");
	cond_med1=lookup_widget(objet_graphique,"entry10");
	jour1=lookup_widget(objet_graphique,"comboboxs1");
	moi1=lookup_widget(objet_graphique,"comboboxs2");
	annee1=lookup_widget(objet_graphique,"comboboxs3");
affiche_information(ad);

  gtk_entry_set_text (GTK_ENTRY (prenom1), _(ad.prenom2));
}


void
on_supps1_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget* attention;
attention=create_attention ();
  gtk_widget_show (attention);
}


void
on_deconnects1_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}




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
GtkWidget *IMC1;
GtkWidget *allergie1;
GtkWidget *cond_med1;
GtkWidget *jour1;
GtkWidget *moi1;
GtkWidget *annee1;
	char nom[20];	
	char prenom[20];
	date date_nais;
	int CIN;
	char email[100];
	int contact;
	int IMC;
	char allergie[50];
	char cond_med[50];
	char sexe[20];
adh ad;
	nom1=lookup_widget(objet_graphique,"entry1");
	prenom1=lookup_widget(objet_graphique,"entry2");
	sexe1=lookup_widget(objet_graphique,"combobox3");
	CIN1=lookup_widget(objet_graphique,"entry3");
	contact1=lookup_widget(objet_graphique,"entry7");
	email1=lookup_widget(objet_graphique,"entry6");
	IMC1=lookup_widget(objet_graphique,"entry8");
	allergie1=lookup_widget(objet_graphique,"entry9");
	cond_med1=lookup_widget(objet_graphique,"entry10");
	jour1=lookup_widget(objet_graphique,"comboboxs1");
	moi1=lookup_widget(objet_graphique,"comboboxs2");
	annee1=lookup_widget(objet_graphique,"comboboxs3");
strcpy(ad.nom,gtk_entry_get_text(GTK_ENTRY(nom1)));
strcpy(ad.prenom,gtk_entry_get_text(GTK_ENTRY(prenom1)));
ad.contact=410;
ad.CIN=14206610;
ad.IMC=24.5;
ad.date_nais.jour=gtk_combo_box_get_active(GTK_COMBO_BOX(jour1));
ad.date_nais.moi=gtk_combo_box_get_active(GTK_COMBO_BOX(moi1));
ad.date_nais.annee=gtk_combo_box_get_active(GTK_COMBO_BOX(annee1));
strcpy(ad.sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(sexe1)));
strcpy(ad.allergie,gtk_entry_get_text(GTK_ENTRY(allergie1)));
strcpy(ad.cond_med,gtk_entry_get_text(GTK_ENTRY(cond_med1)));
strcpy(ad.email,gtk_entry_get_text(GTK_ENTRY(email1)));



ajout_information(ad);

}


void
on_button2_clicked                     (GtkButton       *objet_graphique,
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
reservationRDV res;

combobox7=lookup_widget(objet_graphique, "combobox7");
combobox8=lookup_widget(objet_graphique, "combobox8");
label20=lookup_widget(objet_graphique, "label20");
jour=lookup_widget(objet_graphique, "spinbutton1");
moi=lookup_widget(objet_graphique, "spinbutton2");
annee=lookup_widget(objet_graphique, "spinbutton3");

combobox7=lookup_widget(objet_graphique, "combobox7");
combobox8=lookup_widget(objet_graphique, "combobox8");
res.date_res.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
res.date_res.moi=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (moi));
res.date_res.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));

strcpy(res.acteur,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox8)));
strcpy(res.heur,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox7)));


reserver_RDV(res,res.acteur);

}



