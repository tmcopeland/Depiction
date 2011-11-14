//           Depiction.cc
//  Sat November 12 21:15:36 2011
//  Copyright  2011  Taylor Copeland
//  <taylor@taylorcopeland.com>
// Depiction.cc
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

#include "Depiction.h"

Depiction::Depiction () :
	mainBox (Gtk::ORIENTATION_VERTICAL, 1)
{
	set_title ("Depiction Photo Manager");
	set_default_size (960, 720);
	set_position (Gtk::WIN_POS_CENTER);
	
	MenuBar* mainMenuBar = Gtk::manage (new MenuBar ());
	MainToolbar* mainToolbar = Gtk::manage (new MainToolbar ());
	mainBox.pack_start (*mainMenuBar, false, true, 1);
	mainBox.pack_start (*mainToolbar, false, true, 1);

	add (mainBox);

	show_all_children (true);
}