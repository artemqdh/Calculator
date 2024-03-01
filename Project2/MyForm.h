#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ Resultat;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Resultat = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(22, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(66, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(106, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(162, 76);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(65, 20);
			this->textBox3->TabIndex = 4;
			// 
			// Resultat
			// 
			this->Resultat->Location = System::Drawing::Point(96, 172);
			this->Resultat->Name = L"Resultat";
			this->Resultat->Size = System::Drawing::Size(75, 23);
			this->Resultat->TabIndex = 5;
			this->Resultat->Text = L"Result";
			this->Resultat->UseVisualStyleBackColor = true;
			this->Resultat->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(285, 284);
			this->Controls->Add(this->Resultat);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		template<typename B>
		B Plus(B a, B b)
		{
			return a + b;
		}
		template<typename B>
		B Minus(B a, B b)
		{
			return a - b;
		}
		template<typename B>
		B Umnosh(B a, B b)
		{
			return a * b;
		}
		template<typename B>
		B Deli(B a, B b)
		{
			return a / b;
		}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{ 
		double a = System::Convert::ToDouble(textBox1->Text);
		double b = System::Convert::ToDouble(textBox3->Text);
		char sw = System::Convert::ToChar(textBox2->Text);

		double result;

		switch (sw)
		{
		case '+':
		{
			result = Plus(a, b);
			break;
		}
		case '-':
		{
			result = Minus(a, b);
			break;
		}
		case '*':
		{
			result = Umnosh(a, b);
			break;
		}
		case '/':
		{
			result = Deli(a, b);
			break;
		}
		
		}


		MessageBox::Show(System::Convert::ToString(result),
			"Result:", MessageBoxButtons::OKCancel,
			MessageBoxIcon::Asterisk);
	}
	};
}
