/*Joao DeCastro
CS 240 assignment 1




 ### DESCRIPTION ###
----------- This program will make simple math operation with interactive UI.

			1 - User is able to try different operations
			2 - It will show result and interactive answers to user
			3 - Adition, subtraction and multiplication are available
			4 - Help buttom and form with steps and examples to help users
*/



#include "Form1.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace MATHX;
[STAThreadAttribute]



int main(array<System::String^>^ args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
