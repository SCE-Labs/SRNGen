#pragma once
#include<stdlib.h>
#include<time.h>
#include<cmath>

namespace SRNGen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SRNGForm
	/// </summary>
	public ref class SRNGForm : public System::Windows::Forms::Form
	{
	public:
		SRNGForm(void)
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
		~SRNGForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;


	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SRNGForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Location = System::Drawing::Point(242, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SRNGForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(116, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Lower";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(116, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Upper";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Sudo Random Number";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 21);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(51, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Seed";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &SRNGForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(12, 47);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(74, 17);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Limit (INT)";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &SRNGForm::checkBox2_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(136, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"Default";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SRNGForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(158, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(78, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(158, 70);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(78, 20);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L"100";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(136, 96);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"0";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(12, 72);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(64, 17);
			this->checkBox3->TabIndex = 13;
			this->checkBox3->Text = L"Decimal";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &SRNGForm::checkBox3_CheckedChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->AutoSize = false;
			this->trackBar1->Location = System::Drawing::Point(242, 89);
			this->trackBar1->Maximum = 12;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(111, 32);
			this->trackBar1->TabIndex = 16;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			this->trackBar1->Value = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &SRNGForm::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(270, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Decimal Points";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(251, 77);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"1";
			// 
			// SRNGForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(365, 129);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SRNGForm";
			this->Text = L"SRNGen";
			this->Load += gcnew System::EventHandler(this, &SRNGForm::SRNGForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int ll, ul, dp;
		long long tens;
		double random;

		dp = trackBar1->Value;

		tens = pow(10, dp);

		if (checkBox2->Checked == false){
			random = rand();
		}
		else {
			if (checkBox3->Checked == false) {
				ll = System::Convert::ToDouble(textBox2->Text);
				ul = System::Convert::ToDouble(textBox3->Text);
				random = (rand() % (ul - ll)) + ll;
			}
			else {
				random= (double)rand() / (double)RAND_MAX;
				random = (long long)(random*tens);
				random = (random/tens);
			}
		}
			
		textBox4->Text = System::Convert::ToString(random);

	}
	private: System::Void SRNGForm_Load(System::Object^  sender, System::EventArgs^  e) {
		checkBox1->Checked = false;
		textBox1->Enabled = false;
		checkBox2->Checked = true;
		trackBar1->Enabled = false;
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox1->Checked == false) {
			textBox1->Enabled = false;
			textBox1->Text = "Default";
		}
		else {
			textBox1->Enabled = true;
			textBox1->Text = "0";
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox2->Checked == false) {
			textBox2->Enabled = false;
			textBox2->Text = "Limit";
			textBox3->Enabled = false;
			textBox3->Text = "Limit";
			checkBox3->Enabled = false;
		}
		else {
			textBox2->Enabled = true;
			textBox2->Text = "0";
			textBox3->Enabled = true;
			textBox3->Text = "100";
			checkBox3->Enabled = true;
		}
	}

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double seed;
		if (checkBox1->Checked == false) srand(time(NULL));
		else {
			seed = System::Convert::ToDouble(textBox1->Text);
			srand(seed);
		}
	}

	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox3->Checked == true) {
			textBox2->Enabled = false;
			textBox2->Text = "0";
			textBox3->Enabled = false;
			textBox3->Text = "1";
			trackBar1->Enabled = true;
		}
		else {
			textBox2->Enabled = true;
			textBox2->Text = "0";
			textBox3->Enabled = true;
			textBox3->Text = "100";
			trackBar1->Enabled = false;
		}
	}

	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
		label5->Text = System::Convert::ToString(trackBar1->Value);
	}
};
}
