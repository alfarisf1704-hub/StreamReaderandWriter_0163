#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string Baris, NamaFile;
    cout << "Masukkan Nama File : " << endl;
    cin >> NamaFile;

    // membuat file mode menulis
    ofstream outfile;
    outfile.open(NamaFile + ",txt", ios::out);

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
    infile.open(NamaFile + ",txt", ios::in);

    cout << endl
         << ">= Membuka dan membaca file" << endl;
    // jika file ada
    if (infile.is_open())
    {
        while (getline(infile, Baris))
        {
            cout << Baris << endl;
        }
        infile.close();
    }
    else
        cout << "Unable to oprn file" << endl;
    return 0;
}
