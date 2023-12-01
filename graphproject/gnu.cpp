#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>


//void generateGnuplotScript(const std::string& graphType, const std::vector<std::string>& columnNames) {
//    std::ofstream scriptFile("gnuplot_script.gnu");
//
//    if (graphType == "Line Graph") {
//        scriptFile << "set title 'Line Graph'\n";
//        scriptFile << "plot 'data.dat' using 1:2 with lines\n";
//    }
//    else if (graphType == "Bar Graph") {
//        scriptFile << "set title 'Bar Graph'\n";
//        scriptFile << "plot 'data.dat' using 1:2 with boxes\n";
//    }
//    // Add other graph types as needed...
//
//    // Add a pause command at the end to keep the Gnuplot window open
//    scriptFile << "pause -1\n";
//
//    scriptFile.close();
//    std::string command = "gnuplot gnuplot_script.gnu";
//    system(command.c_str());
//}
/*int main() {
    std::cout << fileName;
}*/

//void fn(std::string fileName) {
//    std::ifstream dataFile(fileName);
//    if (!dataFile.is_open()) {
//        std::cerr << "Error opening file: " << fileName << std::endl;
//    }
//    // Generate data file 'data.dat' based on selected columns
//    std::ofstream dataOutputFile("data.dat");
//    if (!dataOutputFile.is_open()) {
//        std::cerr << "Error creating data file." << std::endl;
//    }
//
//    // Write column names to the data file
//    for (size_t col : selectedColumns) {
//        dataOutputFile << columnNames[col] << " ";
//    }
//    dataOutputFile << std::endl;
//
//    // Read data and write selected columns to the data file
//    while (std::getline(dataFile, line)) {
//        std::istringstream iss(line);
//        std::string columnValue;
//        size_t columnIndex = 0;
//
//        while (std::getline(iss, columnValue, ',')) {
//            if (std::find(selectedColumns.begin(), selectedColumns.end(), columnIndex) != selectedColumns.end()) {
//                dataOutputFile << columnValue << " ";
//            }
//            ++columnIndex;
//        }
//        dataOutputFile << std::endl;
//    }
//
//    dataOutputFile.close();
//    std::cout << "Selected columns written to data.dat file." << std::endl;
//
//    // Rest of your code to generate the graph goes here using selected columns and graph type...
//    generateGnuplotScript(graphType, columnNames);
//    std::cout << "Generated gnuplot script for " << graphType << " using selected columns." << std::endl;
//
//    dataFile.close();
//
//
//}
//    std::string fileName;
//    std::string graphType;
//
//    // Get the file name
//    std::cout << "Enter the path to the CSV/Excel file: ";
//    std::getline(std::cin, fileName);

//    // Store graph types in a vector
//    const std::vector<std::string> graphTypes = {
//        "Line Graph", "Bar Graph", "Histogram", "Boxplot",
//        "Scatterplot", "3D Scatter", "Surface Plot", "Wireframe"
//    };
//
//    // Print available graph types
//    std::cout << "Available graph types:" << std::endl;
//    for (size_t i = 0; i < graphTypes.size(); ++i) {
//        std::cout << i + 1 << ". " << graphTypes[i] << std::endl;
//    }
//
//    // Get user's choice for graph type
//    size_t graphChoice;
//    std::cout << "Choose a graph type (enter the number): ";
//    std::cin >> graphChoice;
//
//    // Validate user input for graph type
//    if (std::cin.fail() || graphChoice < 1 || graphChoice > graphTypes.size()) {
//        std::cerr << "Invalid choice for graph type." << std::endl;
//        return 1;
//    }
//
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//    // Set the selected graph type
//    graphType = graphTypes[graphChoice - 1];
//
//    // Open the file
//    std::ifstream dataFile(fileName);
//    if (!dataFile.is_open()) {
//        std::cerr << "Error opening file: " << fileName << std::endl;
//        return 1;
//    }
//
//    std::string line;
//    std::vector<std::string> columnNames;
//
//    // Read column names from the first line
//    if (std::getline(dataFile, line)) {
//        std::istringstream iss(line);
//        std::string columnName;
//
//        while (std::getline(iss, columnName, ',')) {
//            columnNames.push_back(columnName);
//        }
//    }
//    else {
//        std::cerr << "Empty file or unable to read column names." << std::endl;
//        return 1;
//    }
//
//    // Display column names for selection
//    std::cout << "Available columns:" << std::endl;
//    for (size_t i = 0; i < columnNames.size(); ++i) {
//        std::cout << i + 1 << ". " << columnNames[i] << std::endl;
//    }
//
//    std::vector<size_t> selectedColumns;
//
//    // Ask the user to select columns
//    std::string userInput;
//    std::cout << "Enter column numbers (separated by spaces) for the graph: ";
//    std::getline(std::cin, userInput);
//    std::istringstream input(userInput);
//    size_t columnNumber;
//
//    while (input >> columnNumber) {
//        if (columnNumber > 0 && columnNumber <= columnNames.size()) {
//            selectedColumns.push_back(columnNumber - 1); // Adjust for 0-based indexing
//        }
//        else {
//            std::cerr << "Invalid column number entered." << std::endl;
//            return 1;
//        }
//    }
//
//    if (selectedColumns.empty()) {
//        std::cerr << "No valid columns selected." << std::endl;
//        return 1;
//    }
//
//    // Generate data file 'data.dat' based on selected columns
//    std::ofstream dataOutputFile("data.dat");
//    if (!dataOutputFile.is_open()) {
//        std::cerr << "Error creating data file." << std::endl;
//        return 1;
//    }
//
//    // Write column names to the data file
//    for (size_t col : selectedColumns) {
//        dataOutputFile << columnNames[col] << " ";
//    }
//    dataOutputFile << std::endl;
//
//    // Read data and write selected columns to the data file
//    while (std::getline(dataFile, line)) {
//        std::istringstream iss(line);
//        std::string columnValue;
//        size_t columnIndex = 0;
//
//        while (std::getline(iss, columnValue, ',')) {
//            if (std::find(selectedColumns.begin(), selectedColumns.end(), columnIndex) != selectedColumns.end()) {
//                dataOutputFile << columnValue << " ";
//            }
//            ++columnIndex;
//        }
//        dataOutputFile << std::endl;
//    }
//
//    dataOutputFile.close();
//    std::cout << "Selected columns written to data.dat file." << std::endl;
//
//    // Rest of your code to generate the graph goes here using selected columns and graph type...
//    generateGnuplotScript(graphType, columnNames);
//    std::cout << "Generated gnuplot script for " << graphType << " using selected columns." << std::endl;
//
//    dataFile.close();
//
//
//    return 0;
//}