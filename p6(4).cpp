#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout<< "Janvi K.Chavda" << endl; 
    cout << "220130318090" << endl;
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (inputFile.is_open() && outputFile.is_open()) {
        char character;
        while (inputFile.get(character)) {
            outputFile.put(character);
        }

        inputFile.close();
        outputFile.close();

        cout << "File copied successfully." << endl;
    } else {
        cerr << "Unable to open files for copying." << endl;
        return 1;
    }

    return 0;
}
