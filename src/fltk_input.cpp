/**
* @file fltk_input.cpp
* @author Nitin Deshpande
* @date 7/29/2018
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Class interface for FLTKInput
* @append revision 1. 7/29/2018 - added class members and functions;
				   2.
*/

#include "../include/fltk_input.h"

FLTKInput::FLTKInput ():Fl_Input (40, 40, 100, 30, "Input Box"){
}

FLTKInput::FLTKInput (int _x, int _y, int width, int height,
					 const char* input)
					 :Fl_Input (_x, _y, width, height, input){
}

FLTKInput::FLTKInput (int _x, int _y, int width, int height)
:Fl_Input (_x, _y, width, height){
	value ("Push Button");
}

FLTKInput::~FLTKInput (){
}

void FLTKInput::set_input_text (const char* input){
	Fl_Input::value (input);
}
const char* FLTKInput::get_input_text (){
	return Fl_Input::value ();
}

void FLTKInput::set_width (const int width){
	Fl_Input::w (width);
}

void FLTKInput::set_height (const int height){
	Fl_Input::h (height);
}

const int FLTKInput::get_width (){
	return Fl_Input::w ();
}

const int FLTKInput::get_height (){
	return Fl_Input::h ();
}
