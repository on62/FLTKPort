/**
* @file fltk_repeat_button.cpp
* @author Nitin Deshpande
* @date 9/6/2018, 3:36:41 PM
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Class for the repeat button - a particular event is trigerred until the
		 button is released.
* @append revision 1. 9/6/2018, 3:37:34 PM - Designing the class.
				   2. 9/6/2018, 4:56:41 PM - finished implementation of the class
**/
#include "../include/fltk_repeat_button.h"
#include <iostream>

FLTKRepeatButton::FLTKRepeatButton ():Fl_Repeat_Button (90, 90, 100, 20, "Repeat Button") {
}

FLTKRepeatButton::FLTKRepeatButton (int _x, int _y, int width, int height):Fl_Repeat_Button (_x, _y, width, height) {
	label ("Repeat Button");
}

FLTKRepeatButton::FLTKRepeatButton (int _x, int _y, int width, int height, const char* l_text):Fl_Repeat_Button (_x, _y, width, height, l_text) {
}

FLTKRepeatButton::~FLTKRepeatButton () {
}

void FLTKRepeatButton::set_button_label (const char* l_text) {
	Fl_Repeat_Button::label (l_text);
}

const char* FLTKRepeatButton::get_button_label () {
	return Fl_Repeat_Button::label ();
}

void FLTKRepeatButton::set_width (const int width) {
	Fl_Repeat_Button::w (width);
}

const int FLTKRepeatButton::get_width () {
	return Fl_Repeat_Button::w ();
}

void FLTKRepeatButton::set_height (const int height) {
	Fl_Repeat_Button::h (height);
}

const int FLTKRepeatButton::get_height () {
	return Fl_Repeat_Button::h ();
}
