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

/* TODO Split correctly the settings for enable differents backends (.ini, gsettings ...) */ 

namespace Lxsession
{
    public class LxsessionConfig: GLib.Object
    {

        /* Session identification */
        public string session_name { get; set; default = "LXDE";}
        public string desktop_env_name { get; set; default = "LXDE";}

        /* Applications */
        public string window_manager { get; set; default = null;}
        public string windows_manager_command { get; set; default = null;}
        public string windows_manager_session { get; set; default = null;}
        public string windows_manager_extras { get; set; default = null;}
        public string panel_command { get; set; default = null;}
        public string panel_session { get; set; default = null;}
        public string dock_command { get; set; default = null;}
        public string dock_session { get; set; default = null;}
        public string screensaver_command { get; set; default = null;}
        public string power_manager_command { get; set; default = null;}
        public string file_manager_command  { get; set; default = null;}
        public string file_manager_session { get; set; default = null;}
        public string file_manager_extras { get; set; default = null;}
        public string desktop_command { get; set; default = null;}
        public string desktop_wallpaper { get; set; default = null;}
        public string polkit_command { get; set; default = null;}
        public string network_gui_command { get; set; default = null;}
        public string im1_command { get; set; default = null;}
        public string im1_autostart { get; set; default = null;}
        public string im2_command { get; set; default = null;}
        public string im2_autostart { get; set; default = null;}
        public string widget1_command { get; set; default = null;}
        public string widget1_autostart { get; set; default = null;}
        public string audio_manager_command { get; set; default = null;}
        public string quit_manager_command { get; set; default = null;}
        public string quit_manager_image { get; set; default = null;}
        public string quit_manager_layout { get; set; default = null;}
        public string workspace_manager_command { get; set; default = null;}
        public string launcher_manager_command { get; set; default = null;}
        public string launcher_manager_autostart { get; set; default = null;}
        public string terminal_manager_command { get; set; default = null;}
        public string screenshot_manager_command { get; set; default = null;}
        public string upgrade_manager_command { get; set; default = null;}
        public string composite_manager_command { get; set; default = null;}
        public string composite_manager_autostart { get; set; default = null;}
        public string disable_autostart { get; set; default = null;}
        public string upstart_user_session { get; set; default = null;}

        /* State */
        public string laptop_mode { get; set; default = null;}

        /* Clipboard */
        public string clipboard_command { get; set; default = "lxclipboard";}

        /* Dbus */
        public string dbus_lxde { get; set; default = "true";}
        public string dbus_gnome { get; set; default = null;}

        /* Keymap */
        public string keymap_mode { get; set; default = null;}
        public string keymap_model { get; set; default = null;}
        public string keymap_layout { get; set; default = null;}
        public string keymap_variant { get; set; default = null;}
        public string keymap_options { get; set; default = null;}

        /* Xrandr */
        public string xrandr_mode { get; set; default = null;}
        public string xrandr_command { get; set; default = null;}

        /* Security */
        public string security_keyring { get; set; default = null;}

        /* a11y */
        public string a11y_type { get; set; default = "gnome";}

        /* Updates */
        public string updates_type { get; set; default = null;}

        /* Proxy */
        public string proxy_http { get; set; default = null;}

        /* Environnement */
        public string env_type { get; set; default = null;}
        public string env_menu_prefix { get; set; default = "lxde-";}

        /* GTK */
        public string gtk_theme_name { get; set; default = null;}
        public string gtk_icon_theme_name { get; set; default = null;}
        public string gtk_font_name { get; set; default = null;}
        public int gtk_toolbar_style { get; set; default = 3;}
        public int gtk_button_images { get; set; default = 0;}
        public int gtk_menu_images { get; set; default = 1;}
        public int gtk_cursor_theme_size { get; set; default = 18;}
        public int gtk_antialias { get; set; default = 1;}
        public int gtk_hinting { get; set; default = 1;}
        public string gtk_hint_style { get; set; default = "hintslight";}
        public string gtk_rgba { get; set; default = "rgb";}
        public string gtk_color_scheme { get; set; default = null;}
        public string gtk_cursor_theme_name { get; set; default = "DMZ-White";}
        public int gtk_toolbar_icon_size { get; set; default = 3;}
        public int gtk_enable_event_sounds { get; set; default = 1;}
        public int gtk_enable_input_feedback_sounds { get; set; default = 1;}

        /* Mouse */
        public int mouse_acc_factor { get; set; default = 20;}
        public int mouse_acc_threshold { get; set; default = 10;}
        public int mouse_left_handed { get; set; default = 0;}

