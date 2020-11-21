#pragma once
#include "Product.h"
namespace Proyecto02FranciscoPuga1183819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for RetireProduct
	/// </summary>
	public ref class RetireProduct : public System::Windows::Forms::Form
	{
	public:
		RetireProduct(void)
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
		~RetireProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 277);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Nombre de responsable:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Cantidad del producto:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Fecha de ingreso:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Tipo de Producto";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(188, 274);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(227, 20);
			this->textBox3->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(188, 239);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 20);
			this->textBox2->TabIndex = 13;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(188, 54);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 11;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Material de oficina", L"Ropa ", L"Material para construcción " });
			this->comboBox1->Location = System::Drawing::Point(188, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(227, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->Text = L"Seleccione tipo de producto";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(176, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Retirar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// RetireProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 351);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"RetireProduct";
			this->Text = L"RetireProduct";
			this->Load += gcnew System::EventHandler(this, &RetireProduct::RetireProduct_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int ProductoID;
		int Cant;
    String^ Resp;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //En caso de no haber ingresado los datos requeridos

		ProductoID = this->comboBox1->SelectedIndex + 1;
		if (ProductoID < 1) {
			MessageBox::Show("Seleccione tipo producto", "Error");
			return;
		}

		String^ CantS = Convert::ToString(this->textBox2->Text);
		if (!Int32::TryParse(CantS, Cant)) {
			MessageBox::Show("Ingrese una cantidad en numeros enteros", "Error");
			return;
		}

		Resp = Convert::ToString(this->textBox3->Text);
		if (String::IsNullOrEmpty(Resp)) {
			MessageBox::Show("Ingrese el nombre del responsable", "Error");
			return;
		}
		Close();
	}

	public:Product* getProducto() {	//Guardar Valores
		DateTime date = this->monthCalendar1->SelectionStart;
		String^ Fecha = date.ToString("d");
		String^ Nombre = Convert::ToString(this->comboBox1->SelectedItem);
		Product* newProduct = new Product();
		newProduct->nombre = Nombre;
		newProduct->ProdType = ProductoID;
		newProduct->cant = Cant;
		newProduct->responsable = Resp;
		newProduct->fecha = Fecha;
		return newProduct;
	}

	private: System::Void RetireProduct_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
