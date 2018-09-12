/**
* @file fltk_return_button.h
* @author Nitin Deshpande
* @date 15 Aug 2018
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Class for a return button with C++11 port - a button that is
		 activated when a return key is pressed
* @append revision 1. 8/16/2018, 10:49:35 AM - added constructors and methods
												for the class;
					2. 8/16/2018, 12:54:39 PM - removed the const modifiers in
												the private section;
					3.
*/

#ifndef FLTK_RETURN_BUTTON_H
#define FLTK_RETURN_BUTTON_H

#include <FL/Fl_Return_Button.H>

class FLTKReturnButton:public Fl_Return_Button {
	public:

		/**
		* @brief Constructor to initialise FLTKReturnButton
		* @param [in] Default constructor
		* @return - --
		* @details A simple constructor to initialise the FLTKReturnButton
		*/
		FLTKReturnButton ();

		/**
		* @brief Constructor to initialise FLTKReturnButton
		* @param [in] _x and _y - type - int - x and y coordinate pair of the
											   placement of the widget
					 width and height - type - int - width and height of the
					 								 widget
		* @return - --
		* @details A simple constructor to initialise the FLTKReturnButton
		*/
		FLTKReturnButton (int _x, int _y, int width, int height);

		/**
		* @brief Constructor to initialise FLTKReturnButton
		* @param [in] _x and _y - type - int - x and y coordinate pair of the
											   placement of the widget
					 width and height - type - int - width and height of the
					 								 widget
					 text - type - char - text to be displayed on the
					 					  FLTKReturnButton
		* @return - --
		* @details A simple constructor to initialise the FLTKReturnButton
		*/
		FLTKReturnButton (int _x, int _y, int width, int height,
						const char* text);

		/**
		* @brief Destructor to destroy FLTKReturnButton instances
		* @param [in] - --
		* @return - --
		* @details A simple destructor to terminate the instances of the
				   FLTKReturnButton
		*/
		~FLTKReturnButton ();

		/**
		* @brief Function to set the label of the return button
		* @param [in] text - type - char - text to be displayed on the
										   FLTKReturnButton
		* @return - --
		* @details A simple function to draw the text on top of the
				   FLTKReturnButton
		*/
		void set_button_label (const char* text);

		/**
		* @brief Function to set the width of the return button
		* @param [in] width - type - int - width of the widget
		* @return - --
		* @details A simple function to set the width of the FLTKReturnButton
		*/
		void set_width (int width);

		/**
		* @brief Function to set the height of the return button
		* @param [in] height - type - int - height of the widget
		* @return - --
		* @details A simple function to set the height of the FLTKReturnButton
		*/
		void set_height (int height);

		/**
		* @brief Function to obtain the label of the return button
		* @param [in] - --
		* @return char
		* @details A simple function to get the text of the label of the
				   FLTKReturnButton
		*/
		const char* get_button_label ();

		/**
		* @brief Function to obtain the width of the return button
		* @param [in] - --
		* @return int
		* @details A simple function to get the width of the FLTKReturnButton
		*/
		int get_width ();

		/**
		* @brief Function to obtain the width of the return button
		* @param [in] - --
		* @return int
		* @details A simple function to get the height of the FLTKReturnButton
		*/
		int get_height ();

	private:
		int width, height;
		int _x, _y;
		const char* text;
};
#endif