        /* Keyboard */
        public int keyboard_delay { get; set; default = 500;}
        public int keyboard_interval { get; set; default = 30;}
        public int keyboard_beep { get; set; default = 1;}

        public LxsessionConfig ()
        {

        }

        public void init_signal ()
        {
            /* Connect to signals changes */
            global_sig.update_window_manager.connect(on_update_string_set);

            /* Xsettings */
            global_sig.update_gtk_theme_name.connect(on_update_string_set);
            global_sig.update_gtk_icon_theme_name.connect(on_update_string_set);
            global_sig.update_gtk_font_name.connect(on_update_string_set);
            global_sig.update_gtk_toolbar_style.connect(on_update_int_set);
            global_sig.update_gtk_button_images.connect(on_update_int_set);
            global_sig.update_gtk_menu_images.connect(on_update_int_set);
            global_sig.update_gtk_cursor_theme_size.connect(on_update_int_set);
            global_sig.update_gtk_antialias.connect(on_update_int_set);
            global_sig.update_gtk_hinting.connect(on_update_int_set);
            global_sig.update_gtk_hint_style.connect(on_update_string_set);
            global_sig.update_gtk_rgba.connect(on_update_string_set);
            global_sig.update_gtk_color_scheme.connect(on_update_string_set);
            global_sig.update_gtk_cursor_theme_name.connect(on_update_string_set);
            global_sig.update_gtk_toolbar_icon_size.connect(on_update_int_set);
            global_sig.update_gtk_enable_event_sounds.connect(on_update_int_set);
            global_sig.update_gtk_enable_input_feedback_sounds.connect(on_update_int_set);

            global_sig.update_mouse_acc_factor.connect(on_update_int_set);
            global_sig.update_mouse_acc_threshold.connect(on_update_int_set);
            global_sig.update_mouse_left_handed.connect(on_update_int_set);

            global_sig.update_keyboard_delay.connect(on_update_int_set);
            global_sig.update_keyboard_interval.connect(on_update_int_set);
            global_sig.update_keyboard_beep.connect(on_update_int_set);

            /* Set for managers */
            global_sig.request_audio_manager_command_set.connect(on_update_string_set);
            global_sig.request_workspace_manager_command_set.connect(on_update_string_set);
            global_sig.request_terminal_manager_command_set.connect(on_update_string_set);
            global_sig.request_screenshot_manager_command_set.connect(on_update_string_set);
            global_sig.request_upgrade_manager_command_set.connect(on_update_string_set);

            /* Launcher manager */
            global_sig.request_launcher_manager_command_set.connect(on_update_string_set);
            global_sig.request_launcher_manager_autostart_set.connect(on_update_string_set);

            /* Windows Manager control */
            global_sig.request_windows_manager_command_set.connect(on_update_string_set);
            global_sig.request_windows_manager_session_set.connect(on_update_string_set);
            global_sig.request_windows_manager_extras_set.connect(on_update_string_set);

            /* Panel control */
            global_sig.request_panel_command_set.connect(on_update_string_set);
            global_sig.request_panel_session_set.connect(on_update_string_set);

            /* Dock control */
            global_sig.request_dock_command_set.connect(on_update_string_set);
            global_sig.request_dock_session_set.connect(on_update_string_set);

            /* File manager control */
            global_sig.request_file_manager_command_set.connect(on_update_string_set);
            global_sig.request_file_manager_session_set.connect(on_update_string_set);
            global_sig.request_file_manager_extras_set.connect(on_update_string_set);

            /* Desktop control */
            global_sig.request_desktop_command_set.connect(on_update_string_set);
            global_sig.request_desktop_wallpaper_set.connect(on_update_string_set);

            /* Composite manager */
            global_sig.request_composite_manager_command_set.connect(on_update_string_set);
            global_sig.request_composite_manager_autostart_set.connect(on_update_string_set);

            /* Screensaver control */
            global_sig.request_screensaver_command_set.connect(on_update_string_set);

            /* Power Manager control */
            global_sig.request_power_manager_command_set.connect(on_update_string_set);

            /* Polkit agent control */
            global_sig.request_polkit_command_set.connect(on_update_string_set);

            /* Network gui control */
            global_sig.request_network_gui_command_set.connect(on_update_string_set);

            /* IM manager */
            global_sig.request_im1_command_set.connect(on_update_string_set);
            global_sig.request_im1_autostart_set.connect(on_update_string_set);
            global_sig.request_im2_command_set.connect(on_update_string_set);
            global_sig.request_im2_autostart_set.connect(on_update_string_set);

            /* Widgets */
            global_sig.request_widget1_command_set.connect(on_update_string_set);
            global_sig.request_widget1_autostart_set.connect(on_update_string_set);

            /* Quit manager */
            global_sig.request_quit_manager_command_set.connect(on_update_string_set);
            global_sig.request_quit_manager_image_set.connect(on_update_string_set);
            global_sig.request_quit_manager_layout_set.connect(on_update_string_set);

            /* Clipboard control */
            global_sig.request_clipboard_command_set.connect(on_update_string_set);

            /* Autostart */
            global_sig.request_disable_autostart_set.connect(on_update_string_set);

            /* Keymap */
            global_sig.request_keymap_mode_set.connect(on_update_string_set);
            global_sig.request_keymap_model_set.connect(on_update_string_set);
            global_sig.request_keymap_layout_set.connect(on_update_string_set);
            global_sig.request_keymap_variant_set.connect(on_update_string_set);
            global_sig.request_keymap_options_set.connect(on_update_string_set);

            /* Xrandr */
            global_sig.request_xrandr_mode_set.connect(on_update_string_set);
            global_sig.request_xrandr_command_set.connect(on_update_string_set);

            /* Security */
            global_sig.request_security_keyring_set.connect(on_update_string_set);

            /* a11y */
            global_sig.request_a11y_type_set.connect(on_update_string_set);

            /* Updates */
            global_sig.request_updates_type_set.connect(on_update_string_set);

            /* Laptop mode */
            global_sig.request_laptop_mode_set.connect(on_update_string_set);

            /* Dbus */
            global_sig.request_dbus_lxde_set.connect(on_update_string_set);
            global_sig.request_dbus_gnome_set.connect(on_update_string_set);

            /* Upstart */
            global_sig.request_upstart_user_session_set.connect(on_update_string_set);

            /* Environment */
            global_sig.request_env_type_set.connect(on_update_string_set);
            global_sig.request_env_menu_prefix_set.connect(on_update_string_set);

            /* Proxy */
            global_sig.request_proxy_http_set.connect(on_update_string_set);
        }

