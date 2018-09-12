/**
* @file fltk_window.cpp
* @author Nitin Deshpande
* @date 7/29/2018
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Class interface for FLTKWindow
* @append revision 1. 7/29/2018;
				  2. 8/14/2018, 9:50:50 PM - changed the class name to
				  							 FLTKWindow, a more sensible one.
*/

#include "../include/fltk_window.h"

FLTKWindow::FLTKWindow (int width, int height)
:Fl_Window (width, height, ""){
	label ("<>");
}

FLTKWindow::FLTKWindow (int width, int height, const char* w_text)
:Fl_Window (width, height, w_text){
}

FLTKWindow::FLTKWindow ()
:Fl_Window (30, 30, "<>")
{}

FLTKWindow::~FLTKWindow (){}

void FLTKWindow::set_window_title (const char* w_text){
	Fl_Window::label (w_text);
}

const int FLTKWindow::get_width (){
	return Fl_Window::decorated_w ();
}

const int FLTKWindow::get_height (){
	return Fl_Window::decorated_h ();
}

void FLTKWindow::set_width (const int width){
	Fl_Window::w (width);
}

void FLTKWindow::set_height (const int height){
	Fl_Window::h (height);
}
