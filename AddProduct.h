#pragma once
#include "Product.h"

namespace Proyecto02FranciscoPuga1183819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int ProductID;
	double Weight;
	int Cant;
	/// <summary>
	/// Summary for AddProduct
	/// </summary>
	public ref class AddProduct : public System::Windows::Forms::Form
	{
	public:
		AddProduct(void)
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
		~AddProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;

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
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Material de oficina", L"Ropa ", L"Material para construcción " });
			this->comboBox1->Location = System::Drawing::Point(196, 33);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(227, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Seleccione tipo de producto";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(196, 75);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(196, 258);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(196, 293);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(196, 328);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(227, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Tipo de Producto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Fecha de ingreso:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Peso Unitario:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 296);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Cantidad del producto:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 331);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Nombre de responsable:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(196, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// AddProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 401);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"AddProduct";
			this->Text = L"Agregar Producto";
			this->Load += gcnew System::EventHandler(this, &AddProduct::AddProduct_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductID = this->comboBox1->SelectedIndex + 1;
		String^ WeightS = Convert::ToString(this->textBox1->Text);
		String^ CantS = Convert::ToString(this->textBox2->Text);
		String^ ResponS = Convert::ToString(this->textBox3->Text);
		//En caso de no haber ingresado los datos requeridos
		if (ProductID < 1) {
			MessageBox::Show("Seleccione un tipo de producto", "Error");
			return;
		}if (!Double::TryParse(WeightS, Weight)) {
			MessageBox::Show("Ingrese el peso del producto en numeros", "Error");
			return;
		}if (!Int32::TryParse(CantS, Cant)) {
			MessageBox::Show("Ingrese una cantidad solo en numeros enteros", "Error");
			return;
		}if (String::IsNullOrEmpty(ResponS)) {
			MessageBox::Show("Ingrese el nombre del responsable", "Error");
			return;
		}
		Close();
	}

	public:Product* GetProduct() {
		DateTime date = this->monthCalendar1->SelectionStart;
		String^ Fecha = date.ToString("d");
		String^ Responsable = Convert::ToString(this->textBox3->Text);
		String^ nombre = Convert::ToString(this->comboBox1->SelectedItem);
		Product* newProducto = new Product();
		newProducto->nombre = nombre;
		newProducto->ProdType = ProductID;
		newProducto->cant = Cant;
		newProducto->WUnit = Weight;
		newProducto->responsable = Responsable;
		newProducto->fecha = Fecha;

		return newProducto;
	}
	private: System::Void AddProduct_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
