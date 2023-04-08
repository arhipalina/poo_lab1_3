#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ afiseaza;
	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->afiseaza = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(247, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Calculeaza CNP-ul";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(139, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Sterge CNP-ul";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// afiseaza
			// 
			this->afiseaza->Location = System::Drawing::Point(12, 82);
			this->afiseaza->Multiline = true;
			this->afiseaza->Name = L"afiseaza";
			this->afiseaza->Size = System::Drawing::Size(247, 59);
			this->afiseaza->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 153);
			this->Controls->Add(this->afiseaza);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Decodeaza CNP";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
		

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//la apasare calculeaza vetrific intai lungimea si apoi decodarea
		if (textBox1->Text->Length != 13) {
			MessageBox::Show("CNP-ul trebuie sa aiba 13 cifre");
			return;
		}
		//decodare cnp
		String^ cnp = textBox1->Text;
		    
			int an = Int32::Parse(cnp->Substring(1, 2));
			int luna = Int32::Parse(cnp->Substring(3, 2));
			int zi = Int32::Parse(cnp->Substring(5, 2));
			DateTime azi = DateTime::Now;
			int varsta = azi.Year - an;
			if (Int32::Parse(cnp->Substring(0, 1)) < 3) {
				//1900
				varsta -= 1900;
			}
			else if (Int32::Parse(cnp->Substring(0, 1)) < 7) {
				//2000
				varsta -= 2000;
			}
			else if (Int32::Parse(cnp->Substring(0, 1)) < 9) {
				//1800
				varsta -= 1800;
			}
			else {
				//Secolul strainatatii
				varsta -= 2000;//nu stim secolul
			}
			
			afiseaza->Text = "Data nasterii " + zi.ToString() + "." + luna.ToString() + "." + an.ToString() + "\r\n Varsta:" + varsta.ToString();
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//aici cand butonul este apasat dau valoare textboxului nimic, adica sterg
		textBox1->Text = "";
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Verify that the pressed key isn't CTRL or any non-numeric digit
	// aici functia este declansata cand se apasa o tasta in textbox
	//si daca este numar atunci este preluat (handled=true) altfel caracterul nu este preluat(handled=false)
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
};
}
