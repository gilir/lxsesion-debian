/* options.c generated by valac 0.26.0, the Vala compiler
 * generated from options.vala, do not modify */

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
/* TODO Replace other utlity in the start script */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <lxsettings-daemon/settings-daemon.h>


#define LXSESSION_TYPE_OPTION (lxsession_option_get_type ())
#define LXSESSION_OPTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LXSESSION_TYPE_OPTION, LxsessionOption))
#define LXSESSION_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LXSESSION_TYPE_OPTION, LxsessionOptionClass))
#define LXSESSION_IS_OPTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LXSESSION_TYPE_OPTION))
#define LXSESSION_IS_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LXSESSION_TYPE_OPTION))
#define LXSESSION_OPTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LXSESSION_TYPE_OPTION, LxsessionOptionClass))

typedef struct _LxsessionOption LxsessionOption;
typedef struct _LxsessionOptionClass LxsessionOptionClass;
typedef struct _LxsessionOptionPrivate LxsessionOptionPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

#define LXSESSION_TYPE_LXSESSION_CONFIG (lxsession_lxsession_config_get_type ())
#define LXSESSION_LXSESSION_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LXSESSION_TYPE_LXSESSION_CONFIG, LxsessionLxsessionConfig))
#define LXSESSION_LXSESSION_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LXSESSION_TYPE_LXSESSION_CONFIG, LxsessionLxsessionConfigClass))
#define LXSESSION_IS_LXSESSION_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LXSESSION_TYPE_LXSESSION_CONFIG))
#define LXSESSION_IS_LXSESSION_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LXSESSION_TYPE_LXSESSION_CONFIG))
#define LXSESSION_LXSESSION_CONFIG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LXSESSION_TYPE_LXSESSION_CONFIG, LxsessionLxsessionConfigClass))

typedef struct _LxsessionLxsessionConfig LxsessionLxsessionConfig;
typedef struct _LxsessionLxsessionConfigClass LxsessionLxsessionConfigClass;

#define LXSESSION_TYPE_KEYMAP_OPTION (lxsession_keymap_option_get_type ())
#define LXSESSION_KEYMAP_OPTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LXSESSION_TYPE_KEYMAP_OPTION, LxsessionKeymapOption))
#define LXSESSION_KEYMAP_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LXSESSION_TYPE_KEYMAP_OPTION, LxsessionKeymapOptionClass))
#define LXSESSION_IS_KEYMAP_OPTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LXSESSION_TYPE_KEYMAP_OPTION))
#define LXSESSION_IS_KEYMAP_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LXSESSION_TYPE_KEYMAP_OPTION))
#define LXSESSION_KEYMAP_OPTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LXSESSION_TYPE_KEYMAP_OPTION, LxsessionKeymapOptionClass))

typedef struct _LxsessionKeymapOption LxsessionKeymapOption;
typedef struct _LxsessionKeymapOptionClass LxsessionKeymapOptionClass;
typedef struct _LxsessionKeymapOptionPrivate LxsessionKeymapOptionPrivate;
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

#define LXSESSION_TYPE_CLIPBOARD_OPTION (lxsession_clipboard_option_get_type ())
#define LXSESSION_CLIPBOARD_OPTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LXSESSION_TYPE_CLIPBOARD_OPTION, LxsessionClipboardOption))
#define LXSESSION_CLIPBOARD_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LXSESSION_TYPE_CLIPBOARD_OPTION, LxsessionClipboardOptionClass))
#define LXSESSION_IS_CLIPBOARD_OPTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LXSESSION_TYPE_CLIPBOARD_OPTION))
#define LXSESSION_IS_CLIPBOARD_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LXSESSION_TYPE_CLIPBOARD_OPTION))
#define LXSESSION_CLIPBOARD_OPTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LXSESSION_TYPE_CLIPBOARD_OPTION, LxsessionClipboardOptionClass))

typedef struct _LxsessionClipboardOption LxsessionClipboardOption;
typedef struct _LxsessionClipboardOptionClass LxsessionClipboardOptionClass;
typedef struct _LxsessionClipboardOptionPrivate LxsessionClipboardOptionPrivate;

#define LXSESSION_TYPE_UPSTART_USER_SESSION_OPTION (lxsession_upstart_user_session_option_get_type ())
#define LXSESSION_UPSTART_USER_SESSION_OPTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LXSESSION_TYPE_UPSTART_USER_SESSION_OPTION, LxsessionUpstartUserSessionOption))
#define LXSESSION_UPSTART_USER_SESSION_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LXSESSION_TYPE_UPSTART_USER_SESSION_OPTION, LxsessionUpstartUserSessionOptionClass))
#define LXSESSION_IS_UPSTART_USER_SESSION_OPTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LXSESSION_TYPE_UPSTART_USER_SESSION_OPTION))
#define LXSESSION_IS_UPSTART_USER_SESSION_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LXSESSION_TYPE_UPSTART_USER_SESSION_OPTION))
#define LXSESSION_UPSTART_USER_SESSION_OPTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LXSESSION_TYPE_UPSTART_USER_SESSION_OPTION, LxsessionUpstartUserSessionOptionClass))

