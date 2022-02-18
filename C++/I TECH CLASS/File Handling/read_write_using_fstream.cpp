#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream Mywritefile("Filename.txt");
    Mywritefile << "Files can be tricky!";
    Mywritefile.close();
    string mytext;
    ifstream Myreadfile("Filename.txt");
    while(getline(Myreadfile,mytext))
    {
        cout << mytext;
    }
    Myreadfile.close();

return 0;
}