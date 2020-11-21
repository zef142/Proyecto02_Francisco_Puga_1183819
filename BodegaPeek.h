#pragma once
#include "MatList.h"
#include "MyForm1.h"
namespace Proyecto02FranciscoPuga1183819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BodegaPeek
	/// </summary>
	public ref class BodegaPeek : public System::Windows::Forms::Form
	{
	public:
		MatList* BodegasList;
		BodegaPeek(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->BodegasList = BodegasList;
			ShowBodegas();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BodegaPeek()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Seleccione Bodega que desee ver:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(32, 25);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 212);
			this->listBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(50, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ver Bodega";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// BodegaPeek
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(194, 284);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Name = L"BodegaPeek";
			this->Text = L"Elegir Bodega";
			this->Load += gcnew System::EventHandler(this, &BodegaPeek::BodegaPeek_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->SelectedIndex != -1) {/*Si no tiene seleccionado nada el resultado seria -1*/
			int indiceBodega = listBox1->SelectedIndex + 1;
			Matrix* bodega = BodegasList->fill;
			for (int i = 1; i < indiceBodega; i++) {
				bodega = bodega->next;
			}
			if (bodega != nullptr) {
				MyForm1^ formMyForm1 = gcnew MyForm1(bodega);
				formMyForm1->ShowDialog();
			}
		}
		else {
			MessageBox::Show("Por favor seleccione una bodega", "Info");
		}
	}

	private: void ShowBodegas() {
		Matrix* AuxMatrix = BodegasList->fill;
		if (AuxMatrix == nullptr) {
			MessageBox::Show("No existen bodegas creadas", "Info");
		}
		else {
			int indiceBodega = 1;
			while (AuxMatrix != nullptr)
			{
				listBox1->Items->Add("Bodega" + indiceBodega);
				AuxMatrix = AuxMatrix->next;
				indiceBodega = indiceBodega + 1;
			}
		}
	}
	private: System::Void BodegaPeek_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
