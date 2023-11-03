#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "Mayuri R. Chavda"<<endl;
    cout << "220130318091"<<endl;
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
