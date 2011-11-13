/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/***************************************************************************
 *            AboutDialog.h
 *
 *  Sat November 12 21:15:37 2011
 *  Copyright  2011  Taylor Copeland
 *  <taylor@taylorcopeland.com>
 ****************************************************************************/
/*
 * AboutDialog.h
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

#ifndef _DEPICTION_ABOUT_DIALOG_H
#define _DEPICTION_ABOUT_DIALOG_H

#include <gtkmm.h>
#include <iostream>

class AboutDialog : public Gtk::AboutDialog
{
public:
	AboutDialog ();
private:
protected:
/*	Glib::ustring program_name					= "Depiction Photo Manager";
	Glib::ustring version						= "0.1";
	Glib::ustring copyright						= "2011 Taylor Copeland";
	Glib::ustring comments						= NULL;
	Glib::ustring license						= "GNU General Public License";
	Gtk::License license_type					= Gtk::LICENSE_GPL_3_0;
	Glib::ustring website						= NULL;
	Glib::ustring website_label					= NULL;
	Glib::ustring authors						= NULL;
	Glib::ustring documenters					= NULL;
	Glib::ustring artists						= NULL;
	Glib::ustring translator_credits			= NULL;
	Glib::ustring logo							= NULL;
	Glib::RefPtr<Gdk::Pixbuf> logo_icon_name	= NULL;
	bool wrap_license							= true;*/
};

#endif // _DEPICTION_ABOUT_DIALOG_H
