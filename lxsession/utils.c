/* utils.c generated by valac 0.24.0, the Vala compiler
 * generated from utils.vala, do not modify */

/* 
 *      Copyright 2011 Julien Lavergne <gilir@ubuntu.com>
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
#include <glib/gstdio.h>
#include <gio/gio.h>


#define LXSESSION_TYPE_APP_TYPE (lxsession_app_type_get_type ())
typedef struct _LxsessionAppType LxsessionAppType;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_key_file_free0(var) ((var == NULL) ? NULL : (var = (g_key_file_free (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

#define LXSESSION_TYPE_LX_SIGNALS (lxsession_lx_signals_get_type ())
#define LXSESSION_LX_SIGNALS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LXSESSION_TYPE_LX_SIGNALS, LxsessionLxSignals))
#define LXSESSION_LX_SIGNALS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LXSESSION_TYPE_LX_SIGNALS, LxsessionLxSignalsClass))
#define LXSESSION_IS_LX_SIGNALS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LXSESSION_TYPE_LX_SIGNALS))
#define LXSESSION_IS_LX_SIGNALS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LXSESSION_TYPE_LX_SIGNALS))
#define LXSESSION_LX_SIGNALS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LXSESSION_TYPE_LX_SIGNALS, LxsessionLxSignalsClass))

typedef struct _LxsessionLxSignals LxsessionLxSignals;
typedef struct _LxsessionLxSignalsClass LxsessionLxSignalsClass;
typedef struct _LxsessionLxSignalsPrivate LxsessionLxSignalsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _LxsessionAppType {
	gchar* name;
	gchar** command;
	gint command_length1;
	gboolean guard;
	gchar* application_type;
};

struct _LxsessionLxSignals {
	GObject parent_instance;
	LxsessionLxSignalsPrivate * priv;
};

struct _LxsessionLxSignalsClass {
	GObjectClass parent_class;
};


extern gchar* lxsession_session_global;
gchar* lxsession_session_global = NULL;
static gpointer lxsession_lx_signals_parent_class = NULL;

GType lxsession_app_type_get_type (void) G_GNUC_CONST;
LxsessionAppType* lxsession_app_type_dup (const LxsessionAppType* self);
void lxsession_app_type_free (LxsessionAppType* self);
void lxsession_app_type_copy (const LxsessionAppType* self, LxsessionAppType* dest);
void lxsession_app_type_destroy (LxsessionAppType* self);
static gchar** _vala_array_dup9 (gchar** self, int length);
GKeyFile* lxsession_load_keyfile (const gchar* config_path);
gchar* lxsession_get_config_home_path (const gchar* conf_file);
gchar* lxsession_get_config_path (const gchar* conf_file);
static gchar** _vala_array_dup10 (gchar** self, int length);
GType lxsession_lx_signals_get_type (void) G_GNUC_CONST;
enum  {
	LXSESSION_LX_SIGNALS_DUMMY_PROPERTY
};
LxsessionLxSignals* lxsession_lx_signals_new (void);
LxsessionLxSignals* lxsession_lx_signals_construct (GType object_type);
static void g_cclosure_user_marshal_VOID__STRING_STRING_STRING_STRING (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static void g_cclosure_user_marshal_VOID__STRING_STRING_STRING_STRING_STRING (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
gboolean lxsession_detect_laptop (void);
gboolean lxsession_check_package_manager_running (void);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


static gchar** _vala_array_dup9 (gchar** self, int length) {
	gchar** result;
	int i;
	result = g_new0 (gchar*, length + 1);
	for (i = 0; i < length; i++) {
		gchar* _tmp0_ = NULL;
		_tmp0_ = g_strdup (self[i]);
		result[i] = _tmp0_;
	}
	return result;
}


void lxsession_app_type_copy (const LxsessionAppType* self, LxsessionAppType* dest) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar** _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	gchar** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	gboolean _tmp4_ = FALSE;
	const gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	_tmp0_ = (*self).name;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 ((*dest).name);
	(*dest).name = _tmp1_;
	_tmp2_ = (*self).command;
	_tmp2__length1 = (*self).command_length1;
	_tmp3_ = (_tmp2_ != NULL) ? _vala_array_dup9 (_tmp2_, _tmp2__length1) : ((gpointer) _tmp2_);
	_tmp3__length1 = _tmp2__length1;
	(*dest).command = (_vala_array_free ((*dest).command, (*dest).command_length1, (GDestroyNotify) g_free), NULL);
	(*dest).command = _tmp3_;
	(*dest).command_length1 = _tmp3__length1;
	_tmp4_ = (*self).guard;
	(*dest).guard = _tmp4_;
	_tmp5_ = (*self).application_type;
	_tmp6_ = g_strdup (_tmp5_);
	_g_free0 ((*dest).application_type);
	(*dest).application_type = _tmp6_;
}


void lxsession_app_type_destroy (LxsessionAppType* self) {
	_g_free0 ((*self).name);
	(*self).command = (_vala_array_free ((*self).command, (*self).command_length1, (GDestroyNotify) g_free), NULL);
	_g_free0 ((*self).application_type);
}


LxsessionAppType* lxsession_app_type_dup (const LxsessionAppType* self) {
	LxsessionAppType* dup;
	dup = g_new0 (LxsessionAppType, 1);
	lxsession_app_type_copy (self, dup);
	return dup;
}


void lxsession_app_type_free (LxsessionAppType* self) {
	lxsession_app_type_destroy (self);
	g_free (self);
}


GType lxsession_app_type_get_type (void) {
	static volatile gsize lxsession_app_type_type_id__volatile = 0;
	if (g_once_init_enter (&lxsession_app_type_type_id__volatile)) {
		GType lxsession_app_type_type_id;
		lxsession_app_type_type_id = g_boxed_type_register_static ("LxsessionAppType", (GBoxedCopyFunc) lxsession_app_type_dup, (GBoxedFreeFunc) lxsession_app_type_free);
		g_once_init_leave (&lxsession_app_type_type_id__volatile, lxsession_app_type_type_id);
	}
	return lxsession_app_type_type_id__volatile;
}


GKeyFile* lxsession_load_keyfile (const gchar* config_path) {
	GKeyFile* result = NULL;
	GKeyFile* kf = NULL;
	GKeyFile* _tmp0_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (config_path != NULL, NULL);
	_tmp0_ = g_key_file_new ();
	kf = _tmp0_;
	{
		GKeyFile* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
		_tmp1_ = kf;
		_tmp2_ = config_path;
		g_key_file_load_from_file (_tmp1_, _tmp2_, G_KEY_FILE_NONE, &_inner_error_);
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_KEY_FILE_ERROR) {
				goto __catch31_g_key_file_error;
			}
			if (_inner_error_->domain == G_FILE_ERROR) {
				goto __catch31_g_file_error;
			}
			_g_key_file_free0 (kf);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	goto __finally31;
	__catch31_g_key_file_error:
	{
		GError* err = NULL;
		GError* _tmp3_ = NULL;
		const gchar* _tmp4_ = NULL;
		err = _inner_error_;
		_inner_error_ = NULL;
		_tmp3_ = err;
		_tmp4_ = _tmp3_->message;
		g_warning ("utils.vala:38: %s", _tmp4_);
		_g_error_free0 (err);
	}
	goto __finally31;
	__catch31_g_file_error:
	{
		GError* err = NULL;
		GError* _tmp5_ = NULL;
		const gchar* _tmp6_ = NULL;
		err = _inner_error_;
		_inner_error_ = NULL;
		_tmp5_ = err;
		_tmp6_ = _tmp5_->message;
		g_warning ("utils.vala:40: %s", _tmp6_);
		_g_error_free0 (err);
	}
	__finally31:
	if (_inner_error_ != NULL) {
		_g_key_file_free0 (kf);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	result = kf;
	return result;
}


gchar* lxsession_get_config_home_path (const gchar* conf_file) {
	gchar* result = NULL;
	gchar* user_config_dir = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	g_return_val_if_fail (conf_file != NULL, NULL);
	_tmp0_ = g_get_user_config_dir ();
	_tmp1_ = lxsession_session_global;
	_tmp2_ = conf_file;
	_tmp3_ = g_build_filename (_tmp0_, "lxsession", _tmp1_, _tmp2_, NULL);
	user_config_dir = _tmp3_;
	result = user_config_dir;
	return result;
}


static gchar** _vala_array_dup10 (gchar** self, int length) {
	gchar** result;
	int i;
	result = g_new0 (gchar*, length + 1);
	for (i = 0; i < length; i++) {
		gchar* _tmp0_ = NULL;
		_tmp0_ = g_strdup (self[i]);
		result[i] = _tmp0_;
	}
	return result;
}


gchar* lxsession_get_config_path (const gchar* conf_file) {
	gchar* result = NULL;
	gchar* final_config_file = NULL;
	gchar* user_config_dir = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	const gchar* _tmp24_ = NULL;
	g_return_val_if_fail (conf_file != NULL, NULL);
	_tmp0_ = conf_file;
	_tmp1_ = lxsession_get_config_home_path (_tmp0_);
	user_config_dir = _tmp1_;
	_tmp2_ = user_config_dir;
	_tmp3_ = g_file_test (_tmp2_, G_FILE_TEST_EXISTS);
	if (_tmp3_) {
		const gchar* _tmp4_ = NULL;
		const gchar* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
		_tmp4_ = user_config_dir;
		g_message ("utils.vala:68: User config used : %s", _tmp4_);
		_tmp5_ = user_config_dir;
		_tmp6_ = g_strdup (_tmp5_);
		_g_free0 (final_config_file);
		final_config_file = _tmp6_;
	} else {
		gchar** system_config_dirs = NULL;
		gchar** _tmp7_ = NULL;
		gchar** _tmp8_ = NULL;
		gchar** _tmp9_ = NULL;
		gint _tmp9__length1 = 0;
		gint system_config_dirs_length1 = 0;
		gint _system_config_dirs_size_ = 0;
		gchar* config_system_location = NULL;
		gchar* path_system_config_file = NULL;
		gchar** _tmp10_ = NULL;
		gint _tmp10__length1 = 0;
		const gchar* _tmp21_ = NULL;
		const gchar* _tmp22_ = NULL;
		gchar* _tmp23_ = NULL;
		_tmp8_ = _tmp7_ = g_get_system_config_dirs ();
		_tmp9_ = (_tmp8_ != NULL) ? _vala_array_dup10 (_tmp8_, _vala_array_length (_tmp7_)) : ((gpointer) _tmp8_);
		_tmp9__length1 = _vala_array_length (_tmp7_);
		system_config_dirs = _tmp9_;
		system_config_dirs_length1 = _tmp9__length1;
		_system_config_dirs_size_ = system_config_dirs_length1;
		config_system_location = NULL;
		path_system_config_file = NULL;
		_tmp10_ = system_config_dirs;
		_tmp10__length1 = system_config_dirs_length1;
		{
			gchar** config_collection = NULL;
			gint config_collection_length1 = 0;
			gint _config_collection_size_ = 0;
			gint config_it = 0;
			config_collection = _tmp10_;
			config_collection_length1 = _tmp10__length1;
			for (config_it = 0; config_it < _tmp10__length1; config_it = config_it + 1) {
				gchar* _tmp11_ = NULL;
				gchar* config = NULL;
				_tmp11_ = g_strdup (config_collection[config_it]);
				config = _tmp11_;
				{
					const gchar* _tmp12_ = NULL;
					const gchar* _tmp13_ = NULL;
					gchar* _tmp14_ = NULL;
					const gchar* _tmp15_ = NULL;
					const gchar* _tmp16_ = NULL;
					gboolean _tmp17_ = FALSE;
					_tmp12_ = config;
					_tmp13_ = lxsession_session_global;
					_tmp14_ = g_build_filename (_tmp12_, "lxsession", _tmp13_, NULL);
					_g_free0 (config_system_location);
					config_system_location = _tmp14_;
					_tmp15_ = config_system_location;
					g_message ("utils.vala:79: Config system location : %s", _tmp15_);
					_tmp16_ = config_system_location;
					_tmp17_ = g_file_test (_tmp16_, G_FILE_TEST_EXISTS);
					if (_tmp17_) {
						const gchar* _tmp18_ = NULL;
						const gchar* _tmp19_ = NULL;
						gchar* _tmp20_ = NULL;
						_tmp18_ = config_system_location;
						_tmp19_ = conf_file;
						_tmp20_ = g_build_filename (_tmp18_, _tmp19_, NULL);
						_g_free0 (path_system_config_file);
						path_system_config_file = _tmp20_;
						_g_free0 (config);
						break;
					}
					_g_free0 (config);
				}
			}
		}
		_tmp21_ = path_system_config_file;
		g_message ("utils.vala:85: System system path location : %s", _tmp21_);
		_tmp22_ = path_system_config_file;
		_tmp23_ = g_strdup (_tmp22_);
		_g_free0 (final_config_file);
		final_config_file = _tmp23_;
		_g_free0 (path_system_config_file);
		_g_free0 (config_system_location);
		system_config_dirs = (_vala_array_free (system_config_dirs, system_config_dirs_length1, (GDestroyNotify) g_free), NULL);
	}
	_tmp24_ = final_config_file;
	g_message ("utils.vala:89: Final file used : %s", _tmp24_);
	result = final_config_file;
	_g_free0 (user_config_dir);
	return result;
}


LxsessionLxSignals* lxsession_lx_signals_construct (GType object_type) {
	LxsessionLxSignals * self = NULL;
	self = (LxsessionLxSignals*) g_object_new (object_type, NULL);
	return self;
}


LxsessionLxSignals* lxsession_lx_signals_new (void) {
	return lxsession_lx_signals_construct (LXSESSION_TYPE_LX_SIGNALS);
}


static void g_cclosure_user_marshal_VOID__STRING_STRING_STRING_STRING (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__STRING_STRING_STRING_STRING) (gpointer data1, const char* arg_1, const char* arg_2, const char* arg_3, const char* arg_4, gpointer data2);
	register GMarshalFunc_VOID__STRING_STRING_STRING_STRING callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 5);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__STRING_STRING_STRING_STRING) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_string (param_values + 1), g_value_get_string (param_values + 2), g_value_get_string (param_values + 3), g_value_get_string (param_values + 4), data2);
}


static void g_cclosure_user_marshal_VOID__STRING_STRING_STRING_STRING_STRING (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__STRING_STRING_STRING_STRING_STRING) (gpointer data1, const char* arg_1, const char* arg_2, const char* arg_3, const char* arg_4, const char* arg_5, gpointer data2);
	register GMarshalFunc_VOID__STRING_STRING_STRING_STRING_STRING callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 6);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__STRING_STRING_STRING_STRING_STRING) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_string (param_values + 1), g_value_get_string (param_values + 2), g_value_get_string (param_values + 3), g_value_get_string (param_values + 4), g_value_get_string (param_values + 5), data2);
}


static void lxsession_lx_signals_class_init (LxsessionLxSignalsClass * klass) {
	lxsession_lx_signals_parent_class = g_type_class_peek_parent (klass);
	g_signal_new ("update_window_manager", LXSESSION_TYPE_LX_SIGNALS, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__STRING_STRING_STRING_STRING, G_TYPE_NONE, 4, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
	g_signal_new ("reload_settings_daemon", LXSESSION_TYPE_LX_SIGNALS, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
	g_signal_new ("generic_set_signal", LXSESSION_TYPE_LX_SIGNALS, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__STRING_STRING_STRING_STRING_STRING, G_TYPE_NONE, 5, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
}


static void lxsession_lx_signals_instance_init (LxsessionLxSignals * self) {
}


GType lxsession_lx_signals_get_type (void) {
	static volatile gsize lxsession_lx_signals_type_id__volatile = 0;
	if (g_once_init_enter (&lxsession_lx_signals_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LxsessionLxSignalsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) lxsession_lx_signals_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LxsessionLxSignals), 0, (GInstanceInitFunc) lxsession_lx_signals_instance_init, NULL };
		GType lxsession_lx_signals_type_id;
		lxsession_lx_signals_type_id = g_type_register_static (G_TYPE_OBJECT, "LxsessionLxSignals", &g_define_type_info, 0);
		g_once_init_leave (&lxsession_lx_signals_type_id__volatile, lxsession_lx_signals_type_id);
	}
	return lxsession_lx_signals_type_id__volatile;
}


gboolean lxsession_detect_laptop (void) {
	gboolean result = FALSE;
	gchar* test_laptop_detect = NULL;
	gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GError * _inner_error_ = NULL;
	_tmp0_ = g_find_program_in_path ("laptop-detect");
	test_laptop_detect = _tmp0_;
	_tmp1_ = test_laptop_detect;
	if (_tmp1_ != NULL) {
		gint exit_status = 0;
		gchar* standard_output = NULL;
		gchar* standard_error = NULL;
		{
			gchar* _tmp2_ = NULL;
			gchar* _tmp3_ = NULL;
			gint _tmp4_ = 0;
			gint _tmp5_ = 0;
			g_spawn_command_line_sync ("laptop-detect", &_tmp2_, &_tmp3_, &_tmp4_, &_inner_error_);
			_g_free0 (standard_output);
			standard_output = _tmp2_;
			_g_free0 (standard_error);
			standard_error = _tmp3_;
			exit_status = _tmp4_;
			if (_inner_error_ != NULL) {
				if (_inner_error_->domain == G_SPAWN_ERROR) {
					goto __catch32_g_spawn_error;
				}
				_g_free0 (standard_error);
				_g_free0 (standard_output);
				_g_free0 (test_laptop_detect);
				g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return FALSE;
			}
			_tmp5_ = exit_status;
			if (_tmp5_ == 0) {
				g_message ("utils.vala:119: Laptop detect return true");
				result = TRUE;
				_g_free0 (standard_error);
				_g_free0 (standard_output);
				_g_free0 (test_laptop_detect);
				return result;
			} else {
				g_message ("utils.vala:124: Laptop detect return false");
				result = FALSE;
				_g_free0 (standard_error);
				_g_free0 (standard_output);
				_g_free0 (test_laptop_detect);
				return result;
			}
		}
		goto __finally32;
		__catch32_g_spawn_error:
		{
			GError* err = NULL;
			GError* _tmp6_ = NULL;
			const gchar* _tmp7_ = NULL;
			err = _inner_error_;
			_inner_error_ = NULL;
			_tmp6_ = err;
			_tmp7_ = _tmp6_->message;
			g_warning ("utils.vala:130: %s", _tmp7_);
			result = FALSE;
			_g_error_free0 (err);
			_g_free0 (standard_error);
			_g_free0 (standard_output);
			_g_free0 (test_laptop_detect);
			return result;
		}
		__finally32:
		_g_free0 (standard_error);
		_g_free0 (standard_output);
		_g_free0 (test_laptop_detect);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return FALSE;
	} else {
		g_message ("utils.vala:136: Laptop detect not find");
		result = FALSE;
		_g_free0 (test_laptop_detect);
		return result;
	}
	_g_free0 (test_laptop_detect);
}


gboolean lxsession_check_package_manager_running (void) {
	gboolean result = FALSE;
	GFile* dpkg = NULL;
	GFile* apt_archives = NULL;
	GFile* apt_lists = NULL;
	GFile* unattended_upgrades = NULL;
	gboolean return_value = FALSE;
	GFile* _tmp0_ = NULL;
	GFile* _tmp1_ = NULL;
	GFile* _tmp2_ = NULL;
	GFile* _tmp3_ = NULL;
	GFile* _tmp4_ = NULL;
	gboolean _tmp5_ = FALSE;
	GFile* _tmp6_ = NULL;
	gboolean _tmp7_ = FALSE;
	GFile* _tmp8_ = NULL;
	gboolean _tmp9_ = FALSE;
	GFile* _tmp10_ = NULL;
	gboolean _tmp11_ = FALSE;
	return_value = FALSE;
	_tmp0_ = g_file_new_for_path ("/var/lib/dpkg/lock");
	_g_object_unref0 (dpkg);
	dpkg = _tmp0_;
	_tmp1_ = g_file_new_for_path ("/var/cache/apt/archives/lock");
	_g_object_unref0 (apt_archives);
	apt_archives = _tmp1_;
	_tmp2_ = g_file_new_for_path ("/var/lib/apt/lists/lock");
	_g_object_unref0 (apt_lists);
	apt_lists = _tmp2_;
	_tmp3_ = g_file_new_for_path ("/var/run/unattended-upgrades.lock");
	_g_object_unref0 (unattended_upgrades);
	unattended_upgrades = _tmp3_;
	_tmp4_ = dpkg;
	_tmp5_ = g_file_query_exists (_tmp4_, NULL);
	if (_tmp5_) {
		return_value = TRUE;
	}
	_tmp6_ = apt_archives;
	_tmp7_ = g_file_query_exists (_tmp6_, NULL);
	if (_tmp7_) {
		return_value = TRUE;
	}
	_tmp8_ = apt_lists;
	_tmp9_ = g_file_query_exists (_tmp8_, NULL);
	if (_tmp9_) {
		return_value = TRUE;
	}
	_tmp10_ = unattended_upgrades;
	_tmp11_ = g_file_query_exists (_tmp10_, NULL);
	if (_tmp11_) {
		return_value = TRUE;
	}
	result = return_value;
	_g_object_unref0 (unattended_upgrades);
	_g_object_unref0 (apt_lists);
	_g_object_unref0 (apt_archives);
	_g_object_unref0 (dpkg);
	return result;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}



