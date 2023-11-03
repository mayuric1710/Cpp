#include <iostream>
#include <fstream>
using namespace std;

int main() {

    cout<< "Janvi K.Chavda" << endl; 
    cout << "220130318090" << endl;
    ifstream inputFile("textfile.txt");
    if (inputFile.is_open()) {
        inputFile.seekg(0, ios::end);
        int length = inputFile.tellg();
        inputFile.seekg(0, ios::beg);
        inputFile.close();

        cout << "Number of characters in the file: " << length << endl;
    } else {
        cerr << "Unable to open the file." << endl;
        return 1;
    }

    return 0;
}
