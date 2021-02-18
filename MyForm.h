#pragma once

namespace CalculatorApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btnSpace;
	private: System::Windows::Forms::Button^ btnC;
	protected:

	protected:


	private: System::Windows::Forms::Button^ btnCE;

	private: System::Windows::Forms::Button^ btnAddSub;

	private: System::Windows::Forms::Button^ btnDigit7;
	private: System::Windows::Forms::Button^ btnDigit8;
	private: System::Windows::Forms::Button^ btnDigit9;
	private: System::Windows::Forms::Button^ btnAdd;




	private: System::Windows::Forms::Button^ btnDigit4;
	private: System::Windows::Forms::Button^ btnDigit5;
	private: System::Windows::Forms::Button^ btnDigit6;
	private: System::Windows::Forms::Button^ btnsubtract;




	private: System::Windows::Forms::Button^ btnDigit0;
	private: System::Windows::Forms::Button^ btnDecimal;
	private: System::Windows::Forms::Button^ btnEquals;
	private: System::Windows::Forms::Button^ btnDivide;




	private: System::Windows::Forms::Button^ btnDigit1;
	private: System::Windows::Forms::Button^ btnDigit2;
	private: System::Windows::Forms::Button^ btnDigit3;
	private: System::Windows::Forms::Button^ btnMultiply;





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
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnAddSub = (gcnew System::Windows::Forms::Button());
			this->btnDigit7 = (gcnew System::Windows::Forms::Button());
			this->btnDigit8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit9 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDigit4 = (gcnew System::Windows::Forms::Button());
			this->btnDigit5 = (gcnew System::Windows::Forms::Button());
			this->btnDigit6 = (gcnew System::Windows::Forms::Button());
			this->btnsubtract = (gcnew System::Windows::Forms::Button());
			this->btnDigit0 = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnDigit1 = (gcnew System::Windows::Forms::Button());
			this->btnDigit2 = (gcnew System::Windows::Forms::Button());
			this->btnDigit3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(13, 20);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(346, 64);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnSpace
			// 
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Wingdings", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnSpace->Location = System::Drawing::Point(14, 99);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(82, 80);
			this->btnSpace->TabIndex = 1;
			this->btnSpace->Text = L"";
			this->btnSpace->UseVisualStyleBackColor = true;
			this->btnSpace->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(102, 99);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(82, 80);
			this->btnC->TabIndex = 1;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(190, 99);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(82, 80);
			this->btnCE->TabIndex = 1;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnAddSub
			// 
			this->btnAddSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddSub->Location = System::Drawing::Point(278, 99);
			this->btnAddSub->Name = L"btnAddSub";
			this->btnAddSub->Size = System::Drawing::Size(82, 80);
			this->btnAddSub->TabIndex = 1;
			this->btnAddSub->Text = L"±";
			this->btnAddSub->UseVisualStyleBackColor = true;
			this->btnAddSub->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnDigit7
			// 
			this->btnDigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit7->Location = System::Drawing::Point(14, 185);
			this->btnDigit7->Name = L"btnDigit7";
			this->btnDigit7->Size = System::Drawing::Size(82, 80);
			this->btnDigit7->TabIndex = 1;
			this->btnDigit7->Text = L"7";
			this->btnDigit7->UseVisualStyleBackColor = true;
			this->btnDigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit8
			// 
			this->btnDigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit8->Location = System::Drawing::Point(102, 185);
			this->btnDigit8->Name = L"btnDigit8";
			this->btnDigit8->Size = System::Drawing::Size(82, 80);
			this->btnDigit8->TabIndex = 1;
			this->btnDigit8->Text = L"8";
			this->btnDigit8->UseVisualStyleBackColor = true;
			this->btnDigit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit9
			// 
			this->btnDigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit9->Location = System::Drawing::Point(190, 185);
			this->btnDigit9->Name = L"btnDigit9";
			this->btnDigit9->Size = System::Drawing::Size(82, 80);
			this->btnDigit9->TabIndex = 1;
			this->btnDigit9->Text = L"9";
			this->btnDigit9->UseVisualStyleBackColor = true;
			this->btnDigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(278, 185);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(82, 80);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnDigit4
			// 
			this->btnDigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit4->Location = System::Drawing::Point(14, 271);
			this->btnDigit4->Name = L"btnDigit4";
			this->btnDigit4->Size = System::Drawing::Size(82, 80);
			this->btnDigit4->TabIndex = 1;
			this->btnDigit4->Text = L"4";
			this->btnDigit4->UseVisualStyleBackColor = true;
			this->btnDigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit5
			// 
			this->btnDigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit5->Location = System::Drawing::Point(102, 271);
			this->btnDigit5->Name = L"btnDigit5";
			this->btnDigit5->Size = System::Drawing::Size(82, 80);
			this->btnDigit5->TabIndex = 1;
			this->btnDigit5->Text = L"5";
			this->btnDigit5->UseVisualStyleBackColor = true;
			this->btnDigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit6
			// 
			this->btnDigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit6->Location = System::Drawing::Point(190, 271);
			this->btnDigit6->Name = L"btnDigit6";
			this->btnDigit6->Size = System::Drawing::Size(82, 80);
			this->btnDigit6->TabIndex = 1;
			this->btnDigit6->Text = L"6";
			this->btnDigit6->UseVisualStyleBackColor = true;
			this->btnDigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnsubtract
			// 
			this->btnsubtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsubtract->Location = System::Drawing::Point(278, 271);
			this->btnsubtract->Name = L"btnsubtract";
			this->btnsubtract->Size = System::Drawing::Size(82, 80);
			this->btnsubtract->TabIndex = 1;
			this->btnsubtract->Text = L"-";
			this->btnsubtract->UseVisualStyleBackColor = true;
			this->btnsubtract->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnDigit0
			// 
			this->btnDigit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit0->Location = System::Drawing::Point(14, 443);
			this->btnDigit0->Name = L"btnDigit0";
			this->btnDigit0->Size = System::Drawing::Size(82, 80);
			this->btnDigit0->TabIndex = 1;
			this->btnDigit0->Text = L"0";
			this->btnDigit0->UseVisualStyleBackColor = true;
			this->btnDigit0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDecimal
			// 
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecimal->Location = System::Drawing::Point(102, 443);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(82, 80);
			this->btnDecimal->TabIndex = 1;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = true;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquals->Location = System::Drawing::Point(190, 443);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(82, 80);
			this->btnEquals->TabIndex = 1;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(278, 443);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(82, 80);
			this->btnDivide->TabIndex = 1;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnDigit1
			// 
			this->btnDigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit1->Location = System::Drawing::Point(14, 357);
			this->btnDigit1->Name = L"btnDigit1";
			this->btnDigit1->Size = System::Drawing::Size(82, 80);
			this->btnDigit1->TabIndex = 1;
			this->btnDigit1->Text = L"1";
			this->btnDigit1->UseVisualStyleBackColor = true;
			this->btnDigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit2
			// 
			this->btnDigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit2->Location = System::Drawing::Point(102, 357);
			this->btnDigit2->Name = L"btnDigit2";
			this->btnDigit2->Size = System::Drawing::Size(82, 80);
			this->btnDigit2->TabIndex = 1;
			this->btnDigit2->Text = L"2";
			this->btnDigit2->UseVisualStyleBackColor = true;
			this->btnDigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit3
			// 
			this->btnDigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit3->Location = System::Drawing::Point(190, 357);
			this->btnDigit3->Name = L"btnDigit3";
			this->btnDigit3->Size = System::Drawing::Size(82, 80);
			this->btnDigit3->TabIndex = 1;
			this->btnDigit3->Text = L"3";
			this->btnDigit3->UseVisualStyleBackColor = true;
			this->btnDigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->Location = System::Drawing::Point(278, 357);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(82, 80);
			this->btnMultiply->TabIndex = 1;
			this->btnMultiply->Text = L"*";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(373, 539);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnsubtract);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnAddSub);
			this->Controls->Add(this->btnDigit3);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnDigit6);
			this->Controls->Add(this->btnDigit9);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnDigit2);
			this->Controls->Add(this->btnDigit1);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btnDigit0);
			this->Controls->Add(this->btnDigit5);
			this->Controls->Add(this->btnDigit4);
			this->Controls->Add(this->btnDigit8);
			this->Controls->Add(this->btnDigit7);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnSpace);
			this->Controls->Add(this->txtDisplay);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double firstDigit, SecondDigit, result;
		String^operators;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text = Numbers->Text;
	}
}
};
}
