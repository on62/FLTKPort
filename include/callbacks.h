/*
Author: Nitin Deshpande
File: callback.h
Purpose: Common collection of callbacks of various FLTK buttons
Date Created: 8/5/2018, 1:17:57 PM
Append revisions: 1. 8/5/2018, 1:18:01 PM - Added callback for button;
				  2. 8/5/2018, 11:00:54 PM - Added callback to quit all
				  	 windows;
				  3. 8/6/2018, 5:44:43 PM - Added nomenclature to connector
				  	 functions and callback functions.
				  4. 8/16/2018, 4:17:58 PM - Changed the copy_contents callback
				  							 to test
*/
#include <FL/Fl_Button.H>
#include <functional>

#ifndef CALLBACK_H
#define CALLBACK_H

/*
When Conditions
enum  	Fl_When {
FL_WHEN_NEVER = 0, FL_WHEN_CHANGED = 1, FL_WHEN_NOT_CHANGED = 2,
FL_WHEN_RELEASE = 4, FL_WHEN_RELEASE_ALWAYS = 6, FL_WHEN_ENTER_KEY = 8,
FL_WHEN_ENTER_KEY_ALWAYS =10, FL_WHEN_ENTER_KEY_CHANGED =11
}
*/
/**
* @brief Method to connect/bind an FLTK button with a callback method.
* @param [in] 1. Fl_Button - pointer to FLTK button
			  2. cbf - callback function to trigger events.
* @return - --
* @details A method to connect an FLTK button with a callback method.
*/
void connector_on_button_pushed (Fl_Button* b, void cbf (Fl_Widget*, void*),
						int enum_when);

/**
* @brief Callback to print message on a tty or equivalent text streams.
* @param [in] 1. Fl_Widget - pointer to FLTK widget
			  2. void *
			  The FLTK specs dictates that the callbacks be written in this
			  fashion - <T> callback_function (Fl_Widget*, void*)
* @return - --
* @details A callback function to display "Clicked" on a standard tty or an
		   equivalent text stream.
*/
void cb_show_message (Fl_Widget* w, void*);

/**
* @brief Test callback to print message on a tty or equivalent text streams -
		 when button is clicked.
* @param [in] 1. Fl_Widget - pointer to FLTK widget
			  2. void *
			  The FLTK specs dictates that the callbacks be written in this
			  fashion - <T> callback_function (Fl_Widget*, void*)
* @return - --
* @details A callback function to display some message on a standard tty or an
		   equivalent text stream.
*/
void cb_test (Fl_Widget* w, void*);

/**
* @brief Callback to close all open windows
* @param [in] 1. Fl_Button - pointer to FLTK button
			  2. void *
			  The FLTK specs dictates that the callbacks be written in this
			  fashion - <T> callback_function (Fl_Widget*, void*)
* @return - --
* @details A simple callback to close all the opened FLTK windows.
*/
void cb_quit_window (Fl_Widget* w, void *);

#endif