        public virtual void on_update_string_set (string dbus_arg, string kf_categorie, string kf_key1, string? kf_key2)
        {

        }

        public virtual void on_update_int_set (int dbus_arg, string kf_categorie, string kf_key1, string? kf_key2)
        {

        }

    }

public class LxsessionConfigKeyFile: LxsessionConfig
{
    /* Settings locations */
    public KeyFile kf = new KeyFile();
    public string desktop_config_path { get; set; default = null;}
    public string desktop_config_home_path { get; set; default = null;}
    public GLib.File desktop_file ;
    public GLib.File home_desktop_file ;
    public GLib.FileMonitor monitor_desktop_file ;
    public GLib.FileMonitor monitor_home_desktop_file;
    public GLib.Cancellable monitor_cancel;

    public LxsessionConfigKeyFile(string session_arg, string desktop_env_name_arg)
    {
        global_sig.reload_settings_daemon.connect(on_reload_settings_daemon);

        init_desktop_files();
        
        this.session_name = session_arg;
        this.desktop_env_name = desktop_env_name_arg;

        read_keyfile();

        init_signal ();

        /* Monitor desktop file */
        setup_monitor_desktop_file();
    }

    public void init_desktop_files()
    {
        desktop_config_path = get_config_path("desktop.conf");
        desktop_config_home_path = get_config_home_path("desktop.conf");
    }

    public void setup_monitor_desktop_file()
    {
        try {
            desktop_file = File.new_for_path(desktop_config_path);
            monitor_desktop_file = desktop_file.monitor_file(GLib.FileMonitorFlags.NONE, monitor_cancel);
            monitor_desktop_file.changed.connect(on_desktop_file_change);
            message ("Monitoring: %s", desktop_config_path);

            if ( desktop_file.get_path() == desktop_config_home_path)
            {
                 message ("Desktop file is already in config home, do nothing");
            }
            else
            {
                message ("Desktop file is not in config home, monitoring creation of it");
                setup_creation_desktop_file();
            }

        } catch (GLib.Error err) {
            message (err.message);
        }
    }

    public void setup_creation_desktop_file()
    {
        try {
            home_desktop_file = File.new_for_path(desktop_config_home_path);
            monitor_home_desktop_file = home_desktop_file.monitor_file(GLib.FileMonitorFlags.NONE);
            monitor_home_desktop_file.changed.connect(on_desktop_file_creation);
            message ("Monitoring home path: %s", home_desktop_file.get_path());
        } catch (GLib.Error err) {
            message (err.message);
        }
    }

