#pragma once
#include "AddBahia.h"
#include "DeleteBahia.h"
#include "AddProduct.h"
#include "RetireProduct.h"
#include "Matrix.h"
namespace Proyecto02FranciscoPuga1183819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Matrix* NewBodega;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	public:
		String^ Inventary;
		MyForm1(Matrix* NewBodega)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->NewBodega = NewBodega;
			Inventary = "";
			ShowHeaders();
			ShowBahias();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(318, 9);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bodega de almacenamiento";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(29, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Almacenar Producto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(29, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Retirar Producto";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(220, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Funciones Producto";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(426, 33);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 100);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Funciones Bahia";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(29, 29);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Crear Bahia";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(29, 58);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(138, 23);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Eliminar Bahia";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 6;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				47.82609F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				52.17391F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				135)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				130)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				135)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				134)));
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label7, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label6, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label50, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 139);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.1832F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53.8168F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 138)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 135)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 139)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 125)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(780, 800);
			this->tableLayoutPanel1->TabIndex = 5;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::tableLayoutPanel1_Paint);
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(0, 674);
			this->label11->Margin = System::Windows::Forms::Padding(0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(117, 126);
			this->label11->TabIndex = 35;
			this->label11->Text = L"E";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(0, 535);
			this->label10->Margin = System::Windows::Forms::Padding(0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 139);
			this->label10->TabIndex = 29;
			this->label10->Text = L"D";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(0, 400);
			this->label9->Margin = System::Windows::Forms::Padding(0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 135);
			this->label9->TabIndex = 23;
			this->label9->Text = L"C";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(0, 262);
			this->label8->Margin = System::Windows::Forms::Padding(0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 138);
			this->label8->TabIndex = 17;
			this->label8->Text = L"B";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(0, 121);
			this->label7->Margin = System::Windows::Forms::Padding(0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 141);
			this->label7->TabIndex = 11;
			this->label7->Text = L"A";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm1::label7_Click);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(645, 0);
			this->label6->Margin = System::Windows::Forms::Padding(0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 121);
			this->label6->TabIndex = 10;
			this->label6->Text = L"5";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(510, 0);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 121);
			this->label5->TabIndex = 9;
			this->label5->Text = L"4";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(380, 0);
			this->label4->Margin = System::Windows::Forms::Padding(0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 121);
			this->label4->TabIndex = 8;
			this->label4->Text = L"3";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(245, 0);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 121);
			this->label2->TabIndex = 7;
			this->label2->Text = L"2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label50
			// 
			this->label50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(117, 0);
			this->label50->Margin = System::Windows::Forms::Padding(0);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(128, 121);
			this->label50->TabIndex = 6;
			this->label50->Text = L"1";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 121);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Bodega Ubicacion (X,Y)";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(632, 73);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(138, 23);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Exportar Bodega";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(802, 947);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm1";
			this->Text = L"Bodega";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Bahia* newBahia = new Bahia();
	AddBahia^ newBahiaForm = gcnew AddBahia();
	newBahiaForm->ShowDialog();
	newBahia = newBahiaForm->GetNewBahia();
	String^ resp = newBahiaForm->GetRespuesta();
	if (newBahia != nullptr && newBahia->Wmax > 0) {
		NewBodega->InsertBahia(newBahia->fill, newBahia->colums, newBahia);
		ShowHeaders();
		ShowBahias();
		Inventary = Inventary + resp;
	}
}
	   void ShowHeaders() {
		   NodoFill* nodoFillAux = NewBodega->HHlist->first;
		   while (nodoFillAux != nullptr) {
			   System::Windows::Forms::Control^ labelTemp = this->tableLayoutPanel1->GetControlFromPosition(0, nodoFillAux->index);
			   String^ FillLetter = Char::ToString(nodoFillAux->FillLetter);
			   labelTemp->Text = FillLetter;
			   nodoFillAux = nodoFillAux->next;
		   }

		   NodoColumn* NodoColumnAux = NewBodega->VHlist->first;
		   while (NodoColumnAux != nullptr) {
			   System::Windows::Forms::Control^ labelTemp = this->tableLayoutPanel1->GetControlFromPosition(NodoColumnAux->index, 0);
			   String^ nombreColumna = Convert::ToString(NodoColumnAux->index);
			   labelTemp->Text = nombreColumna;
			   NodoColumnAux = NodoColumnAux->next;
		   }
	   }

	   void ShowBahias() {
		   NodoFill* nodoFillAux = NewBodega->HHlist->first;
		   Bahia* BahiaAux;
		   System::Windows::Forms::Control^ labelTemp;
		   while (nodoFillAux != nullptr) {
			   BahiaAux = nodoFillAux->fill->first;
			   while (BahiaAux != nullptr) {
				   String^ ID = "ID: " + Char::ToString(nodoFillAux->FillLetter) + Convert::ToString(BahiaAux->colums);
				   String^ products = "";
				   for (int i = 0; i < 3; i++) {
					   if (BahiaAux->product[i] > 0) {
						   products = products + BahiaAux->product[i] + ", ";
					   }
				   }
				   products = "Material: " + products + "\r\n";
				   String^ AvailableS = "EspacioDisponible: " + BahiaAux->Wavailable + "\r\n";
				   String^ WMax = "Peso Maximo: " + Convert::ToString(BahiaAux->Wmax);
				   String^ Units = BahiaAux->pile->CantProducto() + "\r\n";
				   String^ BahiaContent = ID + "\r\n" + products + Units + AvailableS + WMax;
				   labelTemp = this->tableLayoutPanel1->GetControlFromPosition(BahiaAux->colums, BahiaAux->fill);
				   if (labelTemp != nullptr) {
					   labelTemp->Text = BahiaContent;
					   labelTemp = nullptr;
				   }
				   else {
					   Label^ labelBahia = gcnew Label;
					   this->tableLayoutPanel1->Controls->Add(labelBahia, BahiaAux->colums, BahiaAux->fill);
					   labelBahia->Text = BahiaContent;
					   labelBahia->AutoSize = true;
					   labelBahia->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
					   labelBahia->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				   }
				   BahiaAux = BahiaAux->Right;
			   }
			   nodoFillAux = nodoFillAux->next;
		   }
	   }

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	DeleteBahia^ DeleteBahiaForm = gcnew DeleteBahia();
	DeleteBahiaForm->ShowDialog();
	int column = DeleteBahiaForm->GetColumn();
	int fill = DeleteBahiaForm->GetFill();
	if (fill!= 0 && column!= 0) {
		String^ resp = NewBodega->DeleteBahia(fill, column);
		MessageBox::Show(resp, "Info");
		int indiceFila = NewBodega->ObtainIndexFill(fill);
		System::Windows::Forms::Control^ labelTemp = this->tableLayoutPanel1->GetControlFromPosition(column, indiceFila);
		labelTemp->Text = " ";
		ShowBahias();
		Inventary = Inventary + resp + "\r\n";
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AddProduct^ formProduct = gcnew AddProduct();
	formProduct->ShowDialog();
	Product* NewProduct = new Product();
	NewProduct = formProduct->GetProduct();
	if (NewProduct!= nullptr && NewProduct->ProdType!= 0) {
		String^ resp = NewBodega->InsertProduct(NewProduct);
		if (String::Compare(resp, "false") == 0) {
			resp = "Insercion de producto fallida, No existen bahias para esta cantidad o para el tipo de material";
		}
		MessageBox::Show(resp, "Info");
		ShowBahias();
		Inventary = Inventary + resp + "\r\n";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	RetireProduct^ formRetire = gcnew RetireProduct();
	formRetire->ShowDialog();
	Product* ProductAux = new Product();
	ProductAux = formRetire->getProducto();
	if (ProductAux!= nullptr && ProductAux->ProdType!= 0) {
		String^ resp = NewBodega->RetireProduct(ProductAux);
		MessageBox::Show(resp, "Info");
		ShowBahias();
		Inventary = Inventary + resp + "\r\n";
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "Archivos txt | *.txt";
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		File::WriteAllText(saveFileDialog1->FileName, Inventary);
		MessageBox::Show("Archivo guardado correctamente"
			, "Operación exitosa"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Information);

	}
	else {
		MessageBox::Show("Error al intentar exportar el archivo"
			, "Archivo no seleccionado"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Exclamation);
	}
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
