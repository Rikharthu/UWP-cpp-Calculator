//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include <string>
#include <cstdlib>

using namespace std;
using namespace Calculator;

using namespace Windows::UI::Popups;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::System;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

const int OPERATION_ADD = 1;
const int OPERATION_SUB = 2;
const int OPERATION_MULT = 3;
const int OPERATION_DIV = 4;

MainPage::MainPage()
{
	InitializeComponent();
}

double StringToDouble(String^ str) {
	return std::stod(str->Data());
}

void Calculator::MainPage::calculate(int op)
{
	try {
		double left = StringToDouble(first_operand_textbox->Text);
		double right = StringToDouble(second_operand_textbox->Text);

		double result;

		switch (op) {
		case OPERATION_MULT:
			result = left*right;
			break;
		case OPERATION_DIV:
			//if (right == 0) {
				//throw "Division by zero!"
			//};
			result = left / right;
			break;
		case OPERATION_ADD:
			result = left + right;
			break;
		case OPERATION_SUB:
			result = left - right;
			break;
		default:
			return;
		}

		result_textbox->Text = result.ToString();

	}
	catch (string str) {
		// Unsupported operation exception. do nothing
		/*MessageDialog ^ msgDialog = ref new MessageDialog("Error: " + str, "Error");
		msgDialog->Commands->Append(ref new UICommand("OK"));
		msgDialog->ShowAsync();*/
	}
	catch (...) {
		// show user notification
		MessageDialog ^ msgDialog = ref new MessageDialog("Error in operands!", "Error");
		msgDialog->Commands->Append(ref new UICommand("OK"));
		msgDialog->ShowAsync();
	}
}


void Calculator::MainPage::Page_KeyDown(Platform::Object^ sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs^ e)
{
	VirtualKey key = e->Key;
	if (key == VirtualKey::Escape) {
		Application::Current->Exit();
	}
}


void Calculator::MainPage::add_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	try {
		calculate(OPERATION_ADD);
	}
	catch (...) {

	}
}


void Calculator::MainPage::sub_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	try {
		calculate(OPERATION_SUB);
	}
	catch (...) {

	}
}


void Calculator::MainPage::mul_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	calculate(OPERATION_MULT);
}



void Calculator::MainPage::div_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	try {
		calculate(OPERATION_DIV);
	}
	catch (...) {

	}
}


void Calculator::MainPage::exit_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Application::Current->Exit();
}