    public void on_desktop_file_change ()
    {
        read_keyfile();
        message("Desktop file change, reloading XSettings daemon");
        settings_daemon_reload(kf);
    }

    public void on_desktop_file_creation ()
    {
        message("Desktop file created in home directory, switch configuration to it");
        desktop_config_path = desktop_config_home_path;
        monitor_cancel.cancel();

        read_keyfile();
        settings_daemon_reload(kf);
        setup_monitor_desktop_file();
    }

    public string read_keyfile_string_value (KeyFile keyfile, string kf_categorie, string kf_key1, string? kf_key2, string? default_value)
    {
        string copy_value = null;
        string return_value = null;
        try
        {
            if (kf_key2 == null)
            {
                copy_value = keyfile.get_value (kf_categorie, kf_key1);
            }
            else
            {
                copy_value = keyfile.get_value (kf_categorie, kf_key1 + "/" + kf_key2);
            }
	    }
        catch (KeyFileError err)
        {
		    message (err.message);
        }

        if (copy_value == null)
        {
            return_value = default_value;
        }
        else
        {
            if (default_value != copy_value)
            {
                return_value = copy_value;
            }
            else
            {
                return_value = default_value;
            }
        }

        return return_value;
    }

    public int read_keyfile_int_value (KeyFile keyfile, string kf_categorie, string kf_key1, string? kf_key2, int default_value)
    {
        int return_value = 0;

        try
        {
            if (kf_key2 == null)
            {
                return_value = keyfile.get_integer (kf_categorie, kf_key1);
            }
            else
            {
                return_value = keyfile.get_integer (kf_categorie, kf_key1 + "/" + kf_key2);
            }
	    }
        catch (KeyFileError err)
        {
		    message (err.message);
        }

        if (return_value == 0)
        {
            return_value = default_value;
        }
        else
        {
            if (return_value == default_value)
            {
                return_value = default_value;
            }
        }
        return return_value;
    }

