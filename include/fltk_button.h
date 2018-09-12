/**
* @file fltk_button.h
* @author Nitin Deshpande
* @date 7/29/2018
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Class for instantiating a simple FLTK button
* @append revision 1. 7/29/2018 - added class members and functions;
				   2.
*/

#ifndef FLTK_BUTTON_H
#define FLTK_BUTTON_H

#include <FL/Fl_Button.H>

class FLTKButton:public Fl_Button{
	public:
		/**
		* @brief Constructor to instantiate a simple FLTK push button
		* @param [in] - --
		* @return - --
		* @details A constructor to instantiate a simple FLTK push button. The
				   push button is initialized to width=100, and height=30. Then,
				   (X,Y)=(20, 20)
		*/
		FLTKButton ();

		/**
		* @brief Constructor to instantiate a simple FLTK button.
		* @param [in] - _x; type: int - x co-ordinate
						_y; type: int - y co-ordinate
						width; type: int - width of the button
						height; type: int - height of the button

		* @return - --
		* @details A constructor to instantiate a simple FLTK push button. The
				   push button is instantiated with a user defined width and
				   height. The object is instantiated at co-ordinate points _x,
				   and _y.
		*/
		FLTKButton (int _x, int _y, int width, int height);

		/**
		* @brief Constructor to instantiate a simple FLTK button.
		* @param [in] - _x; type: int - x co-ordinate
						_y; type: int - y co-ordinate
						width; type: int - width of the button
						height; type: int - height of the button
						btn_label; type: const char - preset text that appears
						on the button.

		* @return - --
		* @details A constructor to instantiate a simple FLTK push button. The
				   push button is instantiated with a user defined width and
				   height. The object is instantiated at co-ordinate points _x,
				   and _y, with a preset text btn_label.
		*/
		FLTKButton (int _x, int _y, int width, int height,
					const char* btn_label);

		/**
		* @brief Destructor to destroy any instances of FLTK buttons
		* @param [in] - --
		* @return - --
		* @details Destructor to destroy any instances of FLTK buttons
		*/
		~FLTKButton ();

		/**
		* @brief Add label text to an FLTK button
		* @param [in] btn_label: Char of const modifier type
		* @return void
		* @details Assigns the label name for an FLTK button.
		*/
		void set_button_label (const char* l_text);

		/**
		* @brief <brief>
		* @param [in] <name> <parameter_description>
		* @return <return_description>
		* @details <details>
		*/
		void set_width (const int width);

		/**
		* @brief <brief>
		* @param [in] <name> <parameter_description>
		* @return <return_description>
		* @details <details>
		*/
		void set_height (const int height);

		/**
		* @brief <brief>
		* @param [in] <name> <parameter_description>
		* @return <return_description>
		* @details <details>
		*/
		const char* get_button_label ();

		/**
		* @brief Function to obtain the width of the FLTK push button.
		* @param [in] - --
		* @return width; type: const int
		* @details A simple function to obtain the width of an FLTK push button.
				   Can be useful to compute the position of widgets in the
				   window.
		*/
		const int get_width ();

		/**
		* @brief Function to obtain the height of the FLTK push button.
		* @param [in] - --
		* @return height; type: const int
		* @details A simple function to obtain the height of an FLTK push
				   button. Can be useful to compute the position of widgets in
				   the window.
		*/
		const int get_height ();

	private:
		int width, height;
		int _x, _y;
		const char* l_text;
};

#endif
