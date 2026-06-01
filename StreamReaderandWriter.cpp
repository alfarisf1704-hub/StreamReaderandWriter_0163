#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // deklarasoi variabel baris untuk menyimpan data string
    string Baris;
    // membuat file mode menulis
    ofstream outfile;
    // merujuk ke sebuah nama file
    outfile.open("contohfile.txt");

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    // looping untuk menulis isi filenya
    while (true)
    {
        cout << "- ";
        // mendapat setiap karakter dalam satu baris
        getline(cin, Baris);
        // jika baris hanya berisi q
        if (Baris == "q")
            break;
        // memeasukkan nilai dalam baris
        outfile << Baris << endl;
    }
    // menutup file jika selesai ditulis
    outfile.close();

    // membuka file mode membaca
    ifstream infile;
    infile.open("contohfile.txt");

    cout << endl
         << ">= Membuka dan membaca file" << endl;
    // jika file ada
    if (infile.is_open())
    {
        // perulangan untuk memunculkan setiap baris
        while (getline(infile, Baris))
        {
            cout << Baris << endl;
        }
        infile.close();
    }
    else
        cout << "Unable to open file";
    return 0;
}
