/**
* @file m_i2.cpp
* @author Nitin Deshpande
* @date 7/30/2018, 12:09:58 AM
* @copyright 2018 Nitin Deshpande
* @brief Variant interface of all the classes written so far.
*/

#include "include/mfltk.h"
#include "include/fltk_button.h"
#include <iostream>
#include <FL/Fl.H>

using namespace std;

int main (int argc, char** argv){
	MFltk nw (700, 400);
	nw.set_window_title ("This is MFLTK");
	FLTKButton btn;
	btn.button_label ("Okay!");
	nw.show ();
	return Fl::run ();
}
