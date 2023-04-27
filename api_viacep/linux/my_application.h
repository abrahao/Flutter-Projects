#ifndef FLUTTER_ViaCEPLICATION_H_
#define FLUTTER_ViaCEPLICATION_H_

#include <gtk/gtk.h>

G_DECLARE_FINAL_TYPE(MyApplication, ViaCEPlication, MY, APPLICATION,
                     GtkApplication)

/**
 * ViaCEPlication_new:
 *
 * Creates a new Flutter-based application.
 *
 * Returns: a new #MyApplication.
 */
MyApplication* ViaCEPlication_new();

#endif  // FLUTTER_ViaCEPLICATION_H_
