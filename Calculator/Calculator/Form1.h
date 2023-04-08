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
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox1->Size = System::Drawing::Size(246, 23);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(57, 43);
			this->button1->TabIndex = 1;
			this->button1->Tag = L"1";
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(76, 40);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(57, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(139, 40);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(57, 43);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(139, 89);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(57, 43);
			this->button4->TabIndex = 6;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(76, 89);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(57, 43);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(13, 89);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(57, 43);
			this->button6->TabIndex = 4;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(139, 138);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(57, 43);
			this->button7->TabIndex = 9;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(76, 138);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(57, 43);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(13, 138);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(57, 43);
			this->button9->TabIndex = 7;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(139, 187);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(57, 43);
			this->button10->TabIndex = 12;
			this->button10->Text = L"=";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(76, 187);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(57, 43);
			this->button11->TabIndex = 11;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(13, 187);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(57, 43);
			this->button12->TabIndex = 10;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button13->Location = System::Drawing::Point(202, 187);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(57, 43);
			this->button13->TabIndex = 16;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button14->Location = System::Drawing::Point(202, 138);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(57, 43);
			this->button14->TabIndex = 15;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button15->Location = System::Drawing::Point(202, 89);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(57, 43);
			this->button15->TabIndex = 14;
			this->button15->Text = L"x";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button16->Location = System::Drawing::Point(202, 40);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(57, 43);
			this->button16->TabIndex = 13;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button17->Location = System::Drawing::Point(13, 236);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(246, 43);
			this->button17->TabIndex = 17;
			this->button17->Text = L"STERGE";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(270, 293);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: 
			Double op1 = 0;
			Double op2 = 0;
			String^ op = "";
			bool introd = true;
			bool arevirgula = false;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!introd) {
			textBox1->Text = "";
			introd = true;
		}
			System::Windows::Forms::Button^ b = (System::Windows::Forms::Button^)sender;
			if ((b->Text != "0") || (textBox1->Text->Length > 0)) {
				textBox1->Text += b->Text;
			}
			

	}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	this->introd = true;
	arevirgula = false;
	op1 = 0;
	op2 = 0;
	op = "";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (introd) {
		System::Windows::Forms::Button^ b = (System::Windows::Forms::Button^)sender;
		if (!arevirgula) {
			textBox1->Text += b->Text;
			arevirgula = true;
		}

	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	op1 = Double::Parse(textBox1->Text);
	introd = false;
	//textBox1->Text = "";
	if (op->Length == 0) {
		op = ((System::Windows::Forms::Button^)sender)->Text;
	}
	else {
		//calculeaza si adauga noua operatie
		calculeaza();
		op = ((System::Windows::Forms::Button^)sender)->Text;
	}

}
private: System::Void calculeaza(){
	op2 = Double::Parse(textBox1->Text);
	Double rez;
	if (op == "+") {
		 rez = op1 + op2;
	}
	else if (op == "x") {
		rez = op1 * op2;
	}
	else if (op == "-") {
		rez = op1 - op2;
	}
	else if (op == "/") {
		rez = op1 / op2;
	}
	textBox1->Text = rez.ToString();

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (op->Length > 0) {
		calculeaza();
		introd = false;
	}
	
}
};
}
