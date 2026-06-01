#include <iostream>
using namespace std;

int main()
{
    try // membuat isi try buat pengujian error
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
    // kondisi jika data selain tipe integer
    catch (...)
    {
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}