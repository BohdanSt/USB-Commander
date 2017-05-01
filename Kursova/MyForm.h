#pragma once
#include "SettingsForm1.h"
#include "AboutForm1.h"
#include "windows.h"
#include "USB_Class.h"
#include <vector>
#include <string> 
#include "SettingsForm1.h"

namespace Kursova {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;
	using namespace Microsoft::Win32;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  â³äêğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  çáåğåãòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  íàëàøòóâàííÿToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ôóíêö³¿ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïåğåãToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âèòÿãíóòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ³íôîğìàö³ÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğîÏğîãğàìóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  äîïîìîãàToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;

	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton7;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton8;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;

	private: 

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	public: 
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ğîçãîğíóòèToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  âèõ³äToolStripMenuItem2;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Timer^  timer2;

	public: Dictionary <DWORD , USB_Device^> ^USB_List;
	public: Dictionary <DWORD, CHAR> ^UpdatingList;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	public: 
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	public: BOOL ISUpdating;

	protected: 

	private:
		/// <summary>
		/// Òğåáóåòñÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Îáÿçàòåëüíûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà - íå èçìåíÿéòå
		/// ñîäåğæèìîå äàííîãî ìåòîäà ïğè ïîìîùè ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader(L"(none)"));
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader(L"(none)"));
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåãòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->íàëàøòóâàííÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôóíêö³¿ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïåğåãToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèòÿãíóòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->³íôîğìàö³ÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîïîìîãàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ğîçãîğíóòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->BackColor = System::Drawing::SystemColors::Window;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6});
			this->listView1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView1->Location = System::Drawing::Point(13, 58);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(260, 133);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Íàçâà ïğèñòğîş";
			this->columnHeader1->Width = 128;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Ì³ñòê³ñòü";
			this->columnHeader2->Width = 128;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Â³ëüíî íà äèñêó";
			this->columnHeader3->Width = 0;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Ôàéëîâà ñèñòåìà";
			this->columnHeader4->Width = 0;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Ñåğ³éíèé íîìåğ";
			this->columnHeader5->Width = 0;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Ãàğÿ÷à êëàâ³øà äëÿ âèòÿãíåííÿ";
			this->columnHeader6->Width = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ôàéëToolStripMenuItem, 
				this->ôóíêö³¿ToolStripMenuItem, this->³íôîğìàö³ÿToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->â³äêğèòèToolStripMenuItem, 
				this->çáåğåãòèToolStripMenuItem, this->toolStripSeparator2, this->íàëàøòóâàííÿToolStripMenuItem, this->toolStripSeparator1, this->âèõ³äToolStripMenuItem});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// â³äêğèòèToolStripMenuItem
			// 
			this->â³äêğèòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"â³äêğèòèToolStripMenuItem.Image")));
			this->â³äêğèòèToolStripMenuItem->Name = L"â³äêğèòèToolStripMenuItem";
			this->â³äêğèòèToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->â³äêğèòèToolStripMenuItem->Text = L"Â³äêğèòè";
			this->â³äêğèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::â³äêğèòèToolStripMenuItem_Click);
			// 
			// çáåğåãòèToolStripMenuItem
			// 
			this->çáåğåãòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"çáåğåãòèToolStripMenuItem.Image")));
			this->çáåğåãòèToolStripMenuItem->Name = L"çáåğåãòèToolStripMenuItem";
			this->çáåğåãòèToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->çáåğåãòèToolStripMenuItem->Text = L"Çáåğåãòè ÿê";
			this->çáåğåãòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çáåğåãòèToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(153, 6);
			// 
			// íàëàøòóâàííÿToolStripMenuItem
			// 
			this->íàëàøòóâàííÿToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"íàëàøòóâàííÿToolStripMenuItem.Image")));
			this->íàëàøòóâàííÿToolStripMenuItem->Name = L"íàëàøòóâàííÿToolStripMenuItem";
			this->íàëàøòóâàííÿToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->íàëàøòóâàííÿToolStripMenuItem->Text = L"Íàëàøòóâàííÿ";
			this->íàëàøòóâàííÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íàëàøòóâàííÿToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(153, 6);
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"âèõ³äToolStripMenuItem.Image")));
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->âèõ³äToolStripMenuItem->Text = L"Âèõ³ä";
			this->âèõ³äToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèõ³äToolStripMenuItem_Click);
			// 
			// ôóíêö³¿ToolStripMenuItem
			// 
			this->ôóíêö³¿ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ïåğåãToolStripMenuItem, 
				this->âèòÿãíóòToolStripMenuItem});
			this->ôóíêö³¿ToolStripMenuItem->Name = L"ôóíêö³¿ToolStripMenuItem";
			this->ôóíêö³¿ToolStripMenuItem->ShowShortcutKeys = false;
			this->ôóíêö³¿ToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->ôóíêö³¿ToolStripMenuItem->Text = L"Ôóíêö³¿";
			// 
			// ïåğåãToolStripMenuItem
			// 
			this->ïåğåãToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïåğåãToolStripMenuItem.Image")));
			this->ïåğåãToolStripMenuItem->Name = L"ïåğåãToolStripMenuItem";
			this->ïåğåãToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->ïåğåãToolStripMenuItem->Text = L"Ïåğåãëÿíóòè";
			this->ïåğåãToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïåğåãToolStripMenuItem_Click);
			// 
			// âèòÿãíóòToolStripMenuItem
			// 
			this->âèòÿãíóòToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"âèòÿãíóòToolStripMenuItem.Image")));
			this->âèòÿãíóòToolStripMenuItem->Name = L"âèòÿãíóòToolStripMenuItem";
			this->âèòÿãíóòToolStripMenuItem->ShowShortcutKeys = false;
			this->âèòÿãíóòToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->âèòÿãíóòToolStripMenuItem->Text = L"Âèòÿãíóòè";
			this->âèòÿãíóòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèòÿãíóòToolStripMenuItem_Click);
			// 
			// ³íôîğìàö³ÿToolStripMenuItem
			// 
			this->³íôîğìàö³ÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ïğîÏğîãğàìóToolStripMenuItem, 
				this->äîïîìîãàToolStripMenuItem});
			this->³íôîğìàö³ÿToolStripMenuItem->Name = L"³íôîğìàö³ÿToolStripMenuItem";
			this->³íôîğìàö³ÿToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->³íôîğìàö³ÿToolStripMenuItem->Text = L"²íôîğìàö³ÿ";
			// 
			// ïğîÏğîãğàìóToolStripMenuItem
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïğîÏğîãğàìóToolStripMenuItem.Image")));
			this->ïğîÏğîãğàìóToolStripMenuItem->Name = L"ïğîÏğîãğàìóToolStripMenuItem";
			this->ïğîÏğîãğàìóToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->ïğîÏğîãğàìóToolStripMenuItem->Text = L"Ïğî ïğîãğàìó";
			this->ïğîÏğîãğàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğîÏğîãğàìóToolStripMenuItem_Click);
			// 
			// äîïîìîãàToolStripMenuItem
			// 
			this->äîïîìîãàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"äîïîìîãàToolStripMenuItem.Image")));
			this->äîïîìîãàToolStripMenuItem->Name = L"äîïîìîãàToolStripMenuItem";
			this->äîïîìîãàToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->äîïîìîãàToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->äîïîìîãàToolStripMenuItem->Text = L"Äîïîìîãà";
			this->äîïîìîãàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::äîïîìîãàToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripProgressBar1, 
				this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 239);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(284, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(92, 17);
			this->toolStripStatusLabel1->Text = L"Ñòàí ïğèñòğîş";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(13, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ïåğåãëÿíóòè";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(193, 205);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Âèòÿãòè";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->toolStripButton1, 
				this->toolStripButton2, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6, this->toolStripButton7, this->toolStripButton8});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(284, 31);
			this->toolStrip1->TabIndex = 5;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(28, 28);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->ToolTipText = L"Â³äêğèòè";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(28, 28);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->ToolTipText = L"Çáåğåãòè ÿê";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(28, 28);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->ToolTipText = L"Íàëàøòóâàííÿ";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(28, 28);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->ToolTipText = L"Ïåğåãëÿíóòè";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(28, 28);
			this->toolStripButton6->Text = L"toolStripButton6";
			this->toolStripButton6->ToolTipText = L"Âèòÿãòè";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton6_Click);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(28, 28);
			this->toolStripButton7->Text = L"toolStripButton7";
			this->toolStripButton7->ToolTipText = L"Ïğî ïğîãğàìó";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton7_Click);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(28, 28);
			this->toolStripButton8->Text = L"toolStripButton8";
			this->toolStripButton8->ToolTipText = L"Äîïîìîãà";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton8_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->ContextMenuStrip = this->contextMenuStrip1;
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"USB Commander";
			this->notifyIcon1->Visible = true;
			this->notifyIcon1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::notifyIcon1_MouseDoubleClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ğîçãîğíóòèToolStripMenuItem, 
				this->âèõ³äToolStripMenuItem2});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(138, 48);
			// 
			// ğîçãîğíóòèToolStripMenuItem
			// 
			this->ğîçãîğíóòèToolStripMenuItem->Name = L"ğîçãîğíóòèToolStripMenuItem";
			this->ğîçãîğíóòèToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->ğîçãîğíóòèToolStripMenuItem->Text = L"Ğîçãîğíóòè";
			this->ğîçãîğíóòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ğîçãîğíóòèToolStripMenuItem_Click);
			// 
			// âèõ³äToolStripMenuItem2
			// 
			this->âèõ³äToolStripMenuItem2->Name = L"âèõ³äToolStripMenuItem2";
			this->âèõ³äToolStripMenuItem2->Size = System::Drawing::Size(137, 22);
			this->âèõ³äToolStripMenuItem2->Text = L"Âèõ³ä";
			this->âèõ³äToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::âèõ³äToolStripMenuItem2_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 3000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(300, 300);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"USB Commander";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
			{

				USB_List = gcnew Dictionary <DWORD, USB_Device^>();
	
				notifyIcon1->Visible = false;
				toolStripProgressBar1->Visible = false;
				toolStripStatusLabel1->Visible = false;

				ProgressBarF("Ïîøóê ïğèñòğî¿â");

				ISUpdating = FALSE;

				Sleep(2000);

				timer1->Start();
				timer2->Start(); 
			}

