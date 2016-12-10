/* process.c generated by valac 0.26.1, the Vala compiler
 * generated from process.vala, do not modify */

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

#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))



void lxsession_lxsession_spawn_command_line_async (const gchar* command_line);
static void ___lambda4_ (GPid pid, gint status);
static void ____lambda4__gchild_watch_func (GPid pid, gint status, gpointer self);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


static void ___lambda4_ (GPid pid, gint status) {
	GPid _tmp0_ = 0;
	_tmp0_ = pid;
	g_spawn_close_pid (_tmp0_);
}


static void ____lambda4__gchild_watch_func (GPid pid, gint status, gpointer self) {
	___lambda4_ (pid, status);
}


void lxsession_lxsession_spawn_command_line_async (const gchar* command_line) {
	gchar** command = NULL;
	const gchar* _tmp0_ = NULL;
	gchar** _tmp1_ = NULL;
	gchar** _tmp2_ = NULL;
	gint command_length1 = 0;
	gint _command_size_ = 0;
	GError * _inner_error_ = NULL;
	g_return_if_fail (command_line != NULL);
	_tmp0_ = command_line;
	_tmp2_ = _tmp1_ = g_strsplit_set (_tmp0_, " ", 0);
	command = _tmp2_;
	command_length1 = _vala_array_length (_tmp1_);
	_command_size_ = command_length1;
	{
		gchar** spawn_env = NULL;
		gchar** _tmp3_ = NULL;
		gchar** _tmp4_ = NULL;
		gint spawn_env_length1 = 0;
		gint _spawn_env_size_ = 0;
		GPid child_pid = 0;
		GPid _tmp5_ = 0;
		_tmp4_ = _tmp3_ = g_get_environ ();
		spawn_env = _tmp4_;
		spawn_env_length1 = _vala_array_length (_tmp3_);
		_spawn_env_size_ = spawn_env_length1;
		g_spawn_async (NULL, command, spawn_env, G_SPAWN_SEARCH_PATH | G_SPAWN_DO_NOT_REAP_CHILD, NULL, NULL, &_tmp5_, &_inner_error_);
		child_pid = _tmp5_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			spawn_env = (_vala_array_free (spawn_env, spawn_env_length1, (GDestroyNotify) g_free), NULL);
			if (_inner_error_->domain == G_SPAWN_ERROR) {
				goto __catch29_g_spawn_error;
			}
			spawn_env = (_vala_array_free (spawn_env, spawn_env_length1, (GDestroyNotify) g_free), NULL);
			command = (_vala_array_free (command, command_length1, (GDestroyNotify) g_free), NULL);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		g_child_watch_add_full (G_PRIORITY_DEFAULT_IDLE, child_pid, ____lambda4__gchild_watch_func, NULL, NULL);
		spawn_env = (_vala_array_free (spawn_env, spawn_env_length1, (GDestroyNotify) g_free), NULL);
	}
	goto __finally29;
	__catch29_g_spawn_error:
	{
		GError* err = NULL;
		GError* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		const gchar* _tmp8_ = NULL;
		err = _inner_error_;
		_inner_error_ = NULL;
		_tmp6_ = err;
		_tmp7_ = _tmp6_->message;
		g_warning ("process.vala:49: %s", _tmp7_);
		_tmp8_ = command[0];
		g_warning ("process.vala:50: Error when launching %s", _tmp8_);
		_g_error_free0 (err);
	}
	__finally29:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		command = (_vala_array_free (command, command_length1, (GDestroyNotify) g_free), NULL);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	command = (_vala_array_free (command, command_length1, (GDestroyNotify) g_free), NULL);
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



