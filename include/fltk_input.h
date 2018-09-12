/**
* @file fltk_input.h
* @author Nitin Deshpande
* @date 7/29/2018
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Class for instantiating a simple FLTK input box
* @append revision 1. 7/29/2018 - added class members and functions;
				   2.
*/

#ifndef FLTK_INPUT_H
#define FLTK_INPUT_H

#include <FL/Fl_Input.H>

class FLTKInput:public Fl_Input {
	public:
		/**
		* @brief Constructor to instantiate a simple FLTK input box.
		* @param [in] - --
		* @return - --
		* @details A constructor to instantiate a simple FLTK input box. The
				   width of the input box is set to 100, and its height is set
				   to 30. The input box will appear at (X,Y): (20, 20).
		*/
		FLTKInput ();

		/**
		* @brief Constructor to instantiate a simple FLTK input box.
		* @param [in] (_x, _y); type: int - co-ordinate position at which the
		object would appear in the window.
		width; type: int - width/number of columns of the object.
		height; type: int - height/number of rows of the object.
		* @return - --
		* @details A constructor to instantiate a simple FLTK input box.
		*/

		FLTKInput (int _x, int _y, int width, int height);

		/**
		* @brief Constructor to instantiate a simple FLTK input box.
		* @param [in] (_x, _y); type: int - co-ordinate position at which the
					   object would appear in the window.
					   width; type: int - width/number of columns of the object.
					   height; type: int - height/number of rows of the object.
					   input; type: const char - preset text in the object.
		* @return - --
		* @details A constructor to instantiate a simple FLTK input box.
		*/
		FLTKInput (int _x, int _y, int width, int height, const char* input);

		/**
		* @brief Destructor to destroy the instance of a simple FLTK input box.
		* @param [in] - --
		* @return - --
		* @details Destructor to destroy the instance of a simple FLTK input
				   box.
		*/
		~FLTKInput ();

		/**
		* @brief Function to insert a preset text into a simple FLTK input box.
		* @param [in] input; type: const char - preset text in the object.
		* @return - --
		* @details A simple function to insert or set text into a simple FLTK
				   input box.
		*/
		void set_input_text (const char* input);

		/**
		* @brief Function to get the contents of the input box
		* @param [in] - --
		* @return char - pointer to type char
		* @details A simple function to obtain the contents of the input box
		*/
		const char* get_input_text ();

		/**
		* @brief Function to set the width of the input widget
		* @param [in] width; type - const int - width of the input widget
		* @return - --
		* @details A simple function to set value of width to the input widget
		*/
		void set_width (const int width);

		/**
		* @brief Function to set the height of the input widget
		* @param [in] width; type - const int - height of the input widget
		* @return - --
		* @details A simple function to set value of height to the input widget
		*/
		void set_height (const int height);

		/**
		* @brief Function to obtain the width of the input box.
		* @param [in] - --
		* @return width; type: int.
		* @details A simple function to obtain the width of the input box. Maybe
				   useful when working with the geometry of the window and other
				   widgets.
		*/
		const int get_width ();

		/**
		* @brief Function to obtain the height of the input box.
		* @param [in] - --
		* @return height; type: int.
		* @details A simple function to obtain the height of the input box. Maybe
				   useful when working with the geometry of the window and other
				   widgets.
		*/
		const int get_height ();

	private:
		int _x, _y, width, height;
		const char* input;
};
#endif