    public void read_keyfile()
    {
        kf = load_keyfile (desktop_config_path);

        /* Windows manager */
        this.window_manager = read_keyfile_string_value (kf, "Session", "window_manager", null, this.window_manager);
        if (this.window_manager == null)
        {
            this.windows_manager_command = read_keyfile_string_value (kf, "Session", "windows_manager", "command", this.windows_manager_command);
            if (this.windows_manager_command != null)
            {
                this.windows_manager_session = read_keyfile_string_value (kf, "Session", "windows_manager","session", this.windows_manager_session);
                this.windows_manager_extras = read_keyfile_string_value (kf, "Session", "windows_manager", "extras", this.windows_manager_extras);
            }
        }

        /* Panel */
        this.panel_command = read_keyfile_string_value (kf, "Session", "panel", "command", this.panel_command);
        if (this.panel_command != null)
        {
            this.panel_session = read_keyfile_string_value (kf, "Session", "panel", "session", this.panel_session);
        }

        /* Dock */
        this.dock_command = read_keyfile_string_value (kf, "Session", "dock", "command", this.dock_command);
        if (this.dock_command != null)
        {
            this.dock_session = read_keyfile_string_value (kf, "Session", "dock", "session", this.dock_session);
        }

        /* File Manager */
        this.file_manager_command = read_keyfile_string_value (kf, "Session", "file_manager", "command", this.file_manager_command);
        if (this.file_manager_command != null)
        {
            this.file_manager_session = read_keyfile_string_value (kf, "Session", "file_manager", "session", this.file_manager_session);
            this.file_manager_extras = read_keyfile_string_value (kf, "Session", "file_manager", "extras", this.file_manager_extras);
        }

        /* Desktop handler */
        this.desktop_command = read_keyfile_string_value (kf, "Session", "desktop_manager", "command", this.desktop_command);
        if (this.desktop_command != null)
        {
            this.desktop_wallpaper = read_keyfile_string_value (kf, "Session", "desktop_manager", "wallpaper", this.desktop_wallpaper);
        }

        /* Launcher manager */
        this.launcher_manager_command = read_keyfile_string_value(kf, "Session", "launcher_manager", "command", this.launcher_manager_command);
        if (this.launcher_manager_command != null)
        {
            this.launcher_manager_autostart = read_keyfile_string_value (kf, "Session", "launcher_manager", "autostart", this.launcher_manager_autostart);
        }

        /* Composite manager */
        this.composite_manager_command = read_keyfile_string_value(kf, "Session", "composite_manager", "command", this.composite_manager_command);
        if (this.composite_manager_command != null)
        {
            this.composite_manager_autostart = read_keyfile_string_value(kf, "Session", "composite_manager", "autostart", this.composite_manager_autostart);
        }

        /* IM */
        this.im1_command = read_keyfile_string_value(kf, "Session", "im1", "command", this.im1_command);
        if (this.im1_command != null)
        {
            this.im1_autostart = read_keyfile_string_value(kf, "Session", "im1", "autostart", this.im1_autostart);
        }
        this.im2_command = read_keyfile_string_value(kf, "Session", "im2", "command", this.im2_command);
        if (this.im2_command != null)
        {
            this.im2_autostart = read_keyfile_string_value(kf, "Session", "im2", "autostart", this.im2_autostart);
        }

        /* Widget */
        this.widget1_command = read_keyfile_string_value(kf, "Session", "widget1", "command", this.widget1_command);
        if (this.widget1_command != null)
        {
            this.widget1_autostart = read_keyfile_string_value(kf, "Session", "widget1", "autostart", this.widget1_autostart);
        }

        /* Keymap */
        this.keymap_mode = read_keyfile_string_value (kf, "Keymap", "mode", null, this.keymap_mode);
        if (this.keymap_mode != null)
        {
            this.keymap_model = read_keyfile_string_value (kf, "Keymap", "model", null, this.keymap_model);
            this.keymap_layout = read_keyfile_string_value (kf, "Keymap", "layout", null, this.keymap_layout);
            this.keymap_variant = read_keyfile_string_value (kf, "Keymap", "variant", null, this.keymap_variant);
            this.keymap_options = read_keyfile_string_value (kf, "Keymap", "options", null, this.keymap_options);
        }

        /* Xrandr */
        this.xrandr_mode = read_keyfile_string_value (kf, "XRandr", "mode", null, this.xrandr_mode);
        if (this.xrandr_mode != null)
        {
            this.xrandr_command = read_keyfile_string_value (kf, "XRandr", "command", null, this.xrandr_command);
        }

        /* Other */
        this.screensaver_command = read_keyfile_string_value (kf, "Session", "screensaver", "command", this.screensaver_command);
        this.power_manager_command = read_keyfile_string_value (kf, "Session", "power_manager", "command", this.power_manager_command);
        this.polkit_command = read_keyfile_string_value(kf, "Session", "polkit", "command", this.polkit_command);
        this.network_gui_command = read_keyfile_string_value(kf, "Session", "network_gui", "command", this.network_gui_command);
        this.audio_manager_command = read_keyfile_string_value(kf, "Session", "audio_manager", "command", this.audio_manager_command);
        this.quit_manager_command = read_keyfile_string_value(kf, "Session", "quit_manager", "command", this.quit_manager_command);
        this.quit_manager_image = read_keyfile_string_value(kf, "Session", "quit_manager", "image", this.quit_manager_image);
        this.quit_manager_layout = read_keyfile_string_value(kf, "Session", "quit_manager", "layout", this.quit_manager_layout);
        this.workspace_manager_command = read_keyfile_string_value(kf, "Session", "workspace_manager", "command", this.workspace_manager_command);
        this.terminal_manager_command = read_keyfile_string_value(kf, "Session", "terminal_manager", "command", this.terminal_manager_command);
        this.screenshot_manager_command = read_keyfile_string_value(kf, "Session", "screenshot_manager", "command", this.screenshot_manager_command);
        this.upgrade_manager_command = read_keyfile_string_value(kf, "Session", "upgrade_manager", "command", this.upgrade_manager_command);
        this.clipboard_command = read_keyfile_string_value(kf, "Session", "clipboard", "command", this.clipboard_command);
        this.disable_autostart = read_keyfile_string_value(kf, "Session", "disable_autostart", null, this.disable_autostart);
        this.upstart_user_session = read_keyfile_string_value(kf, "Session", "upstart_user_session", null, this.upstart_user_session);
        this.laptop_mode = read_keyfile_string_value(kf, "State", "laptop_mode", null, this.laptop_mode);
        this.dbus_lxde = read_keyfile_string_value (kf, "Dbus", "lxde", null, this.dbus_lxde);
        this.dbus_gnome = read_keyfile_string_value (kf, "Dbus", "gnome", null, this.dbus_gnome);
        this.security_keyring = read_keyfile_string_value (kf, "Security", "keyring", null, this.security_keyring);
        this.a11y_type = read_keyfile_string_value (kf, "a11y", "type", null, this.a11y_type);
        this.updates_type = read_keyfile_string_value (kf, "Updates", "type", null, this.updates_type);
        this.env_type = read_keyfile_string_value (kf, "Environment", "type", null, this.env_type);
        this.env_menu_prefix = read_keyfile_string_value (kf, "Environment", "menu_prefix", null, this.env_menu_prefix);

        this.gtk_theme_name = read_keyfile_string_value (kf, "GTK", "sNet", "ThemeName", this.gtk_theme_name);
        this.gtk_icon_theme_name = read_keyfile_string_value (kf, "GTK", "sNet", "IconThemeName", this.gtk_icon_theme_name);
        this.gtk_font_name = read_keyfile_string_value (kf, "GTK", "sGtk", "FontName", this.gtk_font_name);
        this.gtk_toolbar_style = read_keyfile_int_value (kf, "GTK", "iGtk", "ToolbarStyle", this.gtk_toolbar_style);
        this.gtk_button_images = read_keyfile_int_value (kf, "GTK", "iGtk", "ButtonImages", this.gtk_button_images);
        this.gtk_menu_images = read_keyfile_int_value (kf, "GTK", "iGtk", "MenuImages", this.gtk_menu_images);
        this.gtk_cursor_theme_size = read_keyfile_int_value (kf, "GTK", "iGtk", "CursorThemeSize", this.gtk_cursor_theme_size);
        this.gtk_antialias = read_keyfile_int_value (kf, "GTK", "iXft", "Antialias", this.gtk_antialias);
        this.gtk_hinting = read_keyfile_int_value (kf, "GTK", "iXft", "Hinting", this.gtk_hinting);
        this.gtk_hint_style = read_keyfile_string_value (kf, "GTK", "sXft", "HintStyle", this.gtk_hint_style);
        this.gtk_rgba = read_keyfile_string_value (kf, "GTK", "sXft", "RGBA", this.gtk_rgba);
        this.gtk_color_scheme = read_keyfile_string_value (kf, "GTK", "sGtk", "ColorScheme", this.gtk_color_scheme);
        this.gtk_cursor_theme_name = read_keyfile_string_value (kf, "GTK", "sGtk", "CursorThemeName", this.gtk_cursor_theme_name);
        this.gtk_toolbar_icon_size = read_keyfile_int_value (kf, "GTK", "iGtk", "ToolbarIconSize", this.gtk_toolbar_icon_size);
        this.gtk_enable_event_sounds = read_keyfile_int_value (kf, "GTK", "iNet", "EnableEventSounds", this.gtk_enable_event_sounds);
        this.gtk_enable_input_feedback_sounds = read_keyfile_int_value (kf, "GTK", "iNet", "EnableInputFeedbackSounds", this.gtk_enable_input_feedback_sounds);
        this.mouse_acc_factor = read_keyfile_int_value (kf, "Mouse", "AccFactor", null, this.mouse_acc_factor);
        this.mouse_acc_threshold = read_keyfile_int_value (kf, "Mouse", "AccThreshold", null, this.mouse_acc_threshold);
        this.mouse_left_handed = read_keyfile_int_value (kf, "Mouse", "LeftHanded", null, this.mouse_left_handed);
        this.keyboard_delay = read_keyfile_int_value (kf, "Keyboard", "Delay", null, this.keyboard_delay);
        this.keyboard_interval = read_keyfile_int_value (kf, "Keyboard", "Interval", null, this.keyboard_interval);
        this.keyboard_beep = read_keyfile_int_value (kf, "Keyboard", "Beep", null, this.keyboard_beep);

        read_secondary_keyfile();

    }

