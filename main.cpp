/* Desta Ari Alfananda */
/* 20051397008 */
/* 2020B */

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char gol, nama[25];
    int jam_kerja, gaji, bayaran, sisa, ss, total;
    string up = "*************************************************************";

    cout << "Selamat Datang di PT. Makmur" << endl;
    cout << up << endl << endl;
    cout << " Nama : ";
    cin >> nama;
    cout << " Pilih Golongan (A/B/C/D) : ";
    cin >> gol;
    cout << " Jumlah Jam Kerja : ";
    cin >> jam_kerja;
    cout << up << endl<<endl;

       switch(gol)
{
case 'A' :
    {
        bayaran = 5000;
        break;
    }
case 'B' :
    {
        bayaran = 7000;
        break;
    }
case 'C' :
    {
        bayaran = 8000;
        break;
    }
case 'D' :
    {
    bayaran = 10000;
    break;
    }
}

    if (jam_kerja > 48)
    {
        sisa = jam_kerja - 48;
        ss = bayaran * (jam_kerja-sisa);
        total = sisa * 4000;
        gaji = ss + total;
    }
    else if (jam_kerja < 48)
    {
        gaji = bayaran * jam_kerja;
    }

    cout << " Hai " << nama << " karyawan PT. Makmur" <<endl;
    cout << " Anda termasuk golongan : " << gol << endl;
    cout << " Total gaji anda Rp. " << gaji << ",-" << endl;
    cout << " Terimakasih";


    return 0;
}

