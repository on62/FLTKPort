/**
* @file main.cpp
* @author Nitin Deshpande
* @date 8/5/2018, 11:39:40 PM
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Main interface to test all the methods and classes of MFLTK
*/

#include <iostream>
#include <FL/Fl.H>
#include "include/fltk_window.h"
#include "include/fltk_button.h"
#include "include/fltk_input.h"
#include "include/callbacks.h"
#include "include/fltk_return_button.h"
#include "include/fltk_light_button.h"
#include "include/fltk_repeat_button.h"

using namespace std;

int main (int argc, char** argv){

	const int w = 1000;
	const int h = 800;

	// main window
	FLTKWindow lftk;
	lftk.set_width (w);
	lftk.set_height (h);
	lftk.set_window_title ("FLTK C++11 Port");

	const int w_w = lftk.get_width ();
	const int w_h = lftk.get_height ();

	// click button
	FLTKButton ftkbtn;
	ftkbtn.set_width (100);
	ftkbtn.set_height (30);
	ftkbtn.set_button_label ("@FLTK");
	connector_on_button_pushed (&ftkbtn, cb_test, 4);

	// close button
	FLTKButton closebtn (20, 750, 100, 30);
	closebtn.set_button_label ("Close");
	connector_on_button_pushed (&closebtn, cb_quit_window, 4);

	// text box
	FLTKInput fltkinp (20, 60, 100, 30);
	fltkinp.set_input_text ((std::to_string(w_w)+", "
								+std::to_string(w_h)).c_str());

	cout<< "Contents of input text: " << fltkinp.get_input_text () << endl;
	cout << "Input Box Geometry: w= " << fltkinp.get_width () << ", h= "
	<< fltkinp.get_height () << endl;

	cout << "Push Button Geometry: w= " << ftkbtn.get_width () << ", h= "
	<< ftkbtn.get_height () << endl;

	// return button
	FLTKReturnButton flrb (20, 250, 100, 30);
	flrb.set_button_label ("RButton");
	connector_on_button_pushed (&flrb, cb_test, 4);

	// light button
	FLTKLightButton fllb (20, 350, 0, 0);
	fllb.set_button_label ("L-Button");
	fllb.set_width (100);
	fllb.set_height (30);
	fllb.set_light_color (FL_RED);
	connector_on_button_pushed (&fllb, cb_test, 4);

	// repeat button
	FLTKRepeatButton repbtn (20, 450, 100, 30, "@+");
	connector_on_button_pushed (&repbtn, cb_test, 4);

	// testing the functions written
	cout << "flrb text: "<< std::string (flrb.get_button_label ()) << endl;
	cout << "ftkbtn text: "<< std::string (ftkbtn.get_button_label ()) << endl;
	cout << "closebtn text: "<< std::string (closebtn.get_button_label ()) << endl;
	cout << "fllb text: "<< std::string (fllb.get_button_label ()) << endl;
    cout << "repbtn text: "<< std::string (repbtn.get_button_label ()) << endl;

	lftk.show ();
	return Fl::run ();
}