private: System::Void OpenF(void )
{
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
	{
		if ( openFileDialog1->FileName != "" )
		{
			Process^ notepad = gcnew Process();
			ProcessStartInfo^ info = gcnew ProcessStartInfo("notepad.exe", openFileDialog1->FileName);
			try
			{
				notepad->Start(info);
			}
			catch (...)
			{
				return;
			}
		}
	}
}
private: System::Void SaveF(void )
{
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;

	saveFileDialog1->InitialDirectory = "c:\\";
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;

	if ( saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
	{
		if ( saveFileDialog1->FileName != "" )
		{
            IO::StreamWriter ^sw;
			try 
			{
				sw = gcnew StreamWriter(saveFileDialog1->FileName);
				sw->WriteLine(DateTime::Now);

				while (ISUpdating)
				{
					Sleep(100);
				}
				ISUpdating = TRUE;
				for each (KeyValuePair<DWORD, USB_Device^> SaverObject in USB_List)
				{
					SaverObject.Value->SaveFile(sw);
				}
			}
			catch(...)
			{
				ISUpdating = FALSE;
				sw->Close();
			}
			ISUpdating = FALSE;
			sw->Close();
		}
	}
}
private: System::Void RemoveFunction()
		{
			 try
			 {
				 while (ISUpdating)
				 {
					Sleep(100);
				 }
				 ISUpdating = TRUE;
				 DWORD RemoveKey[MAX_PATH] = {0};
				 for (int i = 0; i < listView1->SelectedItems->Count; i++)
				 {
					String^ PerName = listView1->SelectedItems[i]->Text;
					String^ sep = ":";
					for (int j = PerName->Length - 1; j >= 0; j--)
						if (PerName[j] == sep[0])
						{
							PerName = Convert::ToString(PerName[j - 1]);
							break;
						}
					 try
					 {
						 for each (KeyValuePair<DWORD, USB_Device^> EjectorObject in USB_List)
						 {
							 if (EjectorObject.Value->GetNameCharFormat() == PerName)
							 {
								 if(EjectorObject.Value->VolumeEject(PerName))
									{
										notifyIcon1->BalloonTipText = "Ïğèñòğ³é " + listView1->SelectedItems[i]->Text + " ìîæå áóòè áåçïå÷íî âèòÿãíóòèé";
										notifyIcon1->Visible = true;
										notifyIcon1->ShowBalloonTip(2000);
										RemoveKey[i] = EjectorObject.Key;
										listView1->SelectedItems[i]->Remove();
									}
								 else
								 {
									 notifyIcon1->BalloonTipText = "Áåçïå÷íå âèòÿãíåííÿ ïğèñòğîş " + listView1->SelectedItems[i]->Text + " íåìîæëèâå";
									 notifyIcon1->Visible = true;
									 notifyIcon1->ShowBalloonTip(2000);
								 }
							 }
						 }
					 }
					 catch(...)
					 {
						notifyIcon1->BalloonTipText = "Áåçïå÷íå âèòÿãíåííÿ ïğèñòğîş " + listView1->SelectedItems[i]->Text + " íåìîæëèâå";
						notifyIcon1->Visible = true;
						notifyIcon1->ShowBalloonTip(2000);
					 }
					 USB_List->Remove(RemoveKey[i]);
				 }
				 ISUpdating = FALSE;
			 }
			 catch(...)
			 {
				ISUpdating = FALSE;
				return;
			 }
		}
private: System::Void ViewFunction()
		{
			while (ISUpdating)
				{
					Sleep(100);
				}
			ISUpdating = TRUE;
			for (int i = 0; i < listView1->SelectedItems->Count; i++)
			 {
				String^ PerName = listView1->SelectedItems[i]->Text;
				String^ sep = ":";
				for (int i = PerName->Length - 1; i >= 0; i--)
					if (PerName[i] == sep[0])
					{
						PerName = Convert::ToString(PerName[i - 1]) + Convert::ToString(PerName[i]);
						break;
					}
				Process^ explorer = gcnew Process();
				ProcessStartInfo^ info = gcnew ProcessStartInfo("explorer.exe", PerName);
				try
				{
					explorer->Start(info);
				}
				catch(...)
				{
				}
			 } 
			ISUpdating = FALSE;
		}
private: System::Void ProgressBarF(String ^h)
		{
			toolStripProgressBar1->Visible = true;
			toolStripStatusLabel1->Visible = true;
			toolStripStatusLabel1->Text = h;
			toolStripProgressBar1->Value = toolStripProgressBar1->Minimum;
		}

private: System::Void âèõ³äToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Start();
			 ProgressBarF("Âèõ³ä ç ïğîãğàìè"); 
			 for each(KeyValuePair<DWORD, USB_Device^> CloseObject in USB_List)
			 {
					CloseObject.Value->Close();
			 }
			 Application::Exit();
		 }
