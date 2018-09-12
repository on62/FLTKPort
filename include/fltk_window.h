/**
* @file fltk_window.h
* @author Nitin Deshpande
* @date 7/29/2018
* @copyright 2018 Nitin Deshpande - MatLunix
* @brief Class for instantiating a simple FLTK window
* @append revision 1. 7/29/2018;
				   2. 7/29/2018, 11:49:49 PM - renamed class from learn_fltk to
				  							mfltk, m stands for modified;
				   3. 8/14/2018, 9:50:50 PM - changed the class name to
				  							 FLTK_Window, a more sensible one.
*/

#ifndef FLTK_WINDOW_H
#define FLTK_WINDOW_H

#include <FL/Fl_Window.H>

 class FLTKWindow: public Fl_Window{
     public:
		 /**
		 * @brief Constructor to instantiate a simple fltk window.
		 * @param [in] --
		 * @return - --
		 * @details Constructor to draw a simple fltk window.
		 */
		 FLTKWindow ();

		/**
		* @brief Constructor to instantiate a simple fltk window
		* @param [in] width - width of the window
					  height - height of the window
		* @return - --
		* @details Constructor to draw a simple fltk window on the frame buffer.
		*/
        FLTKWindow(int width, int height);

		/**
		* @brief Constructor to instantiate a simple fltk window.
		* @param [in] width - width of the window
					  height - height of the window
					  ŵ_text - string to display in the title bar of the
					  			window.
		* @return - --
		* @details Constructor to draw a simple fltk window on the frame buffer
					given the geometry of the window, and the title of the
					window.
		*/
		FLTKWindow (int width, int height, const char* w_text);

		/**
		* @brief Destructor
		* @param [in] --
		* @return --
		* @details A mere desctructor.
		*/
		~FLTKWindow ();

		/**
		* @brief Function to set window title text to an MFltk based window
				 object.
		* @param [in] w_text - Title text of the window
		* @return - --
		* @details A simple function to set the title of a MFltk window object.
		*/
		void set_window_title (const char* w_text);

		/**
		* @brief Function to obtain the width of the window
		* @param [in] - --
		* @return width; type: int
		* @details A simple function to obtain the width of the window. Can be
		* 		   useful to compute the position of widgets in the window.
		*/
		const int get_width ();

		/**
		* @brief Function to obtain the height of the window
		* @param [in] - --
		* @return height; type: int
		* @details A simple function to obtain the height of the window. Can be
		* 		   useful to compute the position of wiidgets in the window.
		*/
		const int get_height ();

		/**
		* @brief Function to set the width of the FLTKWindow
		* @param [in] width - type - int - width of the widget
		* @return - --
		* @details A simple function to set the width of the FLTKWindow
		*/
		void set_width (const int width);

		/**
		* @brief Function to set the height of the FLTKWindow
		* @param [in] height - type - int - height of the widget
		* @return - --
		* @details A simple function to set the height of the FLTKWindow
		*/
		void set_height (const int height);


     private:
        int width, height;
		const char* w_text;

 };
#endif
