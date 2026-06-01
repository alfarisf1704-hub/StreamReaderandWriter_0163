#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Selamat belajar di prodi TI UMY" << endl;
        // throw 0.5;//melempar sebuah integer maka..
        cout << "Pernyataan tidak akan ditampilkan" << endl;
    }
    // kondisi jika data bertipe integer
    catch (int a)
    {
        cout << "Pengecualian akan dieksekusi" << endl;
    }
}