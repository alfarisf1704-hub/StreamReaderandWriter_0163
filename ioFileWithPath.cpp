#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string Baris, NamaFile;
    cout << "Masukkan Nama File : " << endl;
    cin >> NamaFile;

    ofstream outfile;
    outfile.open(NamaFile + ",txt", ios::out);

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    // looping untuk menulis isi filenya
    while (true)
    {
        cout << "- ";
        // mendapat setiap karakter dalam satu baris
        getline(cin, Baris);
    }
}
