// 1. int nPeserta,string nim,int nBilangan
// 2. int main()
//    
//    char nama(20)
//    string asal sekolah
// 
//    cout << "Masukkan nama" << endl;
//    cin >> nama;
// 
//    cout << "Masukkan asal sekolah" << endl;
//    cin >> asal sekolah;
// 3. i = 1
//    while i <= 5
//    print (i)
//    i += 1
//    untuk mencetak angka 1 sampai 5 dengan menggunakan while loop
// 4.  if (nBilangan % 2 ==0){
//  nBilangan == nBilangan + 1;
//   }

//    cout << "Nilai akhir = " << nBilangan << endl;
// 5. struct mata kuliah {
//    string kode matkul;
//    string jumlah sks;
//    string dosen pengampu;
//   };
//     Digunakan untuk menyimpan data yang berhubungan dengan mata kuliah

#include <iostream>
using namespace std;


int main() {
    int nSehat, nTidakSehat, nRerata;
    string status;

    cout << "Masukkan Nilai Sehat = " << endl;
    cin >> nSehat;

    cout << "Masukkan Nilai Tidak Sehat = " << endl;
    cin >> nTidakSehat;

    nRerata = nSehat + nTidakSehat / 2;


    if (nRerata > 75) {
        status = "Sehat";

    }
    else {
        status = "Tidak Sehat";
    }
    cout << "Tampilkan status = " << status << endl;

    return 0;
}





