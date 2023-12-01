//upload.cpp

#include "upload.h"
#include "selection.cpp"
#include "selection.h"
std::vector<std::string> columnNamesVector;

namespace graphproject {

    // Function to get column names from a CSV or Excel file
    array<String^>^ upload::GetColumnNames(String^ filePath) {

        List<String^>^ columnNames = gcnew List<String^>();

        try {
            // Read the first line of the file
            StreamReader^ sr = gcnew StreamReader(filePath);
            String^ line = sr->ReadLine();
            sr->Close();

            // Split the line using a comma (assuming it's a CSV file)
            array<String^>^ columns = line->Split(',');
            
            //vector to store column names

            // Add each column name to the list
            for each (String ^ column in columns) {
                columnNames->Add(column->Trim());
                // Convert String^ to std::string using marshal_as
                std::string columnName = msclr::interop::marshal_as<std::string>(column);

                // Add each column name to the vector
                columnNamesVector.push_back(columnName);
            }
            /*for (const std::string& str : columnNamesVector) {
            std::cout << str << std::endl;
        }*/
            //fnn(columnNamesVector);
        }
        catch (Exception^ ex) {
            // Handle any exceptions that may occur while reading the file
            MessageBox::Show("Error reading file: " + ex->Message, "Error");
        }

        return columnNames->ToArray();
    }

    // Function to get data from a specific column
    array<String^>^ upload::GetDataFromColumn(String^ filePath, String^ columnName) {

        List<String^>^ columnData = gcnew List<String^>();

        try {
            // Read the file
            StreamReader^ sr = gcnew StreamReader(filePath);

            // Find the index of the selected column
            int columnIndex = -1;
            String^ line = sr->ReadLine();
            array<String^>^ columns = line->Split(',');
            for (int i = 0; i < columns->Length; i++) {
                if (columns[i]->Trim() == columnName->Trim()) {
                    columnIndex = i;
                    break;
                }
            }

            // If the column is found, read data from that column
            if (columnIndex != -1) {
                while ((line = sr->ReadLine()) != nullptr) {
                    array<String^>^ values = line->Split(',');
                    if (columnIndex < values->Length) {
                        columnData->Add(values[columnIndex]->Trim());
                    }
                }
            }

            sr->Close();
        }
        catch (Exception^ ex) {
            // Handle any exceptions that may occur while reading the file
            MessageBox::Show("Error reading file: " + ex->Message, "Error");
        }

        return columnData->ToArray();
    }


}
