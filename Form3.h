#pragma once

#include "Form2.h"

namespace MATHX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCheckAnswer;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblCorrect;
	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Label^ lblOperation;
	private: System::Windows::Forms::Label^ lblNumber2;
	private: System::Windows::Forms::Label^ lblNumber1;
	private: System::Windows::Forms::RadioButton^ radioMult;
	private: System::Windows::Forms::RadioButton^ radioSub;
	private: System::Windows::Forms::RadioButton^ radioAdd;
	private: System::Windows::Forms::Label^ lblChoose;
	public: System::Windows::Forms::Label^ lblNameinForm;
	private:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->btnCheckAnswer = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblCorrect = (gcnew System::Windows::Forms::Label());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->lblOperation = (gcnew System::Windows::Forms::Label());
			this->lblNumber2 = (gcnew System::Windows::Forms::Label());
			this->lblNumber1 = (gcnew System::Windows::Forms::Label());
			this->radioMult = (gcnew System::Windows::Forms::RadioButton());
			this->radioSub = (gcnew System::Windows::Forms::RadioButton());
			this->radioAdd = (gcnew System::Windows::Forms::RadioButton());
			this->lblChoose = (gcnew System::Windows::Forms::Label());
			this->lblNameinForm = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCheckAnswer
			// 
			this->btnCheckAnswer->BackColor = System::Drawing::Color::MediumPurple;
			this->btnCheckAnswer->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCheckAnswer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCheckAnswer->Location = System::Drawing::Point(649, 261);
			this->btnCheckAnswer->Name = L"btnCheckAnswer";
			this->btnCheckAnswer->Size = System::Drawing::Size(92, 28);
			this->btnCheckAnswer->TabIndex = 25;
			this->btnCheckAnswer->Text = L"Check ";
			this->btnCheckAnswer->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(624, 405);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(226, 128);
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// lblCorrect
			// 
			this->lblCorrect->AutoSize = true;
			this->lblCorrect->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorrect->Location = System::Drawing::Point(797, 210);
			this->lblCorrect->Name = L"lblCorrect";
			this->lblCorrect->Size = System::Drawing::Size(53, 17);
			this->lblCorrect->TabIndex = 23;
			this->lblCorrect->Text = L"label1";
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(593, 209);
			this->txtResult->Name = L"txtResult";
			this->txtResult->Size = System::Drawing::Size(148, 23);
			this->txtResult->TabIndex = 22;
			// 
			// lblOperation
			// 
			this->lblOperation->AutoSize = true;
			this->lblOperation->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOperation->Location = System::Drawing::Point(404, 209);
			this->lblOperation->Name = L"lblOperation";
			this->lblOperation->Size = System::Drawing::Size(53, 17);
			this->lblOperation->TabIndex = 21;
			this->lblOperation->Text = L"label3";
			// 
			// lblNumber2
			// 
			this->lblNumber2->AutoSize = true;
			this->lblNumber2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumber2->Location = System::Drawing::Point(497, 209);
			this->lblNumber2->Name = L"lblNumber2";
			this->lblNumber2->Size = System::Drawing::Size(53, 17);
			this->lblNumber2->TabIndex = 20;
			this->lblNumber2->Text = L"label2";
			// 
			// lblNumber1
			// 
			this->lblNumber1->AutoSize = true;
			this->lblNumber1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumber1->Location = System::Drawing::Point(312, 209);
			this->lblNumber1->Name = L"lblNumber1";
			this->lblNumber1->Size = System::Drawing::Size(53, 17);
			this->lblNumber1->TabIndex = 19;
			this->lblNumber1->Text = L"label1";
			// 
			// radioMult
			// 
			this->radioMult->AutoSize = true;
			this->radioMult->Location = System::Drawing::Point(122, 301);
			this->radioMult->Name = L"radioMult";
			this->radioMult->Size = System::Drawing::Size(99, 19);
			this->radioMult->TabIndex = 18;
			this->radioMult->TabStop = true;
			this->radioMult->Text = L"Multiplication";
			this->radioMult->UseVisualStyleBackColor = true;
			// 
			// radioSub
			// 
			this->radioSub->AutoSize = true;
			this->radioSub->Location = System::Drawing::Point(122, 265);
			this->radioSub->Name = L"radioSub";
			this->radioSub->Size = System::Drawing::Size(86, 19);
			this->radioSub->TabIndex = 17;
			this->radioSub->TabStop = true;
			this->radioSub->Text = L"Subtraction";
			this->radioSub->UseVisualStyleBackColor = true;
			// 
			// radioAdd
			// 
			this->radioAdd->AutoSize = true;
			this->radioAdd->Location = System::Drawing::Point(122, 229);
			this->radioAdd->Name = L"radioAdd";
			this->radioAdd->Size = System::Drawing::Size(71, 19);
			this->radioAdd->TabIndex = 16;
			this->radioAdd->TabStop = true;
			this->radioAdd->Text = L"Addition";
			this->radioAdd->UseVisualStyleBackColor = true;
			// 
			// lblChoose
			// 
			this->lblChoose->AutoSize = true;
			this->lblChoose->Location = System::Drawing::Point(25, 190);
			this->lblChoose->Name = L"lblChoose";
			this->lblChoose->Size = System::Drawing::Size(104, 15);
			this->lblChoose->TabIndex = 15;
			this->lblChoose->Text = L"Choose operation:";
			// 
			// lblNameinForm
			// 
			this->lblNameinForm->AutoSize = true;
			this->lblNameinForm->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNameinForm->Location = System::Drawing::Point(25, 34);
			this->lblNameinForm->Name = L"lblNameinForm";
			this->lblNameinForm->Size = System::Drawing::Size(56, 18);
			this->lblNameinForm->TabIndex = 14;
			this->lblNameinForm->Text = L"label1";
			this->lblNameinForm->Click += gcnew System::EventHandler(this, &Form3::lblNameinForm_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(884, 861);
			this->Controls->Add(this->btnCheckAnswer);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblCorrect);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->lblOperation);
			this->Controls->Add(this->lblNumber2);
			this->Controls->Add(this->lblNumber1);
			this->Controls->Add(this->radioMult);
			this->Controls->Add(this->radioSub);
			this->Controls->Add(this->radioAdd);
			this->Controls->Add(this->lblChoose);
			this->Controls->Add(this->lblNameinForm);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MATH_X";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form3_Load(System::Object^ sender, System::EventArgs^ e) {

		

		//generating random numbers
		Random^ rnd = gcnew Random;



		lblNumber1->Text = rnd->Next(101).ToString();
		lblOperation->Text = "+";
		lblNumber2->Text = rnd->Next(101).ToString();

		
		

		

	}
private: System::Void lblNameinForm_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
