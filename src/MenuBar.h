/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/***************************************************************************
 *            MenuBar.h
 *
 *  Sat November 12 22:08:35 2011
 *  Copyright  2011  Taylor Copeland
 *  <taylor@taylorcopeland.com>
 ****************************************************************************/
/*
 * MenuBar.h
 *
 * Copyright (C) 2011 - Taylor Copeland
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _DEPICTION_MENU_BAR_H
#define _DEPICTION_MENU_BAR_H

#include <gtkmm.h>
#include <iostream>

class MenuBar : public Gtk::MenuBar
{
public:
	MenuBar ();
private:
protected:
	// Signal handlers
	void on_menu_file_open ();
	void on_menu_file_quit ();
	void on_menu_help_about ();

	// Child widgets
	Gtk::SeparatorMenuItem separator;
	
	Gtk::MenuItem fileMenuItem;
	Gtk::MenuItem editMenuItem;
	Gtk::MenuItem viewMenuItem;
	Gtk::MenuItem helpMenuItem;

	Gtk::Menu fileMenu;
	Gtk::Menu editMenu;
	Gtk::Menu viewMenu;
	Gtk::Menu helpMenu;

	Gtk::MenuItem fileMenuOpenItem;
	Gtk::MenuItem fileMenuQuitItem;
	Gtk::MenuItem helpMenuAboutItem;
};

#endif // _DEPICTION_MENU_BAR_H
