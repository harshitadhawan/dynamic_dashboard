//upload.h

#pragma once
#include <string>
#include <process.h>
#include <msclr/marshal_cppstd.h>  // Include for msclr::interop::marshal_as
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include <vcclr.h>
#include <list>

#include "selection.h"
#include "gnu.cpp"


using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;

namespace graphproject {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for upload
	/// </summary>

	public ref class upload : public System::Windows::Forms::Form
	{
	public:
		upload(void)
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
		~upload()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:

	public:

	public:
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	public:
		array<String^>^ GetColumnNames(String^ filePath);
		array<String^>^ GetDataFromColumn(String^ filePath, String^ columnName);


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(upload::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(282, 222);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(338, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Upload CSV/Excel File";
			this->label1->Click += gcnew System::EventHandler(this, &upload::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(394, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Upload";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &upload::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(35, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(840, 196);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// upload
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(946, 454);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"upload";
			this->Text = L"upload";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   System::Void upload::button1_Click(System::Object^ sender, System::EventArgs^ e) {
			   // Handle button click event
			   OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

			   // Set the file dialog filters to allow only CSV and Excel files
			   openFileDialog1->Filter = "CSV files (*.csv)|*.csv|Excel files (*.xlsx)|*.xlsx|All files (*.*)|*.*";
			   openFileDialog1->FilterIndex = 1; // CSV is the default filter
			   openFileDialog1->RestoreDirectory = true;
			   //YourUploadMethod();

			   // Show the file dialog
			   if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				   // Get the selected file name and display it
				   String^ fileName = openFileDialog1->FileName;
				   std::string mfile = msclr::interop::marshal_as<std::string>(fileName);

				   //std::cout << mfile;
				   // Check if the file has a valid extension (CSV or Excel)
				   String^ fileExtension = System::IO::Path::GetExtension(fileName)->ToLower();

				   if (fileExtension == ".csv" || fileExtension == ".xlsx") {
					   // Valid file extension, you can now handle the file
					   // For example, display a success message in a MessageBox
					   MessageBox::Show("File uploaded successfully!", "Success");

					   // Call GetColumnNames to retrieve column names
					   array<String^>^ columnNames = GetColumnNames(fileName);

					   // Update comboBox2 in the selection form
					   selection^ selectionForm = gcnew selection();
					   selectionForm->UpdateComboBox2(columnNames);
					   selectionForm->UpdateComboBox3(columnNames);
					   selectionForm->UpdateComboBox4(columnNames);

					   // Pass the file name and column names to the selection form
					   selectionForm->SetFileAndColumns(fileName, columnNames);
					   //selectionForm->fn(mfile);
					   selectionForm->Show(); // Show the selection form
				   }
				   else {
					   // Invalid file extension, display an error message
					   MessageBox::Show("Invalid file type. Please select a CSV or Excel file.", "Error");
				   }
			   }
		   }

		   //array<String^>^ GetColumnNames(String^ filePath);
	};
}