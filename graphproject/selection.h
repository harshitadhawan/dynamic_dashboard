//selection.h

#pragma once

//std::vector<std::string> columnNamesV;
#include "gnu.cpp"
#include <process.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
//#include <limits>
//#include <algorithm>
//std::string mf;

namespace graphproject {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//public: void fnn(std::vector<std::string> column);

	/// <summary>
	/// Summary for selection
	/// </summary>
	public ref class selection : public System::Windows::Forms::Form
	{
	public:
		selection(void)
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
		~selection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;






	public: System::Windows::Forms::ComboBox^ comboBox2;

	public:
		System::Windows::Forms::ComboBox^ GetComboBox2()
		{
			return comboBox2;
		}


	public:
		String^ selectedFileName;
		array<String^>^ selectedColumnNames;


		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	public:
		// Method to set the file name and column names
		void SetFileAndColumns(String^ fileName, array<String^>^ columnNames)
		{
			selectedFileName = fileName;
			//std::string mf = msclr::interop::marshal_as<std::string>(fileName);

			selectedColumnNames = columnNames;
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(54, 91);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Choose Graph Type";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(5, 12);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Choose X-Axis Column";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Line Graph", L"Bar Graph", L"Histogram",
					L"Scatterplot", L"3D Scatter", L"Surface Plot"
			});
			this->comboBox1->Location = System::Drawing::Point(337, 83);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 29);
			this->comboBox1->TabIndex = 2;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(288, 12);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(180, 29);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &selection::comboBox2_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(9, 14);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 21);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Choose Y-Axis Column";
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(291, 4);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(180, 29);
			this->comboBox3->TabIndex = 6;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &selection::comboBox3_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(288, 7);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(180, 29);
			this->comboBox4->TabIndex = 8;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &selection::comboBox4_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(7, 10);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(208, 21);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Choose Z-Axis Column";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::BlueViolet;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(525, 82);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(44, 29);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Ok";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &selection::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(54, 133);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(187, 21);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Choose Graph Color";
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"red", L"blue", L"green", L"yellow", L"pink",
					L"purple", L"aqua", L"cyan"
			});
			this->comboBox5->Location = System::Drawing::Point(337, 125);
			this->comboBox5->Margin = System::Windows::Forms::Padding(4);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(180, 29);
			this->comboBox5->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::BlueViolet;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(35, 16);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 77);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Plot Graph";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &selection::button1_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button1);
			this->panel4->Location = System::Drawing::Point(287, 414);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(221, 112);
			this->panel4->TabIndex = 12;
			this->panel4->Visible = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(49, 174);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(502, 56);
			this->panel1->TabIndex = 16;
			this->panel1->Visible = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->comboBox3);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(46, 238);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(505, 59);
			this->panel2->TabIndex = 17;
			this->panel2->Visible = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->comboBox4);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Location = System::Drawing::Point(49, 305);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(592, 74);
			this->panel3->TabIndex = 18;
			this->panel3->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Script", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(244, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(307, 40);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Customise your graphs";
			// 
			// selection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(828, 606);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"selection";
			this->Text = L"selection";
			this->panel4->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ xaxis = comboBox2->SelectedItem != nullptr ? safe_cast<System::String^>(comboBox2->SelectedItem) : "";

	}
	public:
		void UpdateComboBox2(array<String^>^ columnNames)
		{
			comboBox2->Items->Clear();
			if (columnNames != nullptr)
			{
				comboBox2->Items->AddRange(columnNames);
			}
		}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ yaxis = comboBox3->SelectedItem != nullptr ? safe_cast<System::String^>(comboBox3->SelectedItem) : "";

	}
	public:
		void UpdateComboBox3(array<String^>^ columnNames)
		{
			comboBox3->Items->Clear();
			if (columnNames != nullptr)
			{
				comboBox3->Items->AddRange(columnNames);
			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {



		System::String^ selectedgraphtype = safe_cast<System::String^>(comboBox1->SelectedItem);
		std::string selectedStdgraphtype = msclr::interop::marshal_as<std::string>(selectedgraphtype);

		System::String^ xaxis;
		System::String^ yaxis;
		System::String^ zaxis;
		std::string xaxisstring;
		std::string yaxisstring;
		std::string zaxisstring;
		std::vector<std::string> selectedColumns;
		if (selectedStdgraphtype == "Line Graph" || selectedStdgraphtype == "Bar Graph" || selectedStdgraphtype == "Scatterplot")
		{
			xaxis = safe_cast<System::String^>(comboBox2->SelectedItem);
			yaxis = safe_cast<System::String^>(comboBox3->SelectedItem);
			xaxisstring = msclr::interop::marshal_as<std::string>(xaxis);
			yaxisstring = msclr::interop::marshal_as<std::string>(yaxis);
			selectedColumns.push_back(xaxisstring);
			selectedColumns.push_back(yaxisstring);
		}
		else if (selectedStdgraphtype == "Histogram")
		{
			xaxis = safe_cast<System::String^>(comboBox2->SelectedItem);
			xaxisstring = msclr::interop::marshal_as<std::string>(xaxis);
			selectedColumns.push_back(xaxisstring);
		}
		else if (selectedStdgraphtype == "3D Scatter" || selectedStdgraphtype == "Surface Plot")
		{
			xaxis = safe_cast<System::String^>(comboBox2->SelectedItem);
			yaxis = safe_cast<System::String^>(comboBox3->SelectedItem);
			zaxis = safe_cast<System::String^>(comboBox4->SelectedItem);
			xaxisstring = msclr::interop::marshal_as<std::string>(xaxis);
			yaxisstring = msclr::interop::marshal_as<std::string>(yaxis);
			zaxisstring = msclr::interop::marshal_as<std::string>(zaxis);
			selectedColumns.push_back(xaxisstring);
			selectedColumns.push_back(yaxisstring);
			selectedColumns.push_back(zaxisstring);
		}

		System::String^ sfn = selectedFileName;
		std::string selectedfile = msclr::interop::marshal_as<std::string>(sfn);


		//newnewnenwne

		std::ifstream dataFile(selectedfile);
		if (!dataFile.is_open()) {
			std::cerr << "Error opening file: " << selectedfile << std::endl;

		}

		std::string line;
		std::vector<std::string> columnNames;

		// Read column names from the first line
		if (std::getline(dataFile, line)) {
			std::istringstream iss(line);
			std::string columnName;

			while (std::getline(iss, columnName, ',')) {
				columnNames.push_back(columnName);
			}
		}
		else {
			std::cerr << "Error: Empty file." << std::endl;
		}

		// Generate data file 'data.dat' based on selected columns
		std::ofstream dataOutputFile("data.dat");
		if (!dataOutputFile.is_open()) {
			std::cerr << "Error creating data file." << std::endl;

		}

		// Write column names to the data file
		for (const auto& col : selectedColumns) {
			dataOutputFile << col << " ";
		}
		dataOutputFile << std::endl;

		// Read data and write selected columns to the data file
		while (std::getline(dataFile, line)) {
			std::istringstream iss(line);
			std::string columnValue;
			size_t columnIndex = 0;

			while (std::getline(iss, columnValue, ',')) {
				if (std::find(selectedColumns.begin(), selectedColumns.end(), columnNames[columnIndex]) != selectedColumns.end()) {
					dataOutputFile << columnValue << " ";
				}
				++columnIndex;
			}
			dataOutputFile << std::endl;
		}

		dataOutputFile.close();
		std::cout << "Selected columns written to data.dat file." << std::endl;

		generateGnuplotScript(selectedStdgraphtype, selectedColumns);
		std::cout << "Generated gnuplot script for " << selectedStdgraphtype << " using selected columns." << std::endl;

		dataFile.close();



	};

		   void generateGnuplotScript(const std::string& graphType, const std::vector<std::string>& columnNames) {
			   std::ofstream scriptFile("gnuplot_script.gnu");
			   System::String^ gcolor = safe_cast<System::String^>(comboBox5->SelectedItem);
			   std::string graphColor = msclr::interop::marshal_as<std::string>(gcolor);

			   if (graphType == "Line Graph") {
				   scriptFile << "set title 'Line Graph'\n";
				   scriptFile << "set xlabel '" << columnNames[0] << "'\n";
				   scriptFile << "set ylabel '" << columnNames[1] << "'\n";
				   scriptFile << "plot 'data.dat' using 1:2 title '" << columnNames[1] << "' with linespoints lt rgb '" << graphColor << "'\n";
				   scriptFile << "pause -1\n";

			   }
			   else if (graphType == "Bar Graph") {
				   scriptFile << "set title 'Bar Graph'\n";
				   scriptFile << "set xlabel '" << columnNames[0] << "'\n";
				   scriptFile << "set ylabel '" << columnNames[1] << "'\n";
				   scriptFile << "plot 'data.dat' using 1:2 title '" << columnNames[1] << "' with boxes fill solid lt rgb '" << graphColor << "'\n";
				   // 'fill solid' fills the boxes, 'lt rgb' specifies the color (in this case, green)

			   }
			   else if (graphType == "Histogram") {
				   scriptFile << "set title 'Histogram'\n";
				   scriptFile << "set xlabel '" << columnNames[0] << "'\n";
				   scriptFile << "set ylabel 'Frequency'\n";
				   scriptFile << "binwidth = 1\n";
				   scriptFile << "bin(x, width) = width*floor(x/width)\n";
				   scriptFile << "plot 'data.dat' using (bin($1, binwidth)):(1.0) smooth freq with boxes lt rgb '" << graphColor << "'\n";
			   }
			   else if (graphType == "Scatterplot") {
				   scriptFile << "set title 'Scatterplot'\n";
				   scriptFile << "set xlabel '" << columnNames[0] << "'\n";
				   scriptFile << "set ylabel '" << columnNames[1] << "'\n";
				   scriptFile << "plot 'data.dat' using 1:2 with points lt rgb '" << graphColor << "'\n";
			   }
			   else if (graphType == "3D Scatter") {
				   scriptFile << "set title '3D Scatterplot'\n";
				   scriptFile << "set xlabel '" << columnNames[0] << "'\n";
				   scriptFile << "set ylabel '" << columnNames[1] << "'\n";
				   scriptFile << "set zlabel '" << columnNames[2] << "'\n";
				   scriptFile << "splot 'data.dat' using 1:2:3 with points lt rgb '" << graphColor << "'\n";
			   }
			   else if (graphType == "Surface Plot") {
				   scriptFile << "set title 'Surface Plot'\n";
				   scriptFile << "set xlabel '" << columnNames[0] << "'\n";
				   scriptFile << "set ylabel '" << columnNames[1] << "'\n";
				   scriptFile << "set zlabel '" << columnNames[2] << "'\n";
				   scriptFile << "splot 'data.dat' using 1:2:3 with lines lt rgb '" << graphColor << "'\n";
			   }
			   // Add a pause command at the end to keep the Gnuplot window open
			   scriptFile << "pause -1\n";

			   scriptFile.close();
			   std::string command = "gnuplot gnuplot_script.gnu";
			   system(command.c_str());
		   }

	private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ zaxis = comboBox4->SelectedItem != nullptr ? safe_cast<System::String^>(comboBox4->SelectedItem) : "";

	}
	public:
		void UpdateComboBox4(array<String^>^ columnNames)
		{
			comboBox4->Items->Clear();
			if (columnNames != nullptr)
			{
				comboBox4->Items->AddRange(columnNames);
			}
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		Object^ selectedGraph = comboBox1->SelectedItem;
		System::String^ selectedgraphtype = safe_cast<System::String^>(comboBox1->SelectedItem);
		std::string selectedStdgraphtype = msclr::interop::marshal_as<std::string>(selectedgraphtype);

		if (selectedStdgraphtype == "Line Graph" || selectedStdgraphtype == "Bar Graph" || selectedStdgraphtype == "Scatterplot") {
			panel1->Visible = true;
			panel2->Visible = true;
			panel3->Visible = false;
			panel4->Visible = true;
		}
		else if (selectedStdgraphtype == "Histogram") {
			panel1->Visible = true;
			panel2->Visible = false;
			panel3->Visible = false;
			panel4->Visible = true;
		}
		else if (selectedStdgraphtype == "3D Scatter" || selectedStdgraphtype == "Surface Plot") {
			panel1->Visible = true;
			panel2->Visible = true;
			panel3->Visible = true;
			panel4->Visible = true;
		}


	}
	};
}