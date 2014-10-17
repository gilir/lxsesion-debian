/* autostart.c generated by valac 0.26.0, the Vala compiler
 * generated from autostart.vala, do not modify */

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
#include <gio/gio.h>


#define LXSESSION_TYPE_LXSESSION_AUTOSTART_CONFIG (lxsession_lxsession_autostart_config_get_type ())
#define LXSESSION_LXSESSION_AUTOSTART_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LXSESSION_TYPE_LXSESSION_AUTOSTART_CONFIG, LxsessionLxsessionAutostartConfig))
#define LXSESSION_LXSESSION_AUTOSTART_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LXSESSION_TYPE_LXSESSION_AUTOSTART_CONFIG, LxsessionLxsessionAutostartConfigClass))
#define LXSESSION_IS_LXSESSION_AUTOSTART_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LXSESSION_TYPE_LXSESSION_AUTOSTART_CONFIG))
#define LXSESSION_IS_LXSESSION_AUTOSTART_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LXSESSION_TYPE_LXSESSION_AUTOSTART_CONFIG))
#define LXSESSION_LXSESSION_AUTOSTART_CONFIG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LXSESSION_TYPE_LXSESSION_AUTOSTART_CONFIG, LxsessionLxsessionAutostartConfigClass))

typedef struct _LxsessionLxsessionAutostartConfig LxsessionLxsessionAutostartConfig;
typedef struct _LxsessionLxsessionAutostartConfigClass LxsessionLxsessionAutostartConfigClass;
typedef struct _LxsessionLxsessionAutostartConfigPrivate LxsessionLxsessionAutostartConfigPrivate;

#define LXSESSION_TYPE_APP_TYPE (lxsession_app_type_get_type ())
typedef struct _LxsessionAppType LxsessionAppType;
#define _g_array_unref0(var) ((var == NULL) ? NULL : (var = (g_array_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

#define LXSESSION_TYPE_APP_OBJECT (lxsession_app_object_get_type ())
#define LXSESSION_APP_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LXSESSION_TYPE_APP_OBJECT, LxsessionAppObject))
#define LXSESSION_APP_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LXSESSION_TYPE_APP_OBJECT, LxsessionAppObjectClass))
#define LXSESSION_IS_APP_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LXSESSION_TYPE_APP_OBJECT))
#define LXSESSION_IS_APP_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LXSESSION_TYPE_APP_OBJECT))
#define LXSESSION_APP_OBJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LXSESSION_TYPE_APP_OBJECT, LxsessionAppObjectClass))

typedef struct _LxsessionAppObject LxsessionAppObject;
typedef struct _LxsessionAppObjectClass LxsessionAppObjectClass;

#define LXSESSION_TYPE_GENERIC_APP_OBJECT (lxsession_generic_app_object_get_type ())
#define LXSESSION_GENERIC_APP_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LXSESSION_TYPE_GENERIC_APP_OBJECT, LxsessionGenericAppObject))
#define LXSESSION_GENERIC_APP_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LXSESSION_TYPE_GENERIC_APP_OBJECT, LxsessionGenericAppObjectClass))
#define LXSESSION_IS_GENERIC_APP_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LXSESSION_TYPE_GENERIC_APP_OBJECT))
#define LXSESSION_IS_GENERIC_APP_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LXSESSION_TYPE_GENERIC_APP_OBJECT))
#define LXSESSION_GENERIC_APP_OBJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LXSESSION_TYPE_GENERIC_APP_OBJECT, LxsessionGenericAppObjectClass))

typedef struct _LxsessionGenericAppObject LxsessionGenericAppObject;
typedef struct _LxsessionGenericAppObjectClass LxsessionGenericAppObjectClass;

struct _LxsessionLxsessionAutostartConfig {
	GObject parent_instance;
	LxsessionLxsessionAutostartConfigPrivate * priv;
};

struct _LxsessionLxsessionAutostartConfigClass {
	GObjectClass parent_class;
};

struct _LxsessionAppType {
	gchar* name;
	gchar** command;
	gint command_length1;
	gboolean guard;
	gchar* application_type;
};

struct _LxsessionLxsessionAutostartConfigPrivate {
	GArray* stock_list;
};


static gpointer lxsession_lxsession_autostart_config_parent_class = NULL;

GType lxsession_lxsession_autostart_config_get_type (void) G_GNUC_CONST;
GType lxsession_app_type_get_type (void) G_GNUC_CONST;
LxsessionAppType* lxsession_app_type_dup (const LxsessionAppType* self);
void lxsession_app_type_free (LxsessionAppType* self);
void lxsession_app_type_copy (const LxsessionAppType* self, LxsessionAppType* dest);
void lxsession_app_type_destroy (LxsessionAppType* self);
#define LXSESSION_LXSESSION_AUTOSTART_CONFIG_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), LXSESSION_TYPE_LXSESSION_AUTOSTART_CONFIG, LxsessionLxsessionAutostartConfigPrivate))
enum  {
	LXSESSION_LXSESSION_AUTOSTART_CONFIG_DUMMY_PROPERTY
};
LxsessionLxsessionAutostartConfig* lxsession_lxsession_autostart_config_new (void);
LxsessionLxsessionAutostartConfig* lxsession_lxsession_autostart_config_construct (GType object_type);
GArray* lxsession_lxsession_autostart_config_load_autostart_file (LxsessionLxsessionAutostartConfig* self);
gchar* lxsession_get_config_path (const gchar* conf_file);
static gchar** _vala_array_dup4 (gchar** self, int length);
static gchar** _vala_array_dup5 (gchar** self, int length);
void lxsession_lxsession_autostart_config_start_applications (LxsessionLxsessionAutostartConfig* self);
GType lxsession_app_object_get_type (void) G_GNUC_CONST;
GType lxsession_generic_app_object_get_type (void) G_GNUC_CONST;
LxsessionGenericAppObject* lxsession_generic_app_object_new (LxsessionAppType* app_type);
LxsessionGenericAppObject* lxsession_generic_app_object_construct (GType object_type, LxsessionAppType* app_type);
void lxsession_app_object_launch (LxsessionAppObject* self);
void lxsession_lxsession_autostart_config_check_dupplicate (LxsessionLxsessionAutostartConfig* self);
static void lxsession_lxsession_autostart_config_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


LxsessionLxsessionAutostartConfig* lxsession_lxsession_autostart_config_construct (GType object_type) {
	LxsessionLxsessionAutostartConfig * self = NULL;
	GArray* _tmp0_ = NULL;
	self = (LxsessionLxsessionAutostartConfig*) g_object_new (object_type, NULL);
	_tmp0_ = lxsession_lxsession_autostart_config_load_autostart_file (self);
	_g_array_unref0 (self->priv->stock_list);
	self->priv->stock_list = _tmp0_;
	return self;
}


LxsessionLxsessionAutostartConfig* lxsession_lxsession_autostart_config_new (void) {
	return lxsession_lxsession_autostart_config_construct (LXSESSION_TYPE_LXSESSION_AUTOSTART_CONFIG);
}


static gchar* string_slice (const gchar* self, glong start, glong end) {
	gchar* result = NULL;
	glong string_length = 0L;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	glong _tmp2_ = 0L;
	glong _tmp5_ = 0L;
	gboolean _tmp8_ = FALSE;
	glong _tmp9_ = 0L;
	gboolean _tmp12_ = FALSE;
	glong _tmp13_ = 0L;
	glong _tmp16_ = 0L;
	glong _tmp17_ = 0L;
	glong _tmp18_ = 0L;
	glong _tmp19_ = 0L;
	glong _tmp20_ = 0L;
	gchar* _tmp21_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = strlen (self);
	_tmp1_ = _tmp0_;
	string_length = (glong) _tmp1_;
	_tmp2_ = start;
	if (_tmp2_ < ((glong) 0)) {
		glong _tmp3_ = 0L;
		glong _tmp4_ = 0L;
		_tmp3_ = string_length;
		_tmp4_ = start;
		start = _tmp3_ + _tmp4_;
	}
	_tmp5_ = end;
	if (_tmp5_ < ((glong) 0)) {
		glong _tmp6_ = 0L;
		glong _tmp7_ = 0L;
		_tmp6_ = string_length;
		_tmp7_ = end;
		end = _tmp6_ + _tmp7_;
	}
	_tmp9_ = start;
	if (_tmp9_ >= ((glong) 0)) {
		glong _tmp10_ = 0L;
		glong _tmp11_ = 0L;
		_tmp10_ = start;
		_tmp11_ = string_length;
		_tmp8_ = _tmp10_ <= _tmp11_;
	} else {
		_tmp8_ = FALSE;
	}
	g_return_val_if_fail (_tmp8_, NULL);
	_tmp13_ = end;
	if (_tmp13_ >= ((glong) 0)) {
		glong _tmp14_ = 0L;
		glong _tmp15_ = 0L;
		_tmp14_ = end;
		_tmp15_ = string_length;
		_tmp12_ = _tmp14_ <= _tmp15_;
	} else {
		_tmp12_ = FALSE;
	}
	g_return_val_if_fail (_tmp12_, NULL);
	_tmp16_ = start;
	_tmp17_ = end;
	g_return_val_if_fail (_tmp16_ <= _tmp17_, NULL);
	_tmp18_ = start;
	_tmp19_ = end;
	_tmp20_ = start;
	_tmp21_ = g_strndup (((gchar*) self) + _tmp18_, (gsize) (_tmp19_ - _tmp20_));
	result = _tmp21_;
	return result;
}


static gchar** _vala_array_dup4 (gchar** self, int length) {
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


static gpointer _lxsession_app_type_dup0 (gpointer self) {
	return self ? lxsession_app_type_dup (self) : NULL;
}


static gchar** _vala_array_dup5 (gchar** self, int length) {
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


GArray* lxsession_lxsession_autostart_config_load_autostart_file (LxsessionLxsessionAutostartConfig* self) {
	GArray* result = NULL;
	GFile* file = NULL;
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	GFile* _tmp2_ = NULL;
	GFile* _tmp3_ = NULL;
	GArray* app_list = NULL;
	GArray* _tmp4_ = NULL;
	GFile* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	GFile* _tmp8_ = NULL;
	gboolean _tmp9_ = FALSE;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = lxsession_get_config_path ("autostart");
	_tmp1_ = _tmp0_;
	_tmp2_ = g_file_new_for_path (_tmp1_);
	_tmp3_ = _tmp2_;
	_g_free0 (_tmp1_);
	file = _tmp3_;
	_tmp4_ = g_array_new (TRUE, TRUE, sizeof (LxsessionAppType*));
	app_list = _tmp4_;
	_tmp5_ = file;
	_tmp6_ = g_file_get_path (_tmp5_);
	_tmp7_ = _tmp6_;
	g_message ("autostart.vala:42: Autostart path : %s", _tmp7_);
	_g_free0 (_tmp7_);
	_tmp8_ = file;
	_tmp9_ = g_file_query_exists (_tmp8_, NULL);
	if (_tmp9_) {
		{
			GFileInputStream* _tmp10_ = NULL;
			GFile* _tmp11_ = NULL;
			GFileInputStream* _tmp12_ = NULL;
			GDataInputStream* dis = NULL;
			GDataInputStream* _tmp13_ = NULL;
			gchar* line = NULL;
			_tmp11_ = file;
			_tmp12_ = g_file_read (_tmp11_, NULL, &_inner_error_);
			_tmp10_ = _tmp12_;
			if (G_UNLIKELY (_inner_error_ != NULL)) {
				goto __catch6_g_error;
			}
			_tmp13_ = g_data_input_stream_new ((GInputStream*) _tmp10_);
			dis = _tmp13_;
			while (TRUE) {
				gchar* _tmp14_ = NULL;
				GDataInputStream* _tmp15_ = NULL;
				gchar* _tmp16_ = NULL;
				gchar* _tmp17_ = NULL;
				const gchar* _tmp18_ = NULL;
				gchar* first = NULL;
				const gchar* _tmp19_ = NULL;
				gchar* _tmp20_ = NULL;
				const gchar* _tmp21_ = NULL;
				const gchar* _tmp22_ = NULL;
				GQuark _tmp24_ = 0U;
				static GQuark _tmp23_label0 = 0;
				static GQuark _tmp23_label1 = 0;
				_tmp15_ = dis;
				_tmp16_ = g_data_input_stream_read_line (_tmp15_, NULL, NULL, &_inner_error_);
				_tmp14_ = _tmp16_;
				if (G_UNLIKELY (_inner_error_ != NULL)) {
					_g_free0 (line);
					_g_object_unref0 (dis);
					_g_object_unref0 (_tmp10_);
					goto __catch6_g_error;
				}
				_tmp17_ = _tmp14_;
				_tmp14_ = NULL;
				_g_free0 (line);
				line = _tmp17_;
				_tmp18_ = line;
				if (!(_tmp18_ != NULL)) {
					_g_free0 (_tmp14_);
					break;
				}
				_tmp19_ = line;
				_tmp20_ = string_slice (_tmp19_, (glong) 0, (glong) 1);
				first = _tmp20_;
				_tmp21_ = first;
				_tmp22_ = _tmp21_;
				_tmp24_ = (NULL == _tmp22_) ? 0 : g_quark_from_string (_tmp22_);
				if (_tmp24_ == ((0 != _tmp23_label0) ? _tmp23_label0 : (_tmp23_label0 = g_quark_from_static_string ("@")))) {
					switch (0) {
						default:
						{
							GString* builder = NULL;
							GString* _tmp25_ = NULL;
							GString* _tmp26_ = NULL;
							const gchar* _tmp27_ = NULL;
							GString* _tmp28_ = NULL;
							gchar** command = NULL;
							GString* _tmp29_ = NULL;
							const gchar* _tmp30_ = NULL;
							gchar** _tmp31_ = NULL;
							gchar** _tmp32_ = NULL;
							gint command_length1 = 0;
							gint _command_size_ = 0;
							LxsessionAppType app = {0};
							gchar** _tmp33_ = NULL;
							gint _tmp33__length1 = 0;
							const gchar* _tmp34_ = NULL;
							gchar* _tmp35_ = NULL;
							gchar** _tmp36_ = NULL;
							gint _tmp36__length1 = 0;
							gchar** _tmp37_ = NULL;
							gint _tmp37__length1 = 0;
							gchar* _tmp38_ = NULL;
							LxsessionAppType _tmp39_ = {0};
							GArray* _tmp40_ = NULL;
							LxsessionAppType _tmp41_ = {0};
							LxsessionAppType _tmp42_ = {0};
							LxsessionAppType* _tmp43_ = NULL;
							_tmp25_ = g_string_new ("");
							builder = _tmp25_;
							_tmp26_ = builder;
							_tmp27_ = line;
							g_string_append (_tmp26_, _tmp27_);
							_tmp28_ = builder;
							g_string_erase (_tmp28_, (gssize) 0, (gssize) 1);
							_tmp29_ = builder;
							_tmp30_ = _tmp29_->str;
							_tmp32_ = _tmp31_ = g_strsplit_set (_tmp30_, " ", 0);
							command = _tmp32_;
							command_length1 = _vala_array_length (_tmp31_);
							_command_size_ = command_length1;
							_tmp33_ = command;
							_tmp33__length1 = command_length1;
							_tmp34_ = _tmp33_[0];
							_tmp35_ = g_strdup (_tmp34_);
							_tmp36_ = command;
							_tmp36__length1 = command_length1;
							_tmp37_ = (_tmp36_ != NULL) ? _vala_array_dup4 (_tmp36_, _tmp36__length1) : ((gpointer) _tmp36_);
							_tmp37__length1 = _tmp36__length1;
							_tmp38_ = g_strdup ("");
							_g_free0 (_tmp39_.name);
							_tmp39_.name = _tmp35_;
							_tmp39_.command = (_vala_array_free (_tmp39_.command, _tmp39_.command_length1, (GDestroyNotify) g_free), NULL);
							_tmp39_.command = _tmp37_;
							_tmp39_.command_length1 = _tmp37__length1;
							_tmp39_.guard = TRUE;
							_g_free0 (_tmp39_.application_type);
							_tmp39_.application_type = _tmp38_;
							app = _tmp39_;
							_tmp40_ = app_list;
							_tmp41_ = app;
							_tmp42_ = _tmp41_;
							_tmp43_ = _lxsession_app_type_dup0 (&_tmp42_);
							g_array_append_val (_tmp40_, _tmp43_);
							lxsession_app_type_destroy (&app);
							command = (_vala_array_free (command, command_length1, (GDestroyNotify) g_free), NULL);
							_g_string_free0 (builder);
							break;
						}
					}
				} else if (_tmp24_ == ((0 != _tmp23_label1) ? _tmp23_label1 : (_tmp23_label1 = g_quark_from_static_string ("#")))) {
					switch (0) {
						default:
						{
							break;
						}
					}
				} else {
					switch (0) {
						default:
						{
							gchar** command = NULL;
							const gchar* _tmp44_ = NULL;
							gchar** _tmp45_ = NULL;
							gchar** _tmp46_ = NULL;
							gint command_length1 = 0;
							gint _command_size_ = 0;
							LxsessionAppType app = {0};
							gchar** _tmp47_ = NULL;
							gint _tmp47__length1 = 0;
							const gchar* _tmp48_ = NULL;
							gchar* _tmp49_ = NULL;
							gchar** _tmp50_ = NULL;
							gint _tmp50__length1 = 0;
							gchar** _tmp51_ = NULL;
							gint _tmp51__length1 = 0;
							gchar* _tmp52_ = NULL;
							LxsessionAppType _tmp53_ = {0};
							GArray* _tmp54_ = NULL;
							LxsessionAppType _tmp55_ = {0};
							LxsessionAppType _tmp56_ = {0};
							LxsessionAppType* _tmp57_ = NULL;
							_tmp44_ = line;
							_tmp46_ = _tmp45_ = g_strsplit_set (_tmp44_, " ", 0);
							command = _tmp46_;
							command_length1 = _vala_array_length (_tmp45_);
							_command_size_ = command_length1;
							_tmp47_ = command;
							_tmp47__length1 = command_length1;
							_tmp48_ = _tmp47_[0];
							_tmp49_ = g_strdup (_tmp48_);
							_tmp50_ = command;
							_tmp50__length1 = command_length1;
							_tmp51_ = (_tmp50_ != NULL) ? _vala_array_dup5 (_tmp50_, _tmp50__length1) : ((gpointer) _tmp50_);
							_tmp51__length1 = _tmp50__length1;
							_tmp52_ = g_strdup ("");
							_g_free0 (_tmp53_.name);
							_tmp53_.name = _tmp49_;
							_tmp53_.command = (_vala_array_free (_tmp53_.command, _tmp53_.command_length1, (GDestroyNotify) g_free), NULL);
							_tmp53_.command = _tmp51_;
							_tmp53_.command_length1 = _tmp51__length1;
							_tmp53_.guard = FALSE;
							_g_free0 (_tmp53_.application_type);
							_tmp53_.application_type = _tmp52_;
							app = _tmp53_;
							_tmp54_ = app_list;
							_tmp55_ = app;
							_tmp56_ = _tmp55_;
							_tmp57_ = _lxsession_app_type_dup0 (&_tmp56_);
							g_array_append_val (_tmp54_, _tmp57_);
							lxsession_app_type_destroy (&app);
							command = (_vala_array_free (command, command_length1, (GDestroyNotify) g_free), NULL);
							break;
						}
					}
				}
				_g_free0 (first);
				_g_free0 (_tmp14_);
			}
			_g_free0 (line);
			_g_object_unref0 (dis);
			_g_object_unref0 (_tmp10_);
		}
		goto __finally6;
		__catch6_g_error:
		{
			GError* e = NULL;
			const gchar* _tmp58_ = NULL;
			e = _inner_error_;
			_inner_error_ = NULL;
			_tmp58_ = e->message;
			g_error ("autostart.vala:75: %s", _tmp58_);
			_g_error_free0 (e);
		}
		__finally6:
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_array_unref0 (app_list);
			_g_object_unref0 (file);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	result = app_list;
	_g_object_unref0 (file);
	return result;
}


void lxsession_lxsession_autostart_config_start_applications (LxsessionLxsessionAutostartConfig* self) {
	g_return_if_fail (self != NULL);
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp0_ = FALSE;
			_tmp0_ = TRUE;
			while (TRUE) {
				gint _tmp2_ = 0;
				GArray* _tmp3_ = NULL;
				guint _tmp4_ = 0U;
				LxsessionAppType s = {0};
				GArray* _tmp5_ = NULL;
				gint _tmp6_ = 0;
				LxsessionAppType* _tmp7_ = NULL;
				LxsessionGenericAppObject* launch_app = NULL;
				LxsessionAppType _tmp8_ = {0};
				LxsessionGenericAppObject* _tmp9_ = NULL;
				LxsessionGenericAppObject* _tmp10_ = NULL;
				if (!_tmp0_) {
					gint _tmp1_ = 0;
					_tmp1_ = i;
					i = _tmp1_ + 1;
				}
				_tmp0_ = FALSE;
				_tmp2_ = i;
				_tmp3_ = self->priv->stock_list;
				_tmp4_ = _tmp3_->len;
				if (!(((guint) _tmp2_) < _tmp4_)) {
					break;
				}
				_tmp5_ = self->priv->stock_list;
				_tmp6_ = i;
				_tmp7_ = g_array_index (_tmp5_, LxsessionAppType*, (guint) _tmp6_);
				s = *_tmp7_;
				_tmp8_ = s;
				_tmp9_ = lxsession_generic_app_object_new (&_tmp8_);
				launch_app = _tmp9_;
				_tmp10_ = launch_app;
				lxsession_app_object_launch ((LxsessionAppObject*) _tmp10_);
				_g_object_unref0 (launch_app);
			}
		}
	}
}


void lxsession_lxsession_autostart_config_check_dupplicate (LxsessionLxsessionAutostartConfig* self) {
	g_return_if_fail (self != NULL);
}


static void lxsession_lxsession_autostart_config_class_init (LxsessionLxsessionAutostartConfigClass * klass) {
	lxsession_lxsession_autostart_config_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (LxsessionLxsessionAutostartConfigPrivate));
	G_OBJECT_CLASS (klass)->finalize = lxsession_lxsession_autostart_config_finalize;
}


static void lxsession_lxsession_autostart_config_instance_init (LxsessionLxsessionAutostartConfig * self) {
	self->priv = LXSESSION_LXSESSION_AUTOSTART_CONFIG_GET_PRIVATE (self);
}


static void lxsession_lxsession_autostart_config_finalize (GObject* obj) {
	LxsessionLxsessionAutostartConfig * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, LXSESSION_TYPE_LXSESSION_AUTOSTART_CONFIG, LxsessionLxsessionAutostartConfig);
	_g_array_unref0 (self->priv->stock_list);
	G_OBJECT_CLASS (lxsession_lxsession_autostart_config_parent_class)->finalize (obj);
}


GType lxsession_lxsession_autostart_config_get_type (void) {
	static volatile gsize lxsession_lxsession_autostart_config_type_id__volatile = 0;
	if (g_once_init_enter (&lxsession_lxsession_autostart_config_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LxsessionLxsessionAutostartConfigClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) lxsession_lxsession_autostart_config_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LxsessionLxsessionAutostartConfig), 0, (GInstanceInitFunc) lxsession_lxsession_autostart_config_instance_init, NULL };
		GType lxsession_lxsession_autostart_config_type_id;
		lxsession_lxsession_autostart_config_type_id = g_type_register_static (G_TYPE_OBJECT, "LxsessionLxsessionAutostartConfig", &g_define_type_info, 0);
		g_once_init_leave (&lxsession_lxsession_autostart_config_type_id__volatile, lxsession_lxsession_autostart_config_type_id);
	}
	return lxsession_lxsession_autostart_config_type_id__volatile;
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



