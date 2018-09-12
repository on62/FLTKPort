/**
* @file fltk_light_button.cpp
* @author Nitin Deshpande
* @date 8/16/2018, 3:28:45 PM
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Class implementor for the FLTKLightButton widget
* @append revision 1. 8/16/2018, 3:03:08 PM - added class members and
											   funtions;
				   2.
* Macros for Fl_Color - http://www.fltk.org/doc-1.3/Enumerations_8H.html#a8b762953646f8abee866061f1af78a6a
*/

#include "../include/fltk_light_button.h"

FLTKLightButton::FLTKLightButton ()
:Fl_Light_Button (70, 70, 150, 30, "Light Button"){}

FLTKLightButton::FLTKLightButton (int _x, int _y, int width, int height)
:Fl_Light_Button (_x, _y, width, height){
	label ("Light Button");
}

FLTKLightButton::FLTKLightButton (int _x, int _y, int width, int height,
	const char* text):Fl_Light_Button (_x, _y, width, height, text){}

FLTKLightButton::~FLTKLightButton (){}

void FLTKLightButton::set_button_label (const char* text){
	Fl_Light_Button::label (text);
}

void FLTKLightButton::set_width (int width){
	Fl_Light_Button::w (width);
}

void FLTKLightButton::set_height (int height){
	Fl_Light_Button::h (height);
}

void FLTKLightButton::set_light_color (Fl_Color color){
	Fl_Light_Button::selection_color (color);
}

const char* FLTKLightButton::get_button_label (){
	return Fl_Light_Button::label ();
}

int FLTKLightButton::get_width (){
	return Fl_Light_Button::w ();
}

int FLTKLightButton::get_height (){
	return Fl_Light_Button::h ();
}