private: System::Void âèõ³äToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 for each(KeyValuePair<DWORD, USB_Device^> CloseObject in USB_List)
			 {
				CloseObject.Value->Close();
			 }
			 Application::Exit();
		 }
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
		 {
			for each(KeyValuePair<DWORD, USB_Device^> CloseObject in USB_List)
			{
				CloseObject.Value->Close();
			}
		 }


private: System::Void íàëàøòóâàííÿToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Kursova::SettingsForm1 ^SetngForm = gcnew SettingsForm1(USB_List, ISUpdating);
			 timer1->Start();
			 ProgressBarF("Íàëàøòóâàííÿ"); 
			 SetngForm->ShowDialog();
		 }
private: System::Void toolStripButton4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Kursova::SettingsForm1 ^SetngForm = gcnew SettingsForm1(USB_List, ISUpdating);
			 timer1->Start();
			 ProgressBarF("Íàëàøòóâàííÿ"); 
			 SetngForm->ShowDialog();
		 }
private: System::Void âèõ³äToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Kursova::SettingsForm1 ^SetngForm = gcnew SettingsForm1(USB_List, ISUpdating);
			 SetngForm->ShowDialog();
		 }


private: System::Void ïğîÏğîãğàìóToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Kursova::AboutForm1 ^AbForm = gcnew AboutForm1;
			 timer1->Start();
			 ProgressBarF("Ïğî ïğîãğàìó"); 
			 AbForm->ShowDialog();
		 }
private: System::Void toolStripButton7_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Kursova::AboutForm1 ^AbForm = gcnew AboutForm1;
			 timer1->Start();
			 ProgressBarF("Ïğî ïğîãğàìó"); 
			 AbForm->ShowDialog();
		 }


private: System::Void â³äêğèòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Start();
			 ProgressBarF("Â³äêğèòòÿ ôàéëó");  
			 OpenF();
		 }
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {			  
			 timer1->Start();
			 ProgressBarF("Â³äêğèòòÿ ôàéëó"); 
			 OpenF();
		 }



private: System::Void çáåğåãòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Start();
			 ProgressBarF("Çáåğåæåííÿ äàíèõ");
			 SaveF();
		 }
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Start();
			 ProgressBarF("Çáåğåæåííÿ äàíèõ");
			 SaveF();
		 }


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Start();
			 ProgressBarF("Ïåğåãëÿä ïğèñòğîş");
			 ViewFunction();
		 }
private: System::Void toolStripButton5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Start();
			 ProgressBarF("Ïåğåãëÿä ïğèñòğîş");
			 ViewFunction();
		 }
private: System::Void ïåğåãToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Start();
			 ProgressBarF("Ïåğåãëÿä ïğèñòğîş");
			 ViewFunction();
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Start();
			 ProgressBarF("Âèòÿãíåííÿ ïğèñòğîş");
			 RemoveFunction();
		 }
private: System::Void toolStripButton6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Start();
			 ProgressBarF("Âèòÿãíåííÿ ïğèñòğîş"); 
			 RemoveFunction();
		 }
private: System::Void âèòÿãíóòToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Start();
			 ProgressBarF("Âèòÿãíåííÿ ïğèñòğîş"); 
			 RemoveFunction();
		 }


private: void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {

			if ( toolStripProgressBar1->Value != toolStripProgressBar1->Maximum)
			{
				if(toolStripStatusLabel1->Text == "Ïîøóê ïğèñòğî¿â")
					toolStripProgressBar1->Increment(5);
				else 
					toolStripProgressBar1->Increment(50);
			}	
			else 
			{
				if (toolStripStatusLabel1->Text == "Ïîøóê ïğèñòğî¿â")
					timer1->Stop();
				else 
				{
					toolStripProgressBar1->Visible = false;
					toolStripStatusLabel1->Visible = false;
					timer1->Stop();
				}
			}
		 }

private: System::Void notifyIcon1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
		 {
			this->Show();
            notifyIcon1->Visible = false;
			WindowState = FormWindowState::Normal;
		 }
	
private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (WindowState == FormWindowState::Minimized)
			 {
				this->Hide();
				notifyIcon1->Visible = true;
			 }
			 else if (WindowState == FormWindowState::Maximized)
			 {
				 listView1->Columns[0]->Width = 128; 
				 listView1->Columns[1]->Width = 128;
				 listView1->Columns[2]->Width = 128; 
				 listView1->Columns[3]->Width = 128;
				 listView1->Columns[4]->Width = 128; 
				 listView1->Columns[5]->Width = 178;
			 }
			 else if (WindowState == FormWindowState::Normal)
			 {
				 listView1->Columns[0]->Width = 128; 
				 listView1->Columns[1]->Width = 128;
				 listView1->Columns[2]->Width = 0; 
				 listView1->Columns[3]->Width = 0;
				 listView1->Columns[4]->Width = 0; 
				 listView1->Columns[5]->Width = 0;
			 }
		 }
