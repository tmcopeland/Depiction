//           MenuBar.cc
//  Sat November 12 22:08:35 2011
//  Copyright  2011  Taylor Copeland
//  <taylor@taylorcopeland.com>
// DepictionMenuBar.cc
//
// Copyright (C) 2011 - Taylor Copeland
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.

#include "MenuBar.h"
#include "AboutDialog.h"

void MenuBar::on_menu_file_quit ()
{
	Gtk::Main::quit ();
}

void MenuBar::on_menu_help_about ()
{
	AboutDialog aboutDialog;
}

MenuBar::MenuBar ():
	fileMenu (),
	editMenu (),
	viewMenu (),
	helpMenu (),
	fileMenuItem ("_File", true),
	editMenuItem ("_Edit", true),
	viewMenuItem ("_View", true),
	helpMenuItem ("_Help", true),
	fileMenuOpenItem ("_Open", true),
	fileMenuQuitItem ("_Quit", true),
	helpMenuAboutItem ("About"),
	separator ()
{
	fileMenu.append (fileMenuOpenItem);
	fileMenu.append (separator);
	fileMenu.append (fileMenuQuitItem);

	fileMenuQuitItem.signal_activate().connect (sigc::mem_fun(*this,
	                                            &MenuBar::on_menu_file_quit));

	//TODO The appending of the "Edit" and "View" menu items will go here.

	helpMenu.append (helpMenuAboutItem);

	helpMenuAboutItem.signal_activate().connect (sigc::mem_fun(*this,
	                                                           &MenuBar::on_menu_help_about));

	fileMenuItem.set_submenu (fileMenu);
	editMenuItem.set_submenu (editMenu);
	viewMenuItem.set_submenu (viewMenu);
	helpMenuItem.set_submenu (helpMenu);

	append (fileMenuItem);
	append (editMenuItem);
	append (viewMenuItem);
	append (helpMenuItem);
}