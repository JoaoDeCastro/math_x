#pragma once


#include "HelpForm.h"


namespace MATHX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	
		
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ btnCheckAnswer;


	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Label^ lblOperation;
	private: System::Windows::Forms::Label^ lblNumber2;
	private: System::Windows::Forms::Label^ lblNumber1;



	private: System::Windows::Forms::Label^ lblChoose;

	private: System::Windows::Forms::Button^ btnGenerate;
	private: System::Windows::Forms::ComboBox^ comboBoxOperations;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Label^ lblLevel;
	private: System::Windows::Forms::Label^ lblSaveDifficulty;
	private: System::Windows::Forms::Label^ lblSaveOperation;
	private: System::Windows::Forms::ListBox^ Results;
	private: System::Windows::Forms::Label^ lblAnswer;





	public:
	private:

	protected:







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		//Adding background image
		PictureBox^ pctBox;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ viewHelpToolStripMenuItem;












		//Adding picture interaction for answer
		PictureBox^ pctBoxAnswer;
		
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCheckAnswer = (gcnew System::Windows::Forms::Button());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->lblOperation = (gcnew System::Windows::Forms::Label());
			this->lblNumber2 = (gcnew System::Windows::Forms::Label());
			this->lblNumber1 = (gcnew System::Windows::Forms::Label());
			this->lblChoose = (gcnew System::Windows::Forms::Label());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->comboBoxOperations = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->lblLevel = (gcnew System::Windows::Forms::Label());
			this->lblSaveDifficulty = (gcnew System::Windows::Forms::Label());
			this->lblSaveOperation = (gcnew System::Windows::Forms::Label());
			this->Results = (gcnew System::Windows::Forms::ListBox());
			this->lblAnswer = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->closeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewHelpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(3, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(900, 900);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			this->pictureBox1->BackgroundImageChanged += gcnew System::EventHandler(this, &Form2::pictureBox1_BackgroundImageChanged);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form2::timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(885, 751);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// btnCheckAnswer
			// 
			this->btnCheckAnswer->BackColor = System::Drawing::Color::MediumPurple;
			this->btnCheckAnswer->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCheckAnswer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCheckAnswer->Location = System::Drawing::Point(587, 386);
			this->btnCheckAnswer->Name = L"btnCheckAnswer";
			this->btnCheckAnswer->Size = System::Drawing::Size(148, 28);
			this->btnCheckAnswer->TabIndex = 25;
			this->btnCheckAnswer->Text = L"Check ";
			this->btnCheckAnswer->UseVisualStyleBackColor = false;
			this->btnCheckAnswer->Click += gcnew System::EventHandler(this, &Form2::btnCheckAnswer_Click);
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(587, 339);
			this->txtResult->Name = L"txtResult";
			this->txtResult->Size = System::Drawing::Size(148, 23);
			this->txtResult->TabIndex = 22;
			// 
			// lblOperation
			// 
			this->lblOperation->AutoSize = true;
			this->lblOperation->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOperation->Location = System::Drawing::Point(408, 340);
			this->lblOperation->Name = L"lblOperation";
			this->lblOperation->Size = System::Drawing::Size(0, 17);
			this->lblOperation->TabIndex = 21;
			// 
			// lblNumber2
			// 
			this->lblNumber2->AutoSize = true;
			this->lblNumber2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumber2->Location = System::Drawing::Point(502, 340);
			this->lblNumber2->Name = L"lblNumber2";
			this->lblNumber2->Size = System::Drawing::Size(0, 17);
			this->lblNumber2->TabIndex = 20;
			// 
			// lblNumber1
			// 
			this->lblNumber1->AutoSize = true;
			this->lblNumber1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumber1->Location = System::Drawing::Point(317, 340);
			this->lblNumber1->Name = L"lblNumber1";
			this->lblNumber1->Size = System::Drawing::Size(0, 17);
			this->lblNumber1->TabIndex = 19;
			// 
			// lblChoose
			// 
			this->lblChoose->AutoSize = true;
			this->lblChoose->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblChoose->Location = System::Drawing::Point(30, 337);
			this->lblChoose->Name = L"lblChoose";
			this->lblChoose->Size = System::Drawing::Size(132, 20);
			this->lblChoose->TabIndex = 15;
			this->lblChoose->Text = L"Choose Operation:";
			// 
			// btnGenerate
			// 
			this->btnGenerate->BackColor = System::Drawing::Color::MediumPurple;
			this->btnGenerate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnGenerate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerate->Location = System::Drawing::Point(39, 418);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(121, 28);
			this->btnGenerate->TabIndex = 26;
			this->btnGenerate->Text = L"Generate";
			this->btnGenerate->UseVisualStyleBackColor = false;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &Form2::btnGenerate_Click);
			// 
			// comboBoxOperations
			// 
			this->comboBoxOperations->FormattingEnabled = true;
			this->comboBoxOperations->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Addition", L"Subtraction", L"Multiplication" });
			this->comboBoxOperations->Location = System::Drawing::Point(39, 376);
			this->comboBoxOperations->Name = L"comboBoxOperations";
			this->comboBoxOperations->Size = System::Drawing::Size(121, 23);
			this->comboBoxOperations->TabIndex = 30;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Easy", L"Medium", L"Hard" });
			this->comboBox1->Location = System::Drawing::Point(44, 192);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 23);
			this->comboBox1->TabIndex = 33;
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::MediumPurple;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(44, 234);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(121, 28);
			this->btnSave->TabIndex = 32;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &Form2::btnSave_Click);
			// 
			// lblLevel
			// 
			this->lblLevel->AutoSize = true;
			this->lblLevel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLevel->Location = System::Drawing::Point(35, 153);
			this->lblLevel->Name = L"lblLevel";
			this->lblLevel->Size = System::Drawing::Size(122, 20);
			this->lblLevel->TabIndex = 31;
			this->lblLevel->Text = L"Choose Difficulty";
			// 
			// lblSaveDifficulty
			// 
			this->lblSaveDifficulty->AutoSize = true;
			this->lblSaveDifficulty->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSaveDifficulty->Location = System::Drawing::Point(41, 288);
			this->lblSaveDifficulty->Name = L"lblSaveDifficulty";
			this->lblSaveDifficulty->Size = System::Drawing::Size(0, 15);
			this->lblSaveDifficulty->TabIndex = 34;
			this->lblSaveDifficulty->Click += gcnew System::EventHandler(this, &Form2::lblSaveDifficulty_Click);
			// 
			// lblSaveOperation
			// 
			this->lblSaveOperation->AutoSize = true;
			this->lblSaveOperation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSaveOperation->Location = System::Drawing::Point(41, 476);
			this->lblSaveOperation->Name = L"lblSaveOperation";
			this->lblSaveOperation->Size = System::Drawing::Size(0, 15);
			this->lblSaveOperation->TabIndex = 35;
			// 
			// Results
			// 
			this->Results->FormattingEnabled = true;
			this->Results->ItemHeight = 15;
			this->Results->Location = System::Drawing::Point(752, 340);
			this->Results->Name = L"Results";
			this->Results->Size = System::Drawing::Size(120, 184);
			this->Results->TabIndex = 36;
			// 
			// lblAnswer
			// 
			this->lblAnswer->AutoSize = true;
			this->lblAnswer->Location = System::Drawing::Point(584, 431);
			this->lblAnswer->Name = L"lblAnswer";
			this->lblAnswer->Size = System::Drawing::Size(0, 15);
			this->lblAnswer->TabIndex = 37;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(576, 467);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(170, 168);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 38;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->BackgroundImageChanged += gcnew System::EventHandler(this, &Form2::btnCheckAnswer_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->closeToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(104, 26);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::closeToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->closeToolStripMenuItem1,
					this->helpToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(884, 24);
			this->menuStrip1->TabIndex = 39;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// closeToolStripMenuItem1
			// 
			this->closeToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			this->closeToolStripMenuItem1->Name = L"closeToolStripMenuItem1";
			this->closeToolStripMenuItem1->Size = System::Drawing::Size(37, 20);
			this->closeToolStripMenuItem1->Text = L"File";
			this->closeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form2::closeToolStripMenuItem1_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->helpToolStripMenuItem->Text = L"Close";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::helpToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem1
			// 
			this->helpToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->viewHelpToolStripMenuItem });
			this->helpToolStripMenuItem1->Name = L"helpToolStripMenuItem1";
			this->helpToolStripMenuItem1->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem1->Text = L"Help";
			this->helpToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form2::helpToolStripMenuItem1_Click);
			// 
			// viewHelpToolStripMenuItem
			// 
			this->viewHelpToolStripMenuItem->Name = L"viewHelpToolStripMenuItem";
			this->viewHelpToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->viewHelpToolStripMenuItem->Text = L"View Help";
			this->viewHelpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::viewHelpToolStripMenuItem_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(884, 861);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->lblAnswer);
			this->Controls->Add(this->Results);
			this->Controls->Add(this->lblSaveOperation);
			this->Controls->Add(this->lblSaveDifficulty);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->lblLevel);
			this->Controls->Add(this->comboBoxOperations);
			this->Controls->Add(this->btnGenerate);
			this->Controls->Add(this->btnCheckAnswer);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->lblOperation);
			this->Controls->Add(this->lblNumber2);
			this->Controls->Add(this->lblNumber1);
			this->Controls->Add(this->lblChoose);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MATH_X";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {

		
	}


	
private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {


	//hide first background image
	timer1->Stop();
	this->pictureBox1->Hide();

	// show second background image
	pctBox = gcnew PictureBox;
	pctBox->Location = Point(3, 1);
	pctBox->Size = System::Drawing::Size(900, 900);
	pctBox->Image = Image::FromFile(L"C:\\Users\\joaoh\\OneDrive\\Desktop\\WCSU 2021 SPRING\\CS - 240\\Assigments\\0 - MATH_X\\Images\\second.png");
	Controls->Add(pctBox);

	
	
}
private: System::Void pictureBox1_BackgroundImageChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void btnGenerate_Click(System::Object^ sender, System::EventArgs^ e) {

	
	// validating input and sending error message for user
	if (comboBoxOperations->SelectedIndex != -1 && comboBox1->SelectedIndex != -1)
	{
		//calling function to get input generation
		generate();
	}

	// if combobox was empty send a messagembox
	else
	{
		MessageBox::Show("Please fill in all boxes", "WARNING",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	

}
private: System::Void lblSaveDifficulty_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {

	// interaction with user to know that the level was saved
	lblSaveDifficulty->Text = "Difficulty saved successfully";
}


//function to check inputs
private: System::Void generate() {

	//creating a variable to hold random numbers
	Random^ rnd = gcnew Random;
	//creating array of operation symbols
	array<String^>^ operations = { "+", "-", "*" };

	for (int j = 0; j <= 2; j++)
	{
		for (int i = 0; i <= 2; i++) {
	
				//check which item user selected
			if (comboBox1->SelectedIndex == i)
			{
				// each "i" increase the difficulty
				// for each level of difficulty, i will increase and it will multiply by 21 to get random number
				lblNumber1->Text = rnd->Next(21*(i+2)).ToString();
				
				// second random number
				lblNumber2->Text = rnd->Next(21*(i+2)).ToString();

				lblSaveOperation->Text = "Have Fun!";
			}
			if (comboBoxOperations->SelectedIndex == j)
			{
				//each j changes the operation symbol
				lblOperation->Text = operations[j];
			}
		}
	}
}

private: System::Void btnCheckAnswer_Click(System::Object^ sender, System::EventArgs^ e) {


	// check if user click check answer without fill in all boxes
	if (comboBox1->SelectedIndex == -1 || comboBoxOperations->SelectedIndex == -1)
	{
		MessageBox::Show("Please fill in all boxes", "WARNING",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		
	}
	else {
		// call function to get the result
		int result = getResult();

		//additing result to listBox
		Results->Items->Add(result);
		//converting the input text to int

		int resultUser = Convert::ToInt32(txtResult->Text);



		//check if answer is right
		if (result == resultUser)
		{
			// interactive image for results
			Image^ image = Image::FromFile(L"C:\\Users\\joaoh\\OneDrive\\Desktop\\WCSU 2021 SPRING\\CS - 240\\Assigments\\0 - MATH_X\\Images\\Right.jpg");
			//show picture
			pictureBox3->Image = image;

			lblAnswer->Text = "Good Job!";
		}
		else
		{
			// interactive image for results
			Image^ image2 = Image::FromFile(L"C:\\Users\\joaoh\\OneDrive\\Desktop\\WCSU 2021 SPRING\\CS - 240\\Assigments\\0 - MATH_X\\Images\\Wrong.jpg");
			//show picture
			pictureBox3->Image = image2;

			lblAnswer->Text = "Try Again";
		}
	}
	
}


	   //function to get result of operations


private: System::Int32 getResult()
{

	// converting lblNumbers into int to make operations
	int number1 = Convert::ToInt32(lblNumber1->Text);
	int number2 = Convert::ToInt32(lblNumber2->Text);
	
	int result;

	// check if user choose + summ
	if (lblOperation->Text == "+")
	{
		return result = number1 + number2;
	}
	//check if user choose - subtraction
	else if (lblOperation->Text == "-")
	{
		return result = number1 - number2;
	}

	// if it is neither, it is multiplication
	else 
	{
		return result = number1 * number2;
	}

	 


}
	

	   
private: System::Void lblCorrect_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	// menu strip item to close program
	this->Close();
}
private: System::Void closeToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// menu strip to close program
	this->Close();
}
private: System::Void helpToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void viewHelpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	// open and create help form;
	Form^ help = gcnew HelpForm;
	help->ShowDialog();
}
};
}
