#include <gtk/gtk.h>


void
on_buttons1_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button3_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttons2_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_saves1_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_supps1_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_deconnects1_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_entry1_show                         (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_entry1_activate                     (GtkEntry        *entry,
                                        gpointer         user_data);

void
on_labels1_activate_current_link       (GtkLabel        *label,
                                        gpointer         user_data);

void
on_labels1_populate_popup              (GtkLabel        *label,
                                        GtkMenu         *menu,
                                        gpointer         user_data);

gboolean
on_labels1_activate_link               (GtkLabel        *label,
                                        gchar           *arg1,
                                        gpointer         user_data);

void
on_labels1_selection_get               (GtkWidget       *widget,
                                        GtkSelectionData *data,
                                        guint            info,
                                        guint            time,
                                        gpointer         user_data);

gboolean
on_notebookS1_select_page              (GtkNotebook     *notebook,
                                        gboolean         move_focus,
                                        gpointer         user_data);

gboolean
on_notebookS1_select_page              (GtkNotebook     *notebook,
                                        gboolean         move_focus,
                                        gpointer         user_data);

GtkNotebook*
on_notebookS1_create_window            (GtkNotebook     *notebook,
                                        GtkWidget       *widget,
                                        gint             arg1,
                                        gint             arg2,
                                        gpointer         user_data);

void
on_windows1_activate_default           (GtkWindow       *window,
                                        gpointer         user_data);

void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_enregs1_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data);
