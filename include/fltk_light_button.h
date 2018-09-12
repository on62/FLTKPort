
/**
* @file fltk_light_button.h
* @author Nitin Deshpande
* @date 8/16/2018, 3:03:08 PM
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief C++11 port class for Fl_Light_Button
* @append revision  1. 8/16/2018, 3:03:08 PM - added class members and
											   funtions;
					2. 8/16/2018, 4:19:31 PM - added member function to set the
											   color of the light -
											   set_light_color
					3.
*/

#ifndef FLTK_LIGHT_BUTTON_H
#define FLTK_LIGHT_BUTTON_H

#include <FL/Fl_Light_Button.H>

class FLTKLightButton: public Fl_Light_Button {
	public:

		/**
		* @brief Constructor to initialise the FLTKLightButton class
		* @param [in] - --
		* @return - --
		* @details A simple constructor to initialise an object of
				   FLTKLightButton class - default constructor
		*/
		FLTKLightButton();

		/**
		* @brief Constructor to initialise the FLTKLightButton class
		* @param [in] _x and _y - type - int - coordinate points for the
											   placement of the widget
					  width and height - type - int - geometric size of the
					  								  widget in pixels
		* @return - --
		* @details A simple constructor to initialise an object of
				   FLTKLightButton class
		*/
		FLTKLightButton(int _x, int _y, int width, int height);

		/**
		* @brief Constructor to initialise the FLTKLightButton class
		* @param [in] - _x and _y - type - int - coordinate points for the
											   placement of the widget
					  width and height - type - int - geometric size of the
					  								  widget in pixels
					  text - type - char - text to be drawn on top of the
					  					   FLTKLightButton
		* @return - --
		* @details A simple constructor to initialise an object of
				   FLTKLightButton class
		*/
		FLTKLightButton(int _x, int _y, int width, int height,
					   const char* text);

		/**
		* @brief Destructor to destroy the instances of FLTKLightButton class
		* @param [in] - --
		* @return - --
		* @details A simple destructor to terminate the instances of the
				   FLTKLightButton class
		*/
		~FLTKLightButton();

		// set methods

		/**
		* @brief Function to set the text on the FLTKLightButton
		* @param [in] text - type - char - text to be drawn on the
										   FLTKLightButton
		* @return - --
		* @details A simple function to draw and set the label on the
				   FLTKLightButton
		*/
		void set_button_label (const char* text);

		/**
		* @brief Function to set the width of the FLTKLightButton
		* @param [in] width - type - int - width of the FLTKLightButton
		* @return - --
		* @details A simple function to set the width of the FLTKLightButton
		*/
		void set_width (int width);

		/**
		* @brief Function to set the height of the FLTKLightButton
		* @param [in] height - type - int - height of the FLTKLightButton
		* @return - --
		* @details A simple function to set the height of the FLTKLightButton
		*/
		void set_height (int height);

		/**
		* @brief Function to set the color of light of the button
		* @param [in] color - type - Fl_Color - macros of type Fl_Color or
												enums
		* @return - --
		* @details A simple function to set the color of light of the button
		*/
		void set_light_color (Fl_Color color);

		// get methods

		/**
		* @brief Function to get the text label on the FLTKLightButton
		* @param [in] - --
		* @return char
		* @details A simple function to obtain the text label on the
				   FLTKLightButton
		*/
		const char* get_button_label ();

		/**
		* @brief Function to get the height of the FLTKLightButton
		* @param [in] - --
		* @return int
		* @details A simple function to obtain the width of the
				   FLTKLightButton
		*/
		int get_width ();

		/**
		* @brief Function to get the height of the FLTKLightButton
		* @param [in] - --
		* @return int
		* @details A simple function to obtain the height of the
				   FLTKLightButton
		*/
		int get_height ();

	private:
		int width, height;
		int _x, _y;
		const char* text;
};

#endif