typedef struct _LxsessionUpstartUserSessionOption LxsessionUpstartUserSessionOption;
typedef struct _LxsessionUpstartUserSessionOptionClass LxsessionUpstartUserSessionOptionClass;
typedef struct _LxsessionUpstartUserSessionOptionPrivate LxsessionUpstartUserSessionOptionPrivate;

#define LXSESSION_TYPE_XSETTINGS_OPTION (lxsession_xsettings_option_get_type ())
#define LXSESSION_XSETTINGS_OPTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LXSESSION_TYPE_XSETTINGS_OPTION, LxsessionXSettingsOption))
#define LXSESSION_XSETTINGS_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LXSESSION_TYPE_XSETTINGS_OPTION, LxsessionXSettingsOptionClass))
#define LXSESSION_IS_XSETTINGS_OPTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LXSESSION_TYPE_XSETTINGS_OPTION))
#define LXSESSION_IS_XSETTINGS_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LXSESSION_TYPE_XSETTINGS_OPTION))
#define LXSESSION_XSETTINGS_OPTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LXSESSION_TYPE_XSETTINGS_OPTION, LxsessionXSettingsOptionClass))

typedef struct _LxsessionXSettingsOption LxsessionXSettingsOption;
typedef struct _LxsessionXSettingsOptionClass LxsessionXSettingsOptionClass;
typedef struct _LxsessionXSettingsOptionPrivate LxsessionXSettingsOptionPrivate;

#define LXSESSION_TYPE_LXSESSION_CONFIG_KEY_FILE (lxsession_lxsession_config_key_file_get_type ())
#define LXSESSION_LXSESSION_CONFIG_KEY_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LXSESSION_TYPE_LXSESSION_CONFIG_KEY_FILE, LxsessionLxsessionConfigKeyFile))
#define LXSESSION_LXSESSION_CONFIG_KEY_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LXSESSION_TYPE_LXSESSION_CONFIG_KEY_FILE, LxsessionLxsessionConfigKeyFileClass))
#define LXSESSION_IS_LXSESSION_CONFIG_KEY_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LXSESSION_TYPE_LXSESSION_CONFIG_KEY_FILE))
#define LXSESSION_IS_LXSESSION_CONFIG_KEY_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LXSESSION_TYPE_LXSESSION_CONFIG_KEY_FILE))
#define LXSESSION_LXSESSION_CONFIG_KEY_FILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LXSESSION_TYPE_LXSESSION_CONFIG_KEY_FILE, LxsessionLxsessionConfigKeyFileClass))

typedef struct _LxsessionLxsessionConfigKeyFile LxsessionLxsessionConfigKeyFile;
typedef struct _LxsessionLxsessionConfigKeyFileClass LxsessionLxsessionConfigKeyFileClass;
#define _g_key_file_free0(var) ((var == NULL) ? NULL : (var = (g_key_file_free (var), NULL)))

struct _LxsessionOption {
	GObject parent_instance;
	LxsessionOptionPrivate * priv;
	gchar* command;
};

struct _LxsessionOptionClass {
	GObjectClass parent_class;
};

struct _LxsessionKeymapOption {
	LxsessionOption parent_instance;
	LxsessionKeymapOptionPrivate * priv;
};

struct _LxsessionKeymapOptionClass {
	LxsessionOptionClass parent_class;
};

struct _LxsessionClipboardOption {
	LxsessionOption parent_instance;
	LxsessionClipboardOptionPrivate * priv;
};

struct _LxsessionClipboardOptionClass {
	LxsessionOptionClass parent_class;
};

struct _LxsessionUpstartUserSessionOption {
	LxsessionOption parent_instance;
	LxsessionUpstartUserSessionOptionPrivate * priv;
};

struct _LxsessionUpstartUserSessionOptionClass {
	LxsessionOptionClass parent_class;
};

struct _LxsessionUpstartUserSessionOptionPrivate {
	gchar* command1;
};

struct _LxsessionXSettingsOption {
	GObject parent_instance;
	LxsessionXSettingsOptionPrivate * priv;
};

struct _LxsessionXSettingsOptionClass {
	GObjectClass parent_class;
};

struct _LxsessionXSettingsOptionPrivate {
	gchar* command;
};


static gpointer lxsession_option_parent_class = NULL;
static gpointer lxsession_keymap_option_parent_class = NULL;
static gpointer lxsession_clipboard_option_parent_class = NULL;
static gpointer lxsession_upstart_user_session_option_parent_class = NULL;
static gpointer lxsession_xsettings_option_parent_class = NULL;
extern LxsessionLxsessionConfigKeyFile* lxsession_global_settings;

