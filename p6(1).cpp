#include <iostream>
#include <fstream>

using namespace std;

int main() {
    cout<< "Janvi K.Chavda" << endl; 
    cout << "220130318090" << endl;
    ofstream outfile("test.txt");
    if (outfile.is_open()) {
        outfile << "This is a test." << endl;
        outfile << "Writing to a text file in C++." << endl;
        cout << "file is created" << endl;
        outfile.close();
    } else {
        outfile<< "Unable to open the file." << endl;
        return 1;
    }

    return 0;
}
