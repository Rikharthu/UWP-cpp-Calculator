﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#pragma warning(push)
#pragma warning(disable: 4100) // unreferenced formal parameter

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage.xaml.h"

void ::Calculator::MainPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::Calculator::MainPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
    case 1:
        {
            ::Windows::UI::Xaml::Controls::Page^ element1 = safe_cast<::Windows::UI::Xaml::Controls::Page^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Page^>(element1))->KeyDown += ref new ::Windows::UI::Xaml::Input::KeyEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::Input::KeyRoutedEventArgs^))&MainPage::Page_KeyDown);
        }
        break;
    case 2:
        {
            ::Windows::UI::Xaml::Controls::AppBarButton^ element2 = safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(element2))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::add_button_Click);
        }
        break;
    case 3:
        {
            ::Windows::UI::Xaml::Controls::AppBarButton^ element3 = safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(element3))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::sub_button_Click);
        }
        break;
    case 4:
        {
            ::Windows::UI::Xaml::Controls::AppBarButton^ element4 = safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(element4))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::div_button_Click);
        }
        break;
    case 5:
        {
            ::Windows::UI::Xaml::Controls::AppBarButton^ element5 = safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(element5))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::mul_button_Click);
        }
        break;
    case 6:
        {
            ::Windows::UI::Xaml::Controls::AppBarButton^ element6 = safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(element6))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::exit_button_Click);
        }
        break;
    case 7:
        {
            this->exit_imagebutton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->exit_imagebutton))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::exit_button_Click);
        }
        break;
    case 8:
        {
            this->add_button = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->add_button))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::add_button_Click);
        }
        break;
    case 9:
        {
            this->sub_button = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->sub_button))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::sub_button_Click);
        }
        break;
    case 10:
        {
            this->mul_button = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->mul_button))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::mul_button_Click);
        }
        break;
    case 11:
        {
            this->div_button = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->div_button))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::div_button_Click);
        }
        break;
    case 12:
        {
            this->result_textbox = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(__target);
        }
        break;
    case 13:
        {
            this->second_operand_textbox = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(__target);
        }
        break;
    case 14:
        {
            this->first_operand_textbox = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(__target);
        }
        break;
    case 15:
        {
            this->add_imagebutton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->add_imagebutton))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::add_button_Click);
        }
        break;
    case 16:
        {
            this->sub_imagebutton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->sub_imagebutton))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::sub_button_Click);
        }
        break;
    case 17:
        {
            this->mul_imagebutton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->mul_imagebutton))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::mul_button_Click);
        }
        break;
    case 18:
        {
            this->div_imagebutton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->div_imagebutton))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Calculator::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::div_button_Click);
        }
        break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::Calculator::MainPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

#pragma warning(pop)