GType lxsession_option_get_type (void) G_GNUC_CONST;
enum  {
	LXSESSION_OPTION_DUMMY_PROPERTY
};
GType lxsession_lxsession_config_get_type (void) G_GNUC_CONST;
LxsessionOption* lxsession_option_new (LxsessionLxsessionConfig* config);
LxsessionOption* lxsession_option_construct (GType object_type, LxsessionLxsessionConfig* config);
void lxsession_option_activate (LxsessionOption* self);
void lxsession_lxsession_spawn_command_line_async (const gchar* command_line);
static void lxsession_option_finalize (GObject* obj);
GType lxsession_keymap_option_get_type (void) G_GNUC_CONST;
enum  {
	LXSESSION_KEYMAP_OPTION_DUMMY_PROPERTY
};
LxsessionKeymapOption* lxsession_keymap_option_new (LxsessionLxsessionConfig* config);
LxsessionKeymapOption* lxsession_keymap_option_construct (GType object_type, LxsessionLxsessionConfig* config);
gchar* lxsession_lxsession_config_get_item_string (LxsessionLxsessionConfig* self, const gchar* categorie, const gchar* key1, const gchar* key2);
gchar* lxsession_keymap_option_create_user_mode_command (LxsessionKeymapOption* self, LxsessionLxsessionConfig* config);
GType lxsession_clipboard_option_get_type (void) G_GNUC_CONST;
enum  {
	LXSESSION_CLIPBOARD_OPTION_DUMMY_PROPERTY
};
LxsessionClipboardOption* lxsession_clipboard_option_new (LxsessionLxsessionConfig* config);
LxsessionClipboardOption* lxsession_clipboard_option_construct (GType object_type, LxsessionLxsessionConfig* config);
void lxsession_clipboard_option_desactivate (LxsessionClipboardOption* self);
GType lxsession_upstart_user_session_option_get_type (void) G_GNUC_CONST;
#define LXSESSION_UPSTART_USER_SESSION_OPTION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), LXSESSION_TYPE_UPSTART_USER_SESSION_OPTION, LxsessionUpstartUserSessionOptionPrivate))
enum  {
	LXSESSION_UPSTART_USER_SESSION_OPTION_DUMMY_PROPERTY
};
LxsessionUpstartUserSessionOption* lxsession_upstart_user_session_option_new (LxsessionLxsessionConfig* config);
LxsessionUpstartUserSessionOption* lxsession_upstart_user_session_option_construct (GType object_type, LxsessionLxsessionConfig* config);
void lxsession_upstart_user_session_option_activate (LxsessionUpstartUserSessionOption* self);
static void lxsession_upstart_user_session_option_finalize (GObject* obj);
GType lxsession_xsettings_option_get_type (void) G_GNUC_CONST;
#define LXSESSION_XSETTINGS_OPTION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), LXSESSION_TYPE_XSETTINGS_OPTION, LxsessionXSettingsOptionPrivate))
enum  {
	LXSESSION_XSETTINGS_OPTION_DUMMY_PROPERTY
};
LxsessionXSettingsOption* lxsession_xsettings_option_new (void);
LxsessionXSettingsOption* lxsession_xsettings_option_construct (GType object_type);
void lxsession_xsettings_option_activate (LxsessionXSettingsOption* self);
GType lxsession_lxsession_config_key_file_get_type (void) G_GNUC_CONST;
GKeyFile* lxsession_load_keyfile (const gchar* config_path);
gchar* lxsession_get_config_path (const gchar* conf_file);
void lxsession_xsettings_option_reload (LxsessionXSettingsOption* self);
static void lxsession_xsettings_option_finalize (GObject* obj);


LxsessionOption* lxsession_option_construct (GType object_type, LxsessionLxsessionConfig* config) {
	LxsessionOption * self = NULL;
	g_return_val_if_fail (config != NULL, NULL);
	self = (LxsessionOption*) g_object_new (object_type, NULL);
	return self;
}


LxsessionOption* lxsession_option_new (LxsessionLxsessionConfig* config) {
	return lxsession_option_construct (LXSESSION_TYPE_OPTION, config);
}


void lxsession_option_activate (LxsessionOption* self) {
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GQuark _tmp3_ = 0U;
	static GQuark _tmp2_label0 = 0;
	static GQuark _tmp2_label1 = 0;
	static GQuark _tmp2_label2 = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->command;
	_tmp1_ = _tmp0_;
	_tmp3_ = (NULL == _tmp1_) ? 0 : g_quark_from_string (_tmp1_);
	if (_tmp3_ == ((0 != _tmp2_label0) ? _tmp2_label0 : (_tmp2_label0 = g_quark_from_static_string (NULL)))) {
		switch (0) {
			default:
			{
				break;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label1) ? _tmp2_label1 : (_tmp2_label1 = g_quark_from_static_string ("")))) {
		switch (0) {
			default:
			{
				break;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label2) ? _tmp2_label2 : (_tmp2_label2 = g_quark_from_static_string (" ")))) {
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
				const gchar* _tmp4_ = NULL;
				const gchar* _tmp5_ = NULL;
				_tmp4_ = self->command;
				g_message ("options.vala:44: Options - Launch command %s", _tmp4_);
				_tmp5_ = self->command;
				lxsession_lxsession_spawn_command_line_async (_tmp5_);
				break;
			}
		}
	}
}