private: System::Void ğîçãîğíóòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (WindowState == FormWindowState::Minimized)
			 {
				this->Show();
				notifyIcon1->Visible = false;
				WindowState = FormWindowState::Normal;
			 }
		 }

private: System::Void ParseMultiStrings( IN LPCTSTR szString, OUT std::vector< LPCTSTR > &vStrings, IN TCHAR chDelim)
{
    LPCTSTR sz = szString;
	chDelim = CHAR( '\0');
    for( ;
        szString && *szString || ( chDelim == CHAR( '\0') && *szString == chDelim && *( szString + 1) != chDelim);
        szString++
        )
    {
        if( *szString == chDelim)
        {
            vStrings.push_back( sz);
            sz = NULL;
        }
        else if( !sz) sz = szString;
    }
    if( sz) vStrings.push_back( sz);
}

private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			  while (ISUpdating)
				{
					Sleep(100);
				}
			  try
			  {
				  ISUpdating = TRUE;
				  DWORD RemoveKey[MAX_PATH] = {0};
				  int p = 0;
				  int q = 0;
				  for each (KeyValuePair<DWORD, USB_Device^> EjectorObject in USB_List)
					{
						 int k = EjectorObject.Value->GetHotKey();
						 if(e->Control && e->KeyValue == k)
						 {
							 try
							 {
								 for (q = 0; q < listView1->Items->Count; q++)
								 {
									String^ PerName = listView1->Items[q]->Text;
									String^ sep = ":";
									for (int i = PerName->Length - 1; i >= 0; i--)
									{	
										if (PerName[i] == sep[0])
										{
											PerName = Convert::ToString(PerName[i - 1]);
											break;
										}
									}
									if (PerName == EjectorObject.Value->GetNameCharFormat())
										break;
								 }
								if(EjectorObject.Value->VolumeEject(EjectorObject.Value->GetNameCharFormat()))
								{
									notifyIcon1->BalloonTipText = "Ïğèñòğ³é " + listView1->Items[q]->Text + " ìîæå áóòè áåçïå÷íî âèòÿãíóòèé";
									notifyIcon1->Visible = true;
									notifyIcon1->ShowBalloonTip(2000);
									RemoveKey[p++] = EjectorObject.Key;
									listView1->Items[q]->Remove();
								}
								else
								{
									notifyIcon1->BalloonTipText = "Áåçïå÷íå âèòÿãíåííÿ ïğèñòğîş " + listView1->Items[q]->Text + " íåìîæëèâå";
									notifyIcon1->Visible = true;
									notifyIcon1->ShowBalloonTip(2000);
								}
							 }
							 catch(...)
							 {
								notifyIcon1->BalloonTipText = "Áåçïå÷íå âèòÿãíåííÿ ïğèñòğîş " + listView1->Items[q]->Text + " íåìîæëèâå";
								notifyIcon1->Visible = true;
								notifyIcon1->ShowBalloonTip(2000);
							 }
						 }
					 }
				  for (int i = 0; i < p; i++)
					 USB_List->Remove(RemoveKey[i]);
				  ISUpdating = FALSE;
			  }
			  catch(...)
			  {
				ISUpdating = FALSE;
			  }
		 }


private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
				while (ISUpdating)
				{
					Sleep(100);
				}
				ISUpdating = TRUE;
				
				try
				{
					for each(KeyValuePair<DWORD, USB_Device^> CloseObject in USB_List)
					{
						CloseObject.Value->Close();
					}
				
					USB_List->Clear();

					System::Char szDrives[256] = {0};
					std::vector< LPCTSTR > vDrives;
					std::vector< LPCTSTR>::iterator it;
					String^ DriveStr;
					std::wstring DrS;
					HANDLE hDevice; 
				

					if (GetLogicalDriveStrings( sizeof(szDrives), szDrives ) )
					{					
						ParseMultiStrings( szDrives, vDrives, '\0');
						for (unsigned int i = 0; i < vDrives.size(); i++)
						{	
							if(GetDriveType(vDrives[i]) == DRIVE_REMOVABLE)
							{

								try
								{
									DrS = L"\\\\.\\";
									DrS += vDrives[i][0];
									DrS += vDrives[i][1];

									hDevice = CreateFile(DrS.c_str(), GENERIC_READ|GENERIC_WRITE, FILE_SHARE_READ|FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
									if (hDevice != INVALID_HANDLE_VALUE)
									{
								
										DriveStr = "";
										for (int j = 0; vDrives[i][j] != ':'; j++)
											DriveStr += Convert::ToString(vDrives[i][j]);
								
										wchar_t NameBuffer[MAX_PATH] = {0};
										wchar_t SysNameBuffer[MAX_PATH] = {0};
										wchar_t Namr[MAX_PATH] = {0};
										DWORD VSNumber;
										DWORD MCLength;
										DWORD FileSF;

										GetVolumeInformationByHandleW(hDevice, NameBuffer, 256, &VSNumber, &MCLength, &FileSF, SysNameBuffer, sizeof(SysNameBuffer));
								
										unsigned long long FreeAvSize;
										unsigned long long TotalSize;
										unsigned long long FreeSize;
										GetDiskFreeSpaceEx(vDrives[i], (PULARGE_INTEGER)&FreeAvSize, (PULARGE_INTEGER)&TotalSize, (PULARGE_INTEGER)&FreeSize);
										FreeAvSize  = (FreeAvSize / 1024) / 1024;
										TotalSize  = (TotalSize / 1024) / 1024;
										FreeSize  = (FreeSize / 1024) / 1024;
								
										String^ SysName = "";
										for (int j = 0; SysNameBuffer[j] != '\0'; j++)
											SysName += Convert::ToString(SysNameBuffer[j]);
										String^ Dev_Name = "";
										for (int j = 0; NameBuffer[j] != '\0'; j++)
											Dev_Name += Convert::ToString(NameBuffer[j]);
										if (Dev_Name == "")
											Dev_Name = "Çí³ìíèé äèñê";

										CHAR HK = '\0';

										if (SysName == "RAW" || USB_List->ContainsKey(VSNumber))
										{
											CloseHandle(hDevice);
										}
										else 
										{	
											USB_List->Add(VSNumber, %USB_Device(vDrives[i], DrS.c_str(), DriveStr, hDevice, Dev_Name, SysName, VSNumber, MCLength, HK, FreeAvSize, TotalSize));
										}
									}
								}
								catch(Exception^ error)
								{
									ISUpdating = FALSE;
									throw gcnew Exception(error->Message);
								}
							}
						}
					}
					ISUpdating = FALSE;
					UpdateHotKeyLog();
					UpdateMainList();
					toolStripProgressBar1->Visible = false;
					toolStripStatusLabel1->Visible = false;
				}
				catch(...)
				{
					toolStripProgressBar1->Visible = false;
					toolStripStatusLabel1->Visible = false;
					ISUpdating = FALSE;
				}
		 }
public: System::Void UpdateHotKeyLog()
		{
			IO::StreamWriter ^cw;
			try
			{
				cw = gcnew StreamWriter(Application::StartupPath + "\\HotKeyLog.hkl", true);
			}
			catch(...)
			{
				cw->Close();
				ISUpdating = FALSE;
				return;
			}
			cw->Close();
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
					if (Line->Length > 10)
					{
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
			}
			catch(...)
			{
				sr->Close();
				ISUpdating = FALSE;
				return;
			}
			sr->Close();
			for each(KeyValuePair<DWORD, USB_Device^> ^UpdatingObject in USB_List)
			{
				try
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
				catch(...)
				{
					continue;
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

private: System::Void UpdateMainList()
		 {
			 unsigned int TotalSize = 0;
			 unsigned int FreeSize = 0;
			 unsigned int SerialNumber = 0;
			 String^ Dev_Name = "";
			 String^ Sys_Name = "";
			 WCHAR HotKey = L'\0';
			 List<String^> ^DeleteList = gcnew List<String^>();
			 BOOL NeedLoad = TRUE;

			 for each(KeyValuePair<DWORD, USB_Device^> ^UpdatingObject in USB_List)
			 {

				Dev_Name = UpdatingObject->Value->GetNameListForm();
				TotalSize = UpdatingObject->Value->GetTotalSize();
				FreeSize = UpdatingObject->Value->GetFreeSize();
				Sys_Name = UpdatingObject->Value->GetSysName();
				SerialNumber = (unsigned int)UpdatingObject->Value->GetSerialNumber();
				HotKey = UpdatingObject->Value->GetHotKeyWChar();
				NeedLoad = TRUE;

				for (int i = 0; i < listView1->Items->Count; i++)
				{
					if (Dev_Name == listView1->Items[i]->Text)
					{
						NeedLoad = FALSE;
						if (HotKey != L'\0')
							listView1->Items[i]->SubItems[5]->Text = Convert::ToString("Ctrl + " + HotKey);
					}
				}

				if (NeedLoad)
				{
					try
					{
						listView1->Items->Add(Dev_Name);
						
						if (TotalSize / 1024 >= 10)
							listView1->Items[listView1->Items->Count - 1]->SubItems->Add(Convert::ToString(TotalSize/1024) + " GB");
						else if (TotalSize > 1024)
							listView1->Items[listView1->Items->Count - 1]->SubItems->Add(Convert::ToString( (TotalSize/1024) + "," + ((TotalSize*1000/1024)%1000)/10 + " GB"));
						else 
							listView1->Items[listView1->Items->Count - 1]->SubItems->Add(Convert::ToString(TotalSize) + " MB");

						if (FreeSize / 1024 >= 10)
							listView1->Items[listView1->Items->Count - 1]->SubItems->Add(Convert::ToString(FreeSize/1024) + " GB");
						else if (FreeSize > 1024)
							listView1->Items[listView1->Items->Count - 1]->SubItems->Add(Convert::ToString( (FreeSize/1024) + "," + ((FreeSize*1000/1024)%1000)/10 + " GB"));
						else 
							listView1->Items[listView1->Items->Count - 1]->SubItems->Add(Convert::ToString(FreeSize) + " MB");

						listView1->Items[listView1->Items->Count - 1]->SubItems->Add(Sys_Name);

						listView1->Items[listView1->Items->Count - 1]->SubItems->Add(Convert::ToString(SerialNumber));
						if (HotKey != L'\0')
						listView1->Items[listView1->Items->Count - 1]->SubItems->Add(Convert::ToString("Ctrl + " + HotKey));
						else listView1->Items[listView1->Items->Count - 1]->SubItems->Add("");
					}
					catch(...)
					{
						continue;
					}

				}

				DeleteList->Add(Dev_Name);
			 }
			 for (int i = 0; i < listView1->Items->Count; i++)
			 {
				 if (!DeleteList->Contains(listView1->Items[i]->Text))
					 listView1->Items[i]->Remove();
			 }
		 }

private: System::Void toolStripButton8_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Help::ShowHelp(this, Application::StartupPath + "\\USB_Commander(Helper).chm");
		 }
private: System::Void äîïîìîãàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Help::ShowHelp(this, Application::StartupPath + "\\USB_Commander(Helper).chm");
		 }
};

}