    public virtual void read_secondary_keyfile()
    {

    }

    public void sync_setting_files ()
    {
        string desktop_file = desktop_config_home_path;
        if (FileUtils.test (desktop_file, FileTest.EXISTS))
        {
            string autostart_file = get_config_home_path("autostart");
            if (FileUtils.test (autostart_file, FileTest.EXISTS))
            {
                /* File in sync, nothing to do */
            }
            else
            {
                var file = File.new_for_path (get_config_path("autostart"));
                var destination = File.new_for_path (get_config_home_path("autostart"));
                try
                {
                    file.copy (destination, FileCopyFlags.NONE);
                }
                catch (GLib.Error err)
                {
		            message (err.message);
                }
            }
        }
    }

    public void save_keyfile ()
    {
        message ("Saving desktop file");
        var str = kf.to_data (null);
        try
        {
            FileUtils.set_contents (desktop_config_path, str, str.length);
        }
        catch (FileError err)
        {
            warning (err.message);
            try
            {
                /* Try to save on user config directory */
                string user_config_dir = desktop_config_home_path;

                File file_parent;
                var file = File.new_for_path(user_config_dir);
                file_parent = file.get_parent();
                if (!file_parent.query_exists())
                {
                    try
                    {
                        file_parent.make_directory_with_parents();
                    }
                    catch (GLib.Error err)
                    {
                        warning (err.message);
                    }
                }

                FileUtils.set_contents (user_config_dir, str, str.length);
                desktop_config_path = user_config_dir;
                setup_monitor_desktop_file();
                sync_setting_files ();
            }
            catch (FileError err)
            {
                warning (err.message);
            }
        }
        save_secondary_keyfile();
    }

