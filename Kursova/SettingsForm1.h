#pragma once
#include <Windows.h>
#include <string.h>
#include "USB_Class.h"

namespace Kursova {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace Microsoft::Win32;

	/// <summary>
	/// Сводка для SettingsForm1
	/// </summary>
	public ref class SettingsForm1 : public System::Windows::Forms::Form
	{
	public:
		RegistryKey^ reg;
		BOOL ISUpdating;
		SettingsForm1(Dictionary<DWORD, USB_Device^> ^USB_List, BOOL ^flag)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			HotKeyDict = USB_List;
			ISUpdating = *flag;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SettingsForm1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	public: Dictionary<DWORD, USB_Device^> ^HotKeyDict;
	public: Dictionary <DWORD, CHAR> ^UpdatingList;

	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(15, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 25);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Застосувати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SettingsForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(155, 232);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 25);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Скасувати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SettingsForm1::button2_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(13, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 48);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Якщо уввімкнути функцію автозапуску, то програма буде запускатись разом з операці" 
				L"йною системою";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 13);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(137, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Автозапуск програми";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm1::checkBox1_CheckedChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(155, 185);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Встановити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SettingsForm1::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(186, 156);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(54, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SettingsForm1::textBox1_KeyPress);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 87);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 121);
			this->listBox1->TabIndex = 9;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SettingsForm1::listBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(155, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 53);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Встановлення гарячих клавіш для витегнення USB пристроїв";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(155, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Ctrl+";
			// 
			// SettingsForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(260, 266);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SettingsForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Налаштування";
			this->Load += gcnew System::EventHandler(this, &SettingsForm1::SettingsForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void SettingsForm1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 reg = Registry::CurrentUser->CreateSubKey("Software\\Microsoft\\Windows\\CurrentVersion\\Run");
			 if (reg->GetValue("Kursova") == nullptr)
			 {
				 checkBox1->Checked = false;
				 label1->ForeColor = Color::Gray;
			 }
			 else 
			 {
				 checkBox1->Checked = true;
				 label1->ForeColor = Color::Black;
			 }
			 while (ISUpdating)
			{
				Sleep(100);
			}
			ISUpdating = TRUE;
			 for each(KeyValuePair<DWORD, USB_Device^> ListBoxObject in HotKeyDict)
			 {
				 listBox1->Items->Add(ListBoxObject.Value->GetNameListForm());
			 }
			 ISUpdating = FALSE;

		 }	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (checkBox1->Checked == true)
			 {	
				 reg->SetValue( "Kursova", Application::ExecutablePath->ToString());	 
			 }
			 else
			 {
				 reg->DeleteValue("Kursova", false);
			 }
			 reg->Close();
			 Close();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 reg->Close();
			 Close();
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {			 	
			 if (checkBox1->Checked == true)
			 {	
				 label1->ForeColor = Color::Black;
			 }
			 else
			 {
				 label1->ForeColor = Color::Gray;
			 }
		 }
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {
			 if (e->KeyChar == (char)Keys::Back) 
				 return;
			 else if (Char::IsUpper(e->KeyChar) == true && textBox1->TextLength < 1) 
				 return;
			 else 
				{
				   e->Handled = true;
				}
		 }

private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 while (ISUpdating)
			{
				Sleep(100);
			}
			ISUpdating = TRUE;
			try
			{
			 for each(KeyValuePair<DWORD, USB_Device^> ListBoxObject in HotKeyDict)
			 {
				 if (listBox1->SelectedItem->ToString() == ListBoxObject.Value->GetNameListForm())
				 {
					 textBox1->Text = "";
					 if (ListBoxObject.Value->GetHotKeyWChar() != L'\0')
						textBox1->Text = Convert::ToString(ListBoxObject.Value->GetHotKeyWChar());
				 }
			 }
			 ISUpdating = FALSE;
			}
			catch(...)
			{
				ISUpdating = FALSE;
			}
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			while (ISUpdating)
			{
				Sleep(100);
			}
			ISUpdating = TRUE;
			try
			{
			 for each(KeyValuePair<DWORD, USB_Device^> ListBoxObject in HotKeyDict)
			 {
				 if (listBox1->SelectedItem->ToString() == ListBoxObject.Value->GetNameListForm())
				 {
					 ListBoxObject.Value->SetHotKey(textBox1->Text);
				 }
			 }
			 UpdateHotKeyLogSetg();
			}
			catch(...)
			{
				return;
			}
		 }

public: System::Void UpdateHotKeyLogSetg()
		{
			IO::StreamWriter ^сw;
			try
			{
				сw = gcnew StreamWriter(Application::StartupPath + "\\HotKeyLog.hkl", true);
			}
			catch(...)
			{
				сw->Close();
				ISUpdating = FALSE;
				return;
			}
			сw->Close();
			IO::StreamReader ^sr;
			try 
			{
				sr = gcnew StreamReader(Application::StartupPath + "\\HotKeyLog.hkl");
				UpdatingList = gcnew Dictionary<DWORD, CHAR>();
				String^ Line = "";
				using namespace Runtime::InteropServices;
				char* charLine;
				CHAR HK = '\0';
				DWORD Number = 0;
				const int k = 10;	//	Lenth of Serial Number of Volume 
			
				while (!sr->EndOfStream)
				{
					CHAR HK = '\0';
					DWORD Number = 0;
					Line = sr->ReadLine();
					charLine = (char*)(Marshal::StringToHGlobalAnsi(Line)).ToPointer();
					HK = charLine[strlen(charLine) - 1]; 
					if (HK == ' ')
						HK = '\0';
					for (int i = k - 1; i >= 0; i--)
					{
						Number += (charLine[i] - '0')*(DWORD)Math::Pow(10, k - 1 - i);
					}
					if (Number > 0 && !UpdatingList->ContainsKey(Number))
						UpdatingList->Add(Number, HK);
				}
			}
			catch(...)
			{
				sr->Close();
				ISUpdating = FALSE;
				return;
			}
			sr->Close();
			for each(KeyValuePair<DWORD, USB_Device^> ^UpdatingObject in HotKeyDict)
			{
				if (UpdatingList->ContainsKey(UpdatingObject->Key) && UpdatingObject->Value->GetHotKeyWChar() != L'\0')
				{	
					UpdatingList->Remove(UpdatingObject->Key);
					UpdatingList->Add(UpdatingObject->Key, UpdatingObject->Value->GetHotKeyWChar());
				}
				else if (!UpdatingList->ContainsKey(UpdatingObject->Key))
				{
					UpdatingList->Add(UpdatingObject->Value->GetSerialNumber(), UpdatingObject->Value->GetHotKeyWChar());
				}
				else if (UpdatingList->ContainsKey(UpdatingObject->Key) && UpdatingObject->Value->GetHotKeyWChar() == L'\0')
				{
					String^ HS = "";
					HS += Convert::ToString(WCHAR(UpdatingList[UpdatingObject->Key]));
					UpdatingObject->Value->SetHotKey(HS);
				}
			}
			IO::StreamWriter ^sw;
			try
			{
				sw = gcnew StreamWriter(Application::StartupPath + "\\HotKeyLog.hkl");
				for each(KeyValuePair<DWORD, CHAR> ^UpdatingObject in UpdatingList)
				{
					String^ HS = "";
					HS += Convert::ToString(WCHAR(UpdatingObject->Value));
					sw->WriteLine(UpdatingObject->Key + " " + HS);
				}
			}
			catch(...)
			{
				sw->Close();
				ISUpdating = FALSE;
				return;
			}
			sw->Close();
			ISUpdating = FALSE;
		}
};
}
