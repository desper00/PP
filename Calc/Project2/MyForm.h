#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
		char k;
		double a, b, s;
	private: System::Windows::Forms::Button^ button1;
	public:
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
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button17;


	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
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
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 25);
			this->button2->TabIndex = 1;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(60, 198);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(42, 25);
			this->button3->TabIndex = 2;
			this->button3->Text = L"/";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(60, 167);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(42, 25);
			this->button4->TabIndex = 3;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 198);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(42, 25);
			this->button5->TabIndex = 4;
			this->button5->Text = L"*";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(108, 167);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(42, 25);
			this->button6->TabIndex = 5;
			this->button6->Text = L"-";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(108, 136);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(42, 25);
			this->button7->TabIndex = 6;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(60, 136);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(42, 25);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(12, 136);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(42, 25);
			this->button9->TabIndex = 8;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(108, 105);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(42, 25);
			this->button10->TabIndex = 9;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(60, 105);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(42, 25);
			this->button11->TabIndex = 10;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(12, 105);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(42, 25);
			this->button12->TabIndex = 11;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(108, 74);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(42, 25);
			this->button13->TabIndex = 12;
			this->button13->Text = L"3";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(60, 74);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(42, 25);
			this->button14->TabIndex = 13;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(108, 198);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(42, 25);
			this->button15->TabIndex = 14;
			this->button15->Text = L".";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(108, 229);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(42, 25);
			this->button16->TabIndex = 15;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(12, 229);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(42, 25);
			this->button17->TabIndex = 16;
			this->button17->Text = L"C";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 20);
			this->textBox1->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(231, 390);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (textBox1->Text == "1")
		{
			textBox1->Clear();
			textBox1->AppendText(Convert::ToString(1));
		}
		else
		{
			textBox1->AppendText(Convert::ToString(1));
		}
	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "2")
		{
			textBox1->Clear();
			textBox1->AppendText(Convert::ToString(2));
		}
		else
		{
			textBox1->AppendText(Convert::ToString(2));
		}
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "3")
		{
			textBox1->Clear();
			textBox1->AppendText(Convert::ToString(3));
		}
		else
		{
			textBox1->AppendText(Convert::ToString(3));
		}
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "4")
		{
			textBox1->Clear();
			textBox1->AppendText(Convert::ToString(4));
		}
		else
		{
			textBox1->AppendText(Convert::ToString(4));
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "5")
		{
			textBox1->Clear();
			textBox1->AppendText(Convert::ToString(5));
		}
		else
		{
			textBox1->AppendText(Convert::ToString(5));
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "6")
		{
			textBox1->Clear();
			textBox1->AppendText(Convert::ToString(6));
		}
		else
		{
			textBox1->AppendText(Convert::ToString(6));
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "7")
		{
			textBox1->Clear();
			textBox1->AppendText(Convert::ToString(7));
		}
		else
		{
			textBox1->AppendText(Convert::ToString(7));
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "8")
		{
			textBox1->Clear();
			textBox1->AppendText(Convert::ToString(8));
		}
		else
		{
			textBox1->AppendText(Convert::ToString(8));
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "9")
		{
			textBox1->Clear();
			textBox1->AppendText(Convert::ToString(9));
		}
		else
		{
			textBox1->AppendText(Convert::ToString(9));
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0")
		{
			textBox1->Clear();
			textBox1->AppendText(Convert::ToString(0));
		}
		else
		{
			textBox1->AppendText(Convert::ToString(0));
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		k = '-';
		button17->Enabled = true;
		a = Convert::ToDouble(textBox1->Text);
		textBox1->Clear();
	}

	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (k)
		{
		case'+': b = Convert::ToDouble(textBox1->Text);
			s = a + b;
			textBox1->Text = Convert::ToString(s);
			break;
		case'-':
			b = Convert::ToDouble(textBox1->Text);
			s = a - b;
			textBox1->Text = Convert::ToString(s);
			break;
		case'*':
			b = Convert::ToDouble(textBox1->Text);
			s = a * b;
			textBox1->Text = Convert::ToString(s);
			break;
		case'/':
			b = Convert::ToDouble(textBox1->Text);
			if (b == 0)
			{
				textBox1->Text = "������� �� 0!";
			}
			else 
			{
				s = a / b;
				textBox1->Text = Convert::ToString(s);
			}
			break;
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		k = '+';
		button17->Enabled = true;
		a = Convert::ToDouble(textBox1->Text);
		textBox1->Clear();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		k = '*';
		button17->Enabled = true;
		a = Convert::ToDouble(textBox1->Text);
		textBox1->Clear();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		k = '/';
		button17->Enabled = true;
		a = Convert::ToDouble(textBox1->Text);
		textBox1->Clear();
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		button17->Enabled = true;
		a = Convert::ToDouble(textBox1->Text);
		textBox1->Clear();
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == ".")
		{
			textBox1->Clear();
			textBox1->AppendText(Convert::ToString(Point));
		}
		else
		{
			textBox1->AppendText(Convert::ToString(Point));
		}
	}
};
}