    public virtual void save_secondary_keyfile()
    {

    }

    public override void on_update_string_set (string dbus_arg, string kf_categorie, string kf_key1, string? kf_key2)
    {
        if (kf_key2 == null)
        {
            message("Changing %s - %s to %s" , kf_categorie, kf_key1, dbus_arg);
            kf.set_value (kf_categorie, kf_key1, dbus_arg);
        }
        else
        {
            message("Changing %s - %s - %s to %s" , kf_categorie, kf_key1, kf_key2, dbus_arg);
            kf.set_value (kf_categorie, kf_key1 + "/" + kf_key2, dbus_arg);
        }
        save_keyfile();
        read_keyfile();
    }

    public override void on_update_int_set (int dbus_arg, string kf_categorie, string kf_key1, string? kf_key2)
    {
        if (kf_key2 == null)
        {
            message("Changing %s - %s to %i" , kf_categorie, kf_key1, dbus_arg);
            kf.set_integer (kf_categorie, kf_key1, dbus_arg);
        }
        else
        {
            message("Changing %s - %s - %s to %i" , kf_categorie, kf_key1, kf_key2, dbus_arg);
            kf.set_integer (kf_categorie, kf_key1 + "/" + kf_key2, dbus_arg);
        }
        save_keyfile();
        read_keyfile();
    }

    public void on_reload_settings_daemon ()
    {
        message("Reloading XSettings daemon");
        settings_daemon_reload(kf);
    }

}

public class RazorQtConfigKeyFile: LxsessionConfigKeyFile
{
    public KeyFile kf_session = new KeyFile();

    public string session_razor_config_path;
    public string session_razor_config_home_path;
    public GLib.File session_razor_file ;
    public GLib.File home_session_razor_file ;

    public KeyFile kf_conf = new KeyFile();

    public string conf_razor_config_path;
    public string conf_razor_config_home_path;
    public GLib.File confrazor_file ;
    public GLib.File home_conf_razor_file ;

    public RazorQtConfigKeyFile(string session_arg, string desktop_env_name_arg)
    {
        base (session_arg, desktop_env_name_arg);

            init_desktop_files();
            init_desktop_razor_files();
            
            this.session_name = session_arg;
            this.desktop_env_name = desktop_env_name_arg;

            read_keyfile();

            init_signal ();

            /* Monitor desktop file */
            setup_monitor_desktop_file();
    }

    public void init_desktop_razor_files()
    {
        session_razor_config_home_path = Path.build_filename(Environment.get_user_config_dir (), "razor", "session.conf");
        var home_session_razor_file = File.new_for_path(session_razor_config_home_path);

        session_razor_config_path = Path.build_filename("etc", "xdg", "razor", "session.conf");
        var session_razor_file = File.new_for_path(session_razor_config_path);

        if (home_session_razor_file.query_exists ())
        {
            session_razor_config_path = session_razor_config_home_path;
        }
        else if (session_razor_file.query_exists ())
        {
            /* Do nothing, keep session_razor_config_path value */
        }
        else
        {
            session_razor_config_path = session_razor_config_home_path;
            try
            {
                home_session_razor_file.create(FileCreateFlags.NONE);
            }
            catch (GLib.Error err)
            {
		        message (err.message);
            }
        }

        conf_razor_config_home_path = Path.build_filename(Environment.get_user_config_dir (), "razor", "razor.conf");
        var home_conf_razor_file = File.new_for_path(conf_razor_config_home_path);

        conf_razor_config_path = Path.build_filename("etc", "xdg", "razor", "razor.conf");
        var conf_razor_file = File.new_for_path(conf_razor_config_path);

        if (home_conf_razor_file.query_exists ())
        {
            conf_razor_config_path = conf_razor_config_home_path;
        }
        else if (conf_razor_file.query_exists ())
        {
            /* Do nothing, keep conf_razor_config_path value */
        }
        else
        {
            conf_razor_config_path = conf_razor_config_home_path;
            try
            {
                home_conf_razor_file.create(FileCreateFlags.NONE);
            }
            catch (GLib.Error err)
            {
		        message (err.message);
            }
        }

    }

