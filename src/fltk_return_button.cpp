/**
* @file fltk_return_button.cpp
* @author Nitin Deshpande
* @date 8/16/2018, 10:50:59 AM
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Class implementor for FLTKReturnButton
* @append revision 1. 8/16/2018, 10:51:31 AM - implemented the FLTKButton
												class;
					2.
*/

#include "../include/fltk_return_button.h"
#include <iostream>

FLTKReturnButton::FLTKReturnButton ():Fl_Return_Button (60, 60, 150, 30,
									"Return Button") {}

FLTKReturnButton::FLTKReturnButton (int _x, int _y,
									int width, int height):
									Fl_Return_Button (_x, _y, width, height) {
	label ("Return Button");
}

FLTKReturnButton::FLTKReturnButton (int _x, int _y,
									int width, int height,
									const char* text):
Fl_Return_Button (_x, _y, width, height, text){}

void FLTKReturnButton::set_button_label (const char* text){
	Fl_Return_Button::label (text);
}

void FLTKReturnButton::set_width (int width){
	Fl_Return_Button::w (width);
}

void FLTKReturnButton::set_height (int height){
	Fl_Return_Button::w (height);
}

const char* FLTKReturnButton::get_button_label (){
	return Fl_Return_Button::label ();
}

int FLTKReturnButton::get_width (){
	return Fl_Return_Button::w ();
}

int FLTKReturnButton::get_height (){
	return Fl_Return_Button::h ();
}

FLTKReturnButton::~FLTKReturnButton (){
}
