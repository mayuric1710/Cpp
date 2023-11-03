#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout<< "Janvi K.Chavda" << endl; 
    cout << "220130318090" << endl; 
    ifstream infile("test.txt");
    if (infile.is_open()) {
        string line;
        while (getline(infile, line)) {
            cout << line << endl;
        }
        infile.close();
    } else {
        cerr << "Unable to open the file." << endl;
        return 1;
    }

    return 0;
}
