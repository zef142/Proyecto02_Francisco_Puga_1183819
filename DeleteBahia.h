#pragma once

namespace Proyecto02FranciscoPuga1183819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteBahia
	/// </summary>
	public ref class DeleteBahia : public System::Windows::Forms::Form
	{
	public:
		DeleteBahia(void)
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
		~DeleteBahia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"A", L"B", L"C", L"D", L"E" });
			this->comboBox1->Location = System::Drawing::Point(130, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(132, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Seleccionar Fila";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox2->Location = System::Drawing::Point(130, 65);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(132, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->Text = L"Seleccionar Columna";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Fila";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Columna";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(109, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Eliminar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DeleteBahia::button1_Click_1);
			// 
			// DeleteBahia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 162);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"DeleteBahia";
			this->Text = L"Eliminar Bahia ";
			this->Load += gcnew System::EventHandler(this, &DeleteBahia::DeleteBahia_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int GetFill() {
		Char fillChar = Convert::ToChar(this->comboBox1->SelectedItem);
		int fill = fillChar;
		return fill;
	}
	public: int GetColumn() {
		String^ ColumnS = Convert::ToString(this->comboBox2->SelectedItem);
		int Column;
		Int32::TryParse(ColumnS, Column);
		return Column;
	}
	private: System::Void DeleteBahia_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
