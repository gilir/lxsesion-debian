/* main.c generated by valac 0.26.1, the Vala compiler
 * generated from main.vala, do not modify */

/* 
 *      Copyright 2012 Julien Lavergne <gilir@ubuntu.com>
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <unique/unique.h>
#include <lxclipboard/clipboard.h>


#define LXSESSION_TYPE_MAIN (lxsession_main_get_type ())
#define LXSESSION_MAIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LXSESSION_TYPE_MAIN, LxsessionMain))
#define LXSESSION_MAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LXSESSION_TYPE_MAIN, LxsessionMainClass))
#define LXSESSION_IS_MAIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LXSESSION_TYPE_MAIN))
#define LXSESSION_IS_MAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LXSESSION_TYPE_MAIN))
#define LXSESSION_MAIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LXSESSION_TYPE_MAIN, LxsessionMainClass))

typedef struct _LxsessionMain LxsessionMain;
typedef struct _LxsessionMainClass LxsessionMainClass;
typedef struct _LxsessionMainPrivate LxsessionMainPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))

struct _LxsessionMain {
	GObject parent_instance;
	LxsessionMainPrivate * priv;
};

struct _LxsessionMainClass {
	GObjectClass parent_class;
};


static gpointer lxsession_main_parent_class = NULL;

GType lxsession_main_get_type (void) G_GNUC_CONST;
enum  {
	LXSESSION_MAIN_DUMMY_PROPERTY
};
gint lxsession_main_main (gchar** args, int args_length1);
LxsessionMain* lxsession_main_new (void);
LxsessionMain* lxsession_main_construct (GType object_type);


gint lxsession_main_main (gchar** args, int args_length1) {
	gint result = 0;
	UniqueApp* app = NULL;
	UniqueApp* _tmp0_ = NULL;
	UniqueApp* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	gboolean _tmp3_ = FALSE;
	GMainLoop* _tmp4_ = NULL;
	GMainLoop* _tmp5_ = NULL;
	gtk_init (&args_length1, &args);
	_tmp0_ = unique_app_new ("org.lxde.lxclipboard", NULL);
	app = _tmp0_;
	_tmp1_ = app;
	g_object_get (_tmp1_, "is-running", &_tmp2_, NULL);
	_tmp3_ = _tmp2_;
	if (_tmp3_) {
		g_message ("main.vala:36: lxclipboard is already running. Existing");
		result = 0;
		_g_object_unref0 (app);
		return result;
	}
	clipboard_start ();
	_tmp4_ = g_main_loop_new (NULL, FALSE);
	_tmp5_ = _tmp4_;
	g_main_loop_run (_tmp5_);
	_g_main_loop_unref0 (_tmp5_);
	clipboard_stop ();
	result = 0;
	_g_object_unref0 (app);
	return result;
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
	return lxsession_main_main (argv, argc);
}


LxsessionMain* lxsession_main_construct (GType object_type) {
	LxsessionMain * self = NULL;
	self = (LxsessionMain*) g_object_new (object_type, NULL);
	return self;
}


LxsessionMain* lxsession_main_new (void) {
	return lxsession_main_construct (LXSESSION_TYPE_MAIN);
}


static void lxsession_main_class_init (LxsessionMainClass * klass) {
	lxsession_main_parent_class = g_type_class_peek_parent (klass);
}


static void lxsession_main_instance_init (LxsessionMain * self) {
}


GType lxsession_main_get_type (void) {
	static volatile gsize lxsession_main_type_id__volatile = 0;
	if (g_once_init_enter (&lxsession_main_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LxsessionMainClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) lxsession_main_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LxsessionMain), 0, (GInstanceInitFunc) lxsession_main_instance_init, NULL };
		GType lxsession_main_type_id;
		lxsession_main_type_id = g_type_register_static (G_TYPE_OBJECT, "LxsessionMain", &g_define_type_info, 0);
		g_once_init_leave (&lxsession_main_type_id__volatile, lxsession_main_type_id);
	}
	return lxsession_main_type_id__volatile;
}



