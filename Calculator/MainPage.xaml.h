//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace Calculator
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();
		void calculate(int operation_id);

	private:

		void Page_KeyDown(Platform::Object^ sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs^ e);
		void add_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void sub_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void mul_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void div_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void exit_button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