    public override void read_secondary_keyfile()
    {

        /* override razor menu prefix */
        this.env_menu_prefix = "razor-";

        kf_session = load_keyfile (session_razor_config_path);

        /* Windows manager */
        this.windows_manager_command = read_keyfile_string_value (kf_session, "General", "windowmanager", null, this.windows_manager_command);

        /* Panel */
        this.panel_command = read_razor_keyfile_bool_value (kf_session, "modules", "razor-panel", null, this.panel_command);
        this.desktop_command = read_razor_keyfile_bool_value (kf_session, "modules", "razor-desktop", null, this.desktop_command);
        this.launcher_manager_command = read_razor_keyfile_bool_value (kf_session, "modules", "razor-runner", null, launcher_manager_command);
        if (this.launcher_manager_command == "razor-runner")
        {
            this.launcher_manager_autostart = "true";
        }
        this.polkit_command = read_razor_keyfile_bool_value (kf_session, "modules", "razor-policykit-agent", null, this.polkit_command);

        /* TODO Convert this config on file to lxsession config
        razor-appswitcher=false
        */

        kf_conf = load_keyfile (session_razor_config_path);

        this.gtk_theme_name = read_keyfile_string_value (kf_conf, "Theme", "theme", null, this.gtk_theme_name);
        this.gtk_icon_theme_name = read_keyfile_string_value (kf_conf, "Theme", "icon_theme", null, this.gtk_icon_theme_name);

    }

    public string read_razor_keyfile_bool_value (KeyFile keyfile, string kf_categorie, string kf_key1, string? kf_key2, string? default_value)
    {
        string copy_value = null;
        string return_value = null;
        try
        {
            if (kf_key2 == null)
            {
                copy_value = keyfile.get_value (kf_categorie, kf_key1);
            }
            else
            {
                copy_value = keyfile.get_value (kf_categorie, kf_key1 + "/" + kf_key2);
            }
	    }
        catch (KeyFileError err)
        {
		    message (err.message);
        }


        if (copy_value == null)
        {
            return_value = default_value;
        }
        else
        {
            if (copy_value == "true")
            {
                return_value = kf_key1;
            }
            else
            {
                return_value = default_value;
            }
        }

        return return_value;
    }


    public override void save_secondary_keyfile()
    {
        session_razor_config_path = session_razor_config_home_path;
        conf_razor_config_path = conf_razor_config_home_path;

        kf_session.set_value ("General", "windowmanager", this.windows_manager_command);

        if (this.panel_command == "razor-panel")
        {
            kf_session.set_value ("modules", "razor-panel", "true");
        }
        else
        {
            kf_session.set_value ("modules", "razor-panel", "false");
        }

        if (this.desktop_command == "razor-desktop")
        {
            kf_session.set_value ("modules", "razor-desktop", "true");
        }
        else
        {
            kf_session.set_value ("modules", "razor-desktop", "false");
        }

        if (this.launcher_manager_command == "razor-runner")
        {
            kf_session.set_value ("modules", "razor-runner", "true");
        }
        else
        {
            kf_session.set_value ("modules", "razor-runner", "false");
        }

        if (this.polkit_command == "razor-policykit-agent")
        {
            kf_session.set_value ("modules", "razor-policykit-agent", "true");
        }
        else
        {
            kf_session.set_value ("modules", "razor-policykit-agent", "false");
        }

        /* TODO Convert this config on file to lxsession config
        razor-appswitcher=false
        */

        message ("Saving razor session file");
        var str_session = kf_session.to_data (null);
        try
        {
            FileUtils.set_contents (session_razor_config_path, str_session, str_session.length);
        }
        catch (FileError err)
        {
            warning (err.message);
        }

        message ("Saving razor conf file");
        var str_conf = kf_conf.to_data (null);
        try
        {
            FileUtils.set_contents (conf_razor_config_path, str_conf, str_conf.length);
        }
        catch (FileError err)
        {
            warning (err.message);
        }
    }
}

}
