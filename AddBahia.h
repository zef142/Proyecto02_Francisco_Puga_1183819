#pragma once
#include <cctype>
#include "Matrix.h"
#include "Bahia.h"

namespace Proyecto02FranciscoPuga1183819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	double WMax;
	int column;
	int SelectProduct;
	Char fila;
	/// <summary>
	/// Summary for AddBahia
	/// </summary>
	public ref class AddBahia : public System::Windows::Forms::Form
	{
	public:
		AddBahia(void)
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
		~AddBahia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"XA", L"XB", L"XC", L"XD", L"XE" });
			this->comboBox1->Location = System::Drawing::Point(143, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(148, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Seleccione Fila";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Y1", L"Y2", L"Y3", L"Y4", L"Y5" });
			this->comboBox2->Location = System::Drawing::Point(143, 51);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(148, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->Text = L"Seleccione Columna";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Material de oficina", L"Ropa", L"Material para construccion" });
			this->checkedListBox1->Location = System::Drawing::Point(143, 87);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(148, 49);
			this->checkedListBox1->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(143, 155);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(108, 198);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddBahia::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Fila:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Columna";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Productos para almacenar:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Peso Maximo:";
			// 
			// AddBahia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 233);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"AddBahia";
			this->Text = L"Nueva Bahia";
			this->Load += gcnew System::EventHandler(this, &AddBahia::AddBahia_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddBahia_Load(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	column = this->comboBox2->SelectedIndex + 1;
	String^ WeightS = Convert::ToString(this->textBox1->Text);
	//Asegurar que hayan valores seleccionados
	if ((this->comboBox1->SelectedIndex + 1) < 1) {
		MessageBox::Show("Fila no seleccionada", "Error");
		return;
	}
	SelectProduct = this->checkedListBox1->SelectedIndex + 1;
	if (SelectProduct < 1) {
		MessageBox::Show("Selecciones al menos un producto", "Error");
		return;
	}
	if (column < 1) {
		MessageBox::Show("Columna no seleccionada", "Error");
		return;
	}if (!Double::TryParse(WeightS, WMax)) {
		MessageBox::Show("Ingrese un peso", "Error");
		return;
	}
	Close();
}
public: Bahia* GetNewBahia() {
	fila = Convert::ToChar(this->comboBox1->SelectedItem);
	Bahia* newBahia = new Bahia();
	if (column != 0 && SelectProduct != 0) {
		newBahia->fill = fila;
		newBahia->colums = column;
		newBahia->Wmax = WMax;
		newBahia->Wavailable = WMax;
		int count = 0;
		for (int i = 0; i < 3; i++) {
			if (this->checkedListBox1->GetItemChecked(i)) {
				newBahia->product[i] = i + 1;
				count = count + 1;
			}
		}
		return newBahia;
	}
	else {
		return false;
	}
}

	public: String^ GetRespuesta() {
		String^ respuesta = "Se inserto una nueva bahia en la posicion: " + fila + column +
			". Soporta un peso maximo de: " + WMax + ".\r\n";
		return respuesta;
	}
};
}
