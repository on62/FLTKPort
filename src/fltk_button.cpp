/**
* @file fltk_button.cpp
* @author Nitin Deshpande
* @date 7/29/2018
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Class interface for fltk_button
* @append revision 1. 7/29/2018 - added class members and functions;
				   2.
*/

#include "../include/fltk_button.h"
#include <iostream>

FLTKButton::FLTKButton ():Fl_Button(20, 20, 100, 20, "Push Button"){
}

FLTKButton::FLTKButton (int _x, int _y, int width, int height)
:Fl_Button (_x, _y, width, height){
	label ("Push Button");
}

FLTKButton::FLTKButton (int _x, int _y, int width, int height,
			const char* btn_label):Fl_Button (_x, _y, width, height, btn_label){
}

FLTKButton::~FLTKButton (){
}

void FLTKButton::set_button_label (const char* btn_label){
	Fl_Button::label (btn_label);
}

const char* FLTKButton::get_button_label (){
	return Fl_Button::label ();
}

void FLTKButton::set_width (const int width){
	Fl_Button::w (width);
}

void FLTKButton::set_height (const int height){
	Fl_Button::h (height);
}

const int FLTKButton::get_width (){
	return Fl_Button::w ();
}

const int FLTKButton::get_height (){
	return Fl_Button::h ();
}
