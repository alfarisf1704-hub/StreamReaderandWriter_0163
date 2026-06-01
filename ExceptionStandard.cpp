#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1
    try
    { // deklarasi array index = 3
        array<int, 3> data = {1, 2, 3};
        // memanggil data ke 5, berarti akan error
        cout << data.at(5) << endl;
    }
    // kondisi jika error terjadi
}