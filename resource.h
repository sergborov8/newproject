#pragma once

namespace Win32Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for resource
	/// </summary>
	public ref class resource : public System::Windows::Forms::Form
	{
	public:
		resource(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~resource()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  IDC_BUTTON1;
	private: System::Windows::Forms::Button^  IDC_BUTTON2;
	private: System::Windows::Forms::Button^  IDC_BUTTON3;
	private: System::Windows::Forms::ListBox^  IDC_LIST1;
	private: System::Windows::Forms::TextBox^  IDC_EDIT1;
	protected: 

	protected: 




	private: System::Windows::Forms::TextBox^  IDC_EDIT3;
	private: System::Windows::Forms::TextBox^  IDC_EDIT2;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->IDC_BUTTON1 = (gcnew System::Windows::Forms::Button());
			this->IDC_BUTTON2 = (gcnew System::Windows::Forms::Button());
			this->IDC_BUTTON3 = (gcnew System::Windows::Forms::Button());
			this->IDC_LIST1 = (gcnew System::Windows::Forms::ListBox());
			this->IDC_EDIT1 = (gcnew System::Windows::Forms::TextBox());
			this->IDC_EDIT3 = (gcnew System::Windows::Forms::TextBox());
			this->IDC_EDIT2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// IDC_BUTTON1
			// 
			this->IDC_BUTTON1->Location = System::Drawing::Point(296, 49);
			this->IDC_BUTTON1->Name = L"IDC_BUTTON1";
			this->IDC_BUTTON1->Size = System::Drawing::Size(75, 23);
			this->IDC_BUTTON1->TabIndex = 0;
			this->IDC_BUTTON1->Text = L"плюс";
			this->IDC_BUTTON1->UseVisualStyleBackColor = true;
			// 
			// IDC_BUTTON2
			// 
			this->IDC_BUTTON2->Location = System::Drawing::Point(452, 48);
			this->IDC_BUTTON2->Name = L"IDC_BUTTON2";
			this->IDC_BUTTON2->Size = System::Drawing::Size(75, 23);
			this->IDC_BUTTON2->TabIndex = 1;
			this->IDC_BUTTON2->Text = L"минус";
			this->IDC_BUTTON2->UseVisualStyleBackColor = true;
			// 
			// IDC_BUTTON3
			// 
			this->IDC_BUTTON3->Location = System::Drawing::Point(433, 334);
			this->IDC_BUTTON3->Name = L"IDC_BUTTON3";
			this->IDC_BUTTON3->Size = System::Drawing::Size(75, 23);
			this->IDC_BUTTON3->TabIndex = 2;
			this->IDC_BUTTON3->Text = L"очистить";
			this->IDC_BUTTON3->UseVisualStyleBackColor = true;
			// 
			// IDC_LIST1
			// 
			this->IDC_LIST1->FormattingEnabled = true;
			this->IDC_LIST1->Location = System::Drawing::Point(411, 115);
			this->IDC_LIST1->Name = L"IDC_LIST1";
			this->IDC_LIST1->Size = System::Drawing::Size(172, 199);
			this->IDC_LIST1->TabIndex = 3;
			// 
			// IDC_EDIT1
			// 
			this->IDC_EDIT1->Location = System::Drawing::Point(158, 99);
			this->IDC_EDIT1->Name = L"IDC_EDIT1";
			this->IDC_EDIT1->Size = System::Drawing::Size(100, 20);
			this->IDC_EDIT1->TabIndex = 4;
			// 
			// IDC_EDIT3
			// 
			this->IDC_EDIT3->Location = System::Drawing::Point(158, 217);
			this->IDC_EDIT3->Name = L"IDC_EDIT3";
			this->IDC_EDIT3->Size = System::Drawing::Size(100, 20);
			this->IDC_EDIT3->TabIndex = 5;
			// 
			// IDC_EDIT2
			// 
			this->IDC_EDIT2->Location = System::Drawing::Point(158, 150);
			this->IDC_EDIT2->Name = L"IDC_EDIT2";
			this->IDC_EDIT2->Size = System::Drawing::Size(100, 20);
			this->IDC_EDIT2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"первое число";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"второе число";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"результат";
			// 
			// resource
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 419);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->IDC_EDIT2);
			this->Controls->Add(this->IDC_EDIT3);
			this->Controls->Add(this->IDC_EDIT1);
			this->Controls->Add(this->IDC_LIST1);
			this->Controls->Add(this->IDC_BUTTON3);
			this->Controls->Add(this->IDC_BUTTON2);
			this->Controls->Add(this->IDC_BUTTON1);
			this->Name = L"resource";
			this->Text = L"resource";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
