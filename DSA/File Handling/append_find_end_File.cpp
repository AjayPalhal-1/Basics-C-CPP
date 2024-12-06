#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Open the file in append mode to add data at the end
    ofstream fout("demo.txt", ios_base::app);
    if (!fout) {
        // Check if the file was successfully opened for writing
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    // String to write to the file
    string str = "Java Developer";
    fout << str << endl; // Write the string to the file with a newline
    fout.close();        // Close the output file

    // Open the file in read mode to read its contents
    ifstream fin("demo.txt");
    if (!fin) {
        // Check if the file exists or is accessible for reading
        cout << "File does not exist Vro" << endl;
        return 0;
    }

    // Read and print each line of the file until the end is reached
    while (getline(fin, str)) {
        cout << str << endl; // Print the current line to the console
    }
    fin.close(); // Close the input file

    return 0; // Exit the program
}
