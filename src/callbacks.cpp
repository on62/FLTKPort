/**
* @file callbacks.cpp
* @author Nitin Deshpande
* @date 8/5/2018, 1:20:06 PM
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Implementations for Common collection of callbacks of various FLTK
		 buttons
* @append revision 1. 8/5/2018, 1:20:14 PM - Added callback for button;
				  2. 8/5/2018, 10:17:55 PM - Added callback for button -
				  	 WHEN_RELEASE in show_message;
				  3. 8/5/2018, 10:27:52 PM - Added callback for button -
				  	 copy_contents;
				  4. 8/16/2018, 4:17:58 PM - Changed the copy_contents callback
   				  							 to test
				  5.
Notes to me 	1. The FLTK specs dictate that one writes the callback with the
				following signature - <T> callback_function (Fl_Widget*, void*)
				2. When passing a callback fn to a non-callback like functions,
				pass the entire callback function signature in the function
				prototype.
				3. To quit all windows - exit (0) would do, and this call needs
				to be embedded inside a valid callback.
				http://www3.telus.net/public/robark/

Development Nomenclature - a. cb_function_name - indicates callback fiunctions
						   b. connector_function_name - indicates a connector
						   function that couples an FLTK widget with a
						   callback.
*/


#include "../include/callbacks.h"
#include <FL/Fl.H>
#include <iostream>

void connector_on_button_pushed (Fl_Button* b, void cbf (Fl_Widget*, void*),
															 int enum_when){
    if (enum_when < 0 || enum_when > 11){
		std::cout << "Error setting enum_when. Setting enum_when = 0"
				  << std::endl;
		enum_when = 0;
	}

	// coupling the callback with the fltk widget
	b->when (enum_when);
	b->callback (cbf);
}


void cb_show_message (Fl_Widget* w, void*){
	std::cout << "Clicked!" << std::endl;
}

void cb_test (Fl_Widget* w, void*){
	if (((Fl_Button*) w)->value ()){
		std::cout <<"++ Clicked ++" << std::endl;
	}

   	else{
		std::cout <<"## Released ##" << std::endl;
	}

}

void cb_quit_window (Fl_Widget* w, void *){
	exit (0);
}
