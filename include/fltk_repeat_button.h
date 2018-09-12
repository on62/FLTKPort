/**
* @file fltk_repeat_button.h
* @author Nitin Deshpande
* @date 9/6/2018, 3:36:41 PM
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Class for the repeat button - a particular event is trigerred until the
		 button is released.
* @append revision 1. 9/6/2018, 3:37:34 PM - Designing the class.
				   2. 9/6/2018, 4:56:41 PM - finished implementation of the class
**/

#ifndef FLTK_REPEAT_BUTTON_H
#define FLTK_REPEAT_BUTTON_H

#include <FL/Fl_Repeat_Button.H>

class FLTKRepeatButton:public Fl_Repeat_Button{
	public:
		/**
		* @brief Constructor to initialize the Fl repeat button
		* @param [in] - --
		* @return - --
		* @details A simple constructor to initialize the repeat button.
		*/
		FLTKRepeatButton ();

		/**
		* @brief Constructor to initialize the Fl repeat button
		* @param [in] _x, _y - type - int - x and y co-ordinates of the button
					  width, height - type - int - width and height of the button
		* @return - --
		* @details A simple constructor to initialize the repeat button.
		*/
		FLTKRepeatButton (int _x, int _y, int width, int height);

		/**
		* @brief Constructor to initialize the Fl repeat button
		* @param [in] _x, _y - type - int - x and y co-ordinates of the button
					  width, height - type - int - width and height of the button
					  l_text - type - char - text of the label of the button
		* @return - --
		* @details A simple constructor to initialize the repeat button.
		*/
		FLTKRepeatButton (int _x, int _y, int width, int height,
																const char* l_text);
		/**
		* @brief Destructor to the FLTKRepeatButton class
		* @param - --
		* @return - --
		* @details Destructor to the FLTKRepeatButton class
		*/
		~FLTKRepeatButton ();

		/**
		* @brief Function to set the label of the button
		* @param [in] l_text - type - char - label of the button
		* @return - --
		* @details A simple function to set the label of the button.
		*/
		void set_button_label (const char* l_text);

		/**
		* @brief Function to get the label of the button
		* @param [in] - --
		* @return char - the label of the button
		* @details A simple function to obtain the label of the button
		*/
		const char* get_button_label ();

		/**
		* @brief Function to set the width of the button
		* @param [in] width - type - int - width of the button
		* @return - --
		* @details A simple function to set the width of the button
		*/
		void set_width (const int width);

		/**
		* @brief Function to get the width of the button
		* @param [in] - --
		* @return int - width of the button
		* @details A simple function to obtain the width of the button
		*/
		const int get_width ();

		/**
		* @brief Function to set the height of the button
		* @param [in] height - type - int - height of the button
		* @return - --
		* @details A simple function to set the height of the button
		*/
		void set_height (const int height);

		/**
		* @brief Function to get the height of the button
		* @param [in] - --
		* @return int - height of the button
		* @details A simple function to obtain the height of the button
		*/
		const int get_height ();
	private:
		int width, height;
		int _x, _y;
		const char* l_text;
};
#endif