static void lxsession_option_class_init (LxsessionOptionClass * klass) {
	lxsession_option_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = lxsession_option_finalize;
}


static void lxsession_option_instance_init (LxsessionOption * self) {
}


static void lxsession_option_finalize (GObject* obj) {
	LxsessionOption * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, LXSESSION_TYPE_OPTION, LxsessionOption);
	_g_free0 (self->command);
	G_OBJECT_CLASS (lxsession_option_parent_class)->finalize (obj);
}


GType lxsession_option_get_type (void) {
	static volatile gsize lxsession_option_type_id__volatile = 0;
	if (g_once_init_enter (&lxsession_option_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LxsessionOptionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) lxsession_option_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LxsessionOption), 0, (GInstanceInitFunc) lxsession_option_instance_init, NULL };
		GType lxsession_option_type_id;
		lxsession_option_type_id = g_type_register_static (G_TYPE_OBJECT, "LxsessionOption", &g_define_type_info, 0);
		g_once_init_leave (&lxsession_option_type_id__volatile, lxsession_option_type_id);
	}
	return lxsession_option_type_id__volatile;
}


LxsessionKeymapOption* lxsession_keymap_option_construct (GType object_type, LxsessionLxsessionConfig* config) {
	LxsessionKeymapOption * self = NULL;
	LxsessionLxsessionConfig* _tmp0_ = NULL;
	LxsessionLxsessionConfig* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gboolean _tmp4_ = FALSE;
	g_return_val_if_fail (config != NULL, NULL);
	_tmp0_ = config;
	self = (LxsessionKeymapOption*) lxsession_option_construct (object_type, _tmp0_);
	_tmp1_ = config;
	_tmp2_ = lxsession_lxsession_config_get_item_string (_tmp1_, "Keymap", "mode", NULL);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strcmp0 (_tmp3_, "user") == 0;
	_g_free0 (_tmp3_);
	if (_tmp4_) {
		LxsessionLxsessionConfig* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
		_tmp5_ = config;
		_tmp6_ = lxsession_keymap_option_create_user_mode_command (self, _tmp5_);
		_g_free0 (((LxsessionOption*) self)->command);
		((LxsessionOption*) self)->command = _tmp6_;
	}
	return self;
}


LxsessionKeymapOption* lxsession_keymap_option_new (LxsessionLxsessionConfig* config) {
	return lxsession_keymap_option_construct (LXSESSION_TYPE_KEYMAP_OPTION, config);
}


gchar* lxsession_keymap_option_create_user_mode_command (LxsessionKeymapOption* self, LxsessionLxsessionConfig* config) {
	gchar* result = NULL;
	GString* builder = NULL;
	GString* _tmp0_ = NULL;
	GString* _tmp1_ = NULL;
	LxsessionLxsessionConfig* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gboolean _tmp5_ = FALSE;
	LxsessionLxsessionConfig* _tmp12_ = NULL;
	gchar* _tmp13_ = NULL;
	gchar* _tmp14_ = NULL;
	gboolean _tmp15_ = FALSE;
	LxsessionLxsessionConfig* _tmp22_ = NULL;
	gchar* _tmp23_ = NULL;
	gchar* _tmp24_ = NULL;
	gboolean _tmp25_ = FALSE;
	LxsessionLxsessionConfig* _tmp35_ = NULL;
	gchar* _tmp36_ = NULL;
	gchar* _tmp37_ = NULL;
	gboolean _tmp38_ = FALSE;
	GString* _tmp48_ = NULL;
	const gchar* _tmp49_ = NULL;
	gchar* _tmp50_ = NULL;
	const gchar* _tmp51_ = NULL;
	const gchar* _tmp52_ = NULL;
	gchar* _tmp53_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (config != NULL, NULL);
	_tmp0_ = g_string_new ("");
	builder = _tmp0_;
	_tmp1_ = builder;
	g_string_append (_tmp1_, "setxkbmap ");
	_tmp2_ = config;
	_tmp3_ = lxsession_lxsession_config_get_item_string (_tmp2_, "Keymap", "model", NULL);
	_tmp4_ = _tmp3_;
	_tmp5_ = _tmp4_ != NULL;
	_g_free0 (_tmp4_);
	if (_tmp5_) {
		GString* _tmp6_ = NULL;
		GString* _tmp7_ = NULL;
		LxsessionLxsessionConfig* _tmp8_ = NULL;
		gchar* _tmp9_ = NULL;
		gchar* _tmp10_ = NULL;
		GString* _tmp11_ = NULL;
		_tmp6_ = builder;
		g_string_append (_tmp6_, "-model ");
		_tmp7_ = builder;
		_tmp8_ = config;
		_tmp9_ = lxsession_lxsession_config_get_item_string (_tmp8_, "Keymap", "model", NULL);
		_tmp10_ = _tmp9_;
		g_string_append (_tmp7_, _tmp10_);
		_g_free0 (_tmp10_);
		_tmp11_ = builder;
		g_string_append (_tmp11_, " ");
	}
	_tmp12_ = config;
	_tmp13_ = lxsession_lxsession_config_get_item_string (_tmp12_, "Keymap", "layout", NULL);
	_tmp14_ = _tmp13_;
	_tmp15_ = _tmp14_ != NULL;
	_g_free0 (_tmp14_);
	if (_tmp15_) {
		GString* _tmp16_ = NULL;
		GString* _tmp17_ = NULL;
		LxsessionLxsessionConfig* _tmp18_ = NULL;
		gchar* _tmp19_ = NULL;
		gchar* _tmp20_ = NULL;
		GString* _tmp21_ = NULL;
		_tmp16_ = builder;
		g_string_append (_tmp16_, "-layout ");
		_tmp17_ = builder;
		_tmp18_ = config;
		_tmp19_ = lxsession_lxsession_config_get_item_string (_tmp18_, "Keymap", "layout", NULL);
		_tmp20_ = _tmp19_;
		g_string_append (_tmp17_, _tmp20_);
		_g_free0 (_tmp20_);
		_tmp21_ = builder;
		g_string_append (_tmp21_, " ");
	}
	_tmp22_ = config;
	_tmp23_ = lxsession_lxsession_config_get_item_string (_tmp22_, "Keymap", "variant", NULL);
	_tmp24_ = _tmp23_;
	_tmp25_ = _tmp24_ != NULL;
	_g_free0 (_tmp24_);
	if (_tmp25_) {
		GString* _tmp26_ = NULL;
		LxsessionLxsessionConfig* _tmp27_ = NULL;
		gchar* _tmp28_ = NULL;
		gchar* _tmp29_ = NULL;
		GString* _tmp30_ = NULL;
		LxsessionLxsessionConfig* _tmp31_ = NULL;
		gchar* _tmp32_ = NULL;
		gchar* _tmp33_ = NULL;
		GString* _tmp34_ = NULL;
		_tmp26_ = builder;
		g_string_append (_tmp26_, "-variant ");
		_tmp27_ = config;
		_tmp28_ = lxsession_lxsession_config_get_item_string (_tmp27_, "Keymap", "variant", NULL);
		_tmp29_ = _tmp28_;
		g_message ("options.vala:80: Show keymap variant : %s", _tmp29_);
		_g_free0 (_tmp29_);
		_tmp30_ = builder;
		_tmp31_ = config;
		_tmp32_ = lxsession_lxsession_config_get_item_string (_tmp31_, "Keymap", "variant", NULL);
		_tmp33_ = _tmp32_;
		g_string_append (_tmp30_, _tmp33_);
		_g_free0 (_tmp33_);
		_tmp34_ = builder;
		g_string_append (_tmp34_, " ");
	}
	_tmp35_ = config;
	_tmp36_ = lxsession_lxsession_config_get_item_string (_tmp35_, "Keymap", "options", NULL);
	_tmp37_ = _tmp36_;
	_tmp38_ = _tmp37_ != NULL;
	_g_free0 (_tmp37_);
	if (_tmp38_) {
		GString* _tmp39_ = NULL;
		LxsessionLxsessionConfig* _tmp40_ = NULL;
		gchar* _tmp41_ = NULL;
		gchar* _tmp42_ = NULL;
		GString* _tmp43_ = NULL;
		LxsessionLxsessionConfig* _tmp44_ = NULL;
		gchar* _tmp45_ = NULL;
		gchar* _tmp46_ = NULL;
		GString* _tmp47_ = NULL;
		_tmp39_ = builder;
		g_string_append (_tmp39_, "-options ");
		_tmp40_ = config;
		_tmp41_ = lxsession_lxsession_config_get_item_string (_tmp40_, "Keymap", "options", NULL);
		_tmp42_ = _tmp41_;
		g_message ("options.vala:87: Show keymap options : %s", _tmp42_);
		_g_free0 (_tmp42_);
		_tmp43_ = builder;
		_tmp44_ = config;
		_tmp45_ = lxsession_lxsession_config_get_item_string (_tmp44_, "Keymap", "options", NULL);
		_tmp46_ = _tmp45_;
		g_string_append (_tmp43_, _tmp46_);
		_g_free0 (_tmp46_);
		_tmp47_ = builder;
		g_string_append (_tmp47_, " ");
	}
	_tmp48_ = builder;
	_tmp49_ = _tmp48_->str;
	_tmp50_ = g_strdup (_tmp49_);
	_g_free0 (((LxsessionOption*) self)->command);
	((LxsessionOption*) self)->command = _tmp50_;
	_tmp51_ = ((LxsessionOption*) self)->command;
	g_message ("options.vala:93: Keymap options - return user command %s", _tmp51_);
	_tmp52_ = ((LxsessionOption*) self)->command;
	_tmp53_ = g_strdup (_tmp52_);
	result = _tmp53_;
	_g_string_free0 (builder);
	return result;
}


static void lxsession_keymap_option_class_init (LxsessionKeymapOptionClass * klass) {
	lxsession_keymap_option_parent_class = g_type_class_peek_parent (klass);
}


static void lxsession_keymap_option_instance_init (LxsessionKeymapOption * self) {
}


GType lxsession_keymap_option_get_type (void) {
	static volatile gsize lxsession_keymap_option_type_id__volatile = 0;
	if (g_once_init_enter (&lxsession_keymap_option_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LxsessionKeymapOptionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) lxsession_keymap_option_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LxsessionKeymapOption), 0, (GInstanceInitFunc) lxsession_keymap_option_instance_init, NULL };
		GType lxsession_keymap_option_type_id;
		lxsession_keymap_option_type_id = g_type_register_static (LXSESSION_TYPE_OPTION, "LxsessionKeymapOption", &g_define_type_info, 0);
		g_once_init_leave (&lxsession_keymap_option_type_id__volatile, lxsession_keymap_option_type_id);
	}
	return lxsession_keymap_option_type_id__volatile;
}


LxsessionClipboardOption* lxsession_clipboard_option_construct (GType object_type, LxsessionLxsessionConfig* config) {
	LxsessionClipboardOption * self = NULL;
	LxsessionLxsessionConfig* _tmp0_ = NULL;
	LxsessionLxsessionConfig* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	GQuark _tmp5_ = 0U;
	static GQuark _tmp4_label0 = 0;
	g_return_val_if_fail (config != NULL, NULL);
	_tmp0_ = config;
	self = (LxsessionClipboardOption*) lxsession_option_construct (object_type, _tmp0_);
	_tmp1_ = config;
	_tmp2_ = lxsession_lxsession_config_get_item_string (_tmp1_, "Session", "clipboard", "command");
	_tmp3_ = _tmp2_;
	_tmp5_ = (NULL == _tmp3_) ? 0 : g_quark_from_string (_tmp3_);
	g_free (_tmp3_);
	if (_tmp5_ == ((0 != _tmp4_label0) ? _tmp4_label0 : (_tmp4_label0 = g_quark_from_static_string ("lxclipboard")))) {
		switch (0) {
			default:
			{
				gchar* _tmp6_ = NULL;
				g_message ("options.vala:110: Create Option Clipboard");
				_tmp6_ = g_strdup ("lxclipboard");
				_g_free0 (((LxsessionOption*) self)->command);
				((LxsessionOption*) self)->command = _tmp6_;
				break;
			}
		}
	}
	return self;
}


LxsessionClipboardOption* lxsession_clipboard_option_new (LxsessionLxsessionConfig* config) {
	return lxsession_clipboard_option_construct (LXSESSION_TYPE_CLIPBOARD_OPTION, config);
}


void lxsession_clipboard_option_desactivate (LxsessionClipboardOption* self) {
	g_return_if_fail (self != NULL);
}


static void lxsession_clipboard_option_class_init (LxsessionClipboardOptionClass * klass) {
	lxsession_clipboard_option_parent_class = g_type_class_peek_parent (klass);
}


static void lxsession_clipboard_option_instance_init (LxsessionClipboardOption * self) {
}


GType lxsession_clipboard_option_get_type (void) {
	static volatile gsize lxsession_clipboard_option_type_id__volatile = 0;
	if (g_once_init_enter (&lxsession_clipboard_option_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LxsessionClipboardOptionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) lxsession_clipboard_option_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LxsessionClipboardOption), 0, (GInstanceInitFunc) lxsession_clipboard_option_instance_init, NULL };
		GType lxsession_clipboard_option_type_id;
		lxsession_clipboard_option_type_id = g_type_register_static (LXSESSION_TYPE_OPTION, "LxsessionClipboardOption", &g_define_type_info, 0);
		g_once_init_leave (&lxsession_clipboard_option_type_id__volatile, lxsession_clipboard_option_type_id);
	}
	return lxsession_clipboard_option_type_id__volatile;
}


LxsessionUpstartUserSessionOption* lxsession_upstart_user_session_option_construct (GType object_type, LxsessionLxsessionConfig* config) {
	LxsessionUpstartUserSessionOption * self = NULL;
	LxsessionLxsessionConfig* _tmp0_ = NULL;
	LxsessionLxsessionConfig* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gboolean _tmp4_ = FALSE;
	g_return_val_if_fail (config != NULL, NULL);
	_tmp0_ = config;
	self = (LxsessionUpstartUserSessionOption*) lxsession_option_construct (object_type, _tmp0_);
	_tmp1_ = config;
	_tmp2_ = lxsession_lxsession_config_get_item_string (_tmp1_, "Session", "upstart_user_session", NULL);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strcmp0 (_tmp3_, "true") == 0;
	_g_free0 (_tmp3_);
	if (_tmp4_) {
		gchar* _tmp5_ = NULL;
		_tmp5_ = g_strdup ("init --user");
		_g_free0 (self->priv->command1);
		self->priv->command1 = _tmp5_;
	}
	return self;
}


LxsessionUpstartUserSessionOption* lxsession_upstart_user_session_option_new (LxsessionLxsessionConfig* config) {
	return lxsession_upstart_user_session_option_construct (LXSESSION_TYPE_UPSTART_USER_SESSION_OPTION, config);
}


void lxsession_upstart_user_session_option_activate (LxsessionUpstartUserSessionOption* self) {
	const gchar* _tmp0_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->command1;
	lxsession_lxsession_spawn_command_line_async (_tmp0_);
}


static void lxsession_upstart_user_session_option_class_init (LxsessionUpstartUserSessionOptionClass * klass) {
	lxsession_upstart_user_session_option_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (LxsessionUpstartUserSessionOptionPrivate));
	G_OBJECT_CLASS (klass)->finalize = lxsession_upstart_user_session_option_finalize;
}


static void lxsession_upstart_user_session_option_instance_init (LxsessionUpstartUserSessionOption * self) {
	self->priv = LXSESSION_UPSTART_USER_SESSION_OPTION_GET_PRIVATE (self);
}


static void lxsession_upstart_user_session_option_finalize (GObject* obj) {
	LxsessionUpstartUserSessionOption * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, LXSESSION_TYPE_UPSTART_USER_SESSION_OPTION, LxsessionUpstartUserSessionOption);
	_g_free0 (self->priv->command1);
	G_OBJECT_CLASS (lxsession_upstart_user_session_option_parent_class)->finalize (obj);
}


GType lxsession_upstart_user_session_option_get_type (void) {
	static volatile gsize lxsession_upstart_user_session_option_type_id__volatile = 0;
	if (g_once_init_enter (&lxsession_upstart_user_session_option_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LxsessionUpstartUserSessionOptionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) lxsession_upstart_user_session_option_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LxsessionUpstartUserSessionOption), 0, (GInstanceInitFunc) lxsession_upstart_user_session_option_instance_init, NULL };
		GType lxsession_upstart_user_session_option_type_id;
		lxsession_upstart_user_session_option_type_id = g_type_register_static (LXSESSION_TYPE_OPTION, "LxsessionUpstartUserSessionOption", &g_define_type_info, 0);
		g_once_init_leave (&lxsession_upstart_user_session_option_type_id__volatile, lxsession_upstart_user_session_option_type_id);
	}
	return lxsession_upstart_user_session_option_type_id__volatile;
}


LxsessionXSettingsOption* lxsession_xsettings_option_construct (GType object_type) {
	LxsessionXSettingsOption * self = NULL;
	self = (LxsessionXSettingsOption*) g_object_new (object_type, NULL);
	return self;
}


LxsessionXSettingsOption* lxsession_xsettings_option_new (void) {
	return lxsession_xsettings_option_construct (LXSESSION_TYPE_XSETTINGS_OPTION);
}


void lxsession_xsettings_option_activate (LxsessionXSettingsOption* self) {
	LxsessionLxsessionConfigKeyFile* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	GQuark _tmp5_ = 0U;
	static GQuark _tmp4_label0 = 0;
	static GQuark _tmp4_label1 = 0;
	static GQuark _tmp4_label2 = 0;
	static GQuark _tmp4_label3 = 0;
	static GQuark _tmp4_label4 = 0;
	static GQuark _tmp4_label5 = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = lxsession_global_settings;
	_tmp1_ = lxsession_lxsession_config_get_item_string ((LxsessionLxsessionConfig*) _tmp0_, "Session", "xsettings_manager", "command");
	_g_free0 (self->priv->command);
	self->priv->command = _tmp1_;
	_tmp2_ = self->priv->command;
	_tmp3_ = _tmp2_;
	_tmp5_ = (NULL == _tmp3_) ? 0 : g_quark_from_string (_tmp3_);
	if (_tmp5_ == ((0 != _tmp4_label0) ? _tmp4_label0 : (_tmp4_label0 = g_quark_from_static_string (NULL)))) {
		switch (0) {
			default:
			{
				break;
			}
		}
	} else if (_tmp5_ == ((0 != _tmp4_label1) ? _tmp4_label1 : (_tmp4_label1 = g_quark_from_static_string ("")))) {
		switch (0) {
			default:
			{
				break;
			}
		}
	} else if (_tmp5_ == ((0 != _tmp4_label2) ? _tmp4_label2 : (_tmp4_label2 = g_quark_from_static_string (" ")))) {
		switch (0) {
			default:
			{
				break;
			}
		}
	} else if (_tmp5_ == ((0 != _tmp4_label3) ? _tmp4_label3 : (_tmp4_label3 = g_quark_from_static_string ("build-in")))) {
		switch (0) {
			default:
			{
				gchar* _tmp6_ = NULL;
				gchar* _tmp7_ = NULL;
				GKeyFile* _tmp8_ = NULL;
				GKeyFile* _tmp9_ = NULL;
				g_message ("options.vala:164: Activate xsettings_manager build-in");
				_tmp6_ = lxsession_get_config_path ("desktop.conf");
				_tmp7_ = _tmp6_;
				_tmp8_ = lxsession_load_keyfile (_tmp7_);
				_tmp9_ = _tmp8_;
				settings_daemon_start (_tmp9_);
				_g_key_file_free0 (_tmp9_);
				_g_free0 (_tmp7_);
				break;
			}
		}
	} else if (_tmp5_ == ((0 != _tmp4_label4) ? _tmp4_label4 : (_tmp4_label4 = g_quark_from_static_string ("gnome")))) {
		switch (0) {
			default:
			{
				lxsession_lxsession_spawn_command_line_async ("gnome-settings-daemon");
				break;
			}
		}
	} else if (_tmp5_ == ((0 != _tmp4_label5) ? _tmp4_label5 : (_tmp4_label5 = g_quark_from_static_string ("xfce")))) {
		switch (0) {
			default:
			{
				lxsession_lxsession_spawn_command_line_async ("xfsettingsd");
				break;
			}
		}
	} else {
		switch (0) {
			default:
			{
				const gchar* _tmp10_ = NULL;
				_tmp10_ = self->priv->command;
				lxsession_lxsession_spawn_command_line_async (_tmp10_);
				break;
			}
		}
	}
}


void lxsession_xsettings_option_reload (LxsessionXSettingsOption* self) {
	LxsessionLxsessionConfigKeyFile* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	GQuark _tmp5_ = 0U;
	static GQuark _tmp4_label0 = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = lxsession_global_settings;
	_tmp1_ = lxsession_lxsession_config_get_item_string ((LxsessionLxsessionConfig*) _tmp0_, "Session", "xsettings_manager", "command");
	_g_free0 (self->priv->command);
	self->priv->command = _tmp1_;
	_tmp2_ = self->priv->command;
	_tmp3_ = _tmp2_;
	_tmp5_ = (NULL == _tmp3_) ? 0 : g_quark_from_string (_tmp3_);
	if (_tmp5_ == ((0 != _tmp4_label0) ? _tmp4_label0 : (_tmp4_label0 = g_quark_from_static_string ("build-in")))) {
		switch (0) {
			default:
			{
				gchar* _tmp6_ = NULL;
				gchar* _tmp7_ = NULL;
				GKeyFile* _tmp8_ = NULL;
				GKeyFile* _tmp9_ = NULL;
				g_message ("options.vala:186: Reload xsettings_manager build-in");
				_tmp6_ = lxsession_get_config_path ("desktop.conf");
				_tmp7_ = _tmp6_;
				_tmp8_ = lxsession_load_keyfile (_tmp7_);
				_tmp9_ = _tmp8_;
				settings_daemon_reload (_tmp9_);
				_g_key_file_free0 (_tmp9_);
				_g_free0 (_tmp7_);
				break;
			}
		}
	} else {
		switch (0) {
			default:
			{
				g_message ("options.vala:190: Reload xsettings_manager default");
				lxsession_xsettings_option_activate (self);
				break;
			}
		}
	}
}


static void lxsession_xsettings_option_class_init (LxsessionXSettingsOptionClass * klass) {
	lxsession_xsettings_option_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (LxsessionXSettingsOptionPrivate));
	G_OBJECT_CLASS (klass)->finalize = lxsession_xsettings_option_finalize;
}


static void lxsession_xsettings_option_instance_init (LxsessionXSettingsOption * self) {
	self->priv = LXSESSION_XSETTINGS_OPTION_GET_PRIVATE (self);
}


static void lxsession_xsettings_option_finalize (GObject* obj) {
	LxsessionXSettingsOption * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, LXSESSION_TYPE_XSETTINGS_OPTION, LxsessionXSettingsOption);
	_g_free0 (self->priv->command);
	G_OBJECT_CLASS (lxsession_xsettings_option_parent_class)->finalize (obj);
}


GType lxsession_xsettings_option_get_type (void) {
	static volatile gsize lxsession_xsettings_option_type_id__volatile = 0;
	if (g_once_init_enter (&lxsession_xsettings_option_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LxsessionXSettingsOptionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) lxsession_xsettings_option_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LxsessionXSettingsOption), 0, (GInstanceInitFunc) lxsession_xsettings_option_instance_init, NULL };
		GType lxsession_xsettings_option_type_id;
		lxsession_xsettings_option_type_id = g_type_register_static (G_TYPE_OBJECT, "LxsessionXSettingsOption", &g_define_type_info, 0);
		g_once_init_leave (&lxsession_xsettings_option_type_id__volatile, lxsession_xsettings_option_type_id);
	}
	return lxsession_xsettings_option_type_id__volatile;
}



