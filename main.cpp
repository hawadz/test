#include <iostream>
using namespace std;

int main() {
  char ulangi;

  do {
    int pilih_menu;

    cout << "================ Menu Utama ================ \n";

    cout << "1. Menghitung nilai akhir mahasiswa \n";
    cout << "2. Menghitung pembayaran \n";
    cout << "3. Menghitung keliling, luas, volume balok \n";

    cout << "================ \n";

    cout << "Pilih menu : ";
    cin >> pilih_menu;

    system("CLS");

    switch (pilih_menu) {
      case 1:
        do {
          int nilai_akhir, nilai_tugas, nilai_uts, nilai_uas, nilai_kehadiran;

          cout << "================ 1. Menghitung Nilai Akhir Mahasiswa ================ \n";

          cout << "Masukkan nilai tugas : ";
          cin >> nilai_tugas;

          cout << "Masukkan nilai UTS : ";
          cin >> nilai_uts;

          cout << "Masukkan nilai UAS : ";
          cin >> nilai_uas;

          cout << "Masukkan nilai kehadiran : ";
          cin >> nilai_kehadiran;

          cout << "================ \n";

          nilai_akhir = (nilai_tugas * 0.2) + (nilai_uts * 0.3) + (nilai_uas * 0.4) + (nilai_kehadiran * .1);
          cout << "Nilai akhir : " << nilai_akhir << "\n";

          if (nilai_akhir >= 90) {
            cout << "Predikat : A \n\n";
          } else if (nilai_akhir >= 80) {
            cout << "Predikat : B \n\n";
          } else if (nilai_akhir >= 60) {
            cout << "Predikat : C \n\n";
          } else if (nilai_akhir >= 50) {
            cout << "Predikat : D \n\n";
          } else {
            cout << "Predikat : E \n\n";
          }

          cout << "Ulangi (y) / kembali ke menu utama (t)? : ";
          cin >> ulangi;

          system("CLS");
        } while (ulangi == 'y');
        break;
      case 2:
        do {
          int total_pembelian, total_diskon, total_yang_harus_dibayar;

          cout << "================ 2. Menghitung Pembayaran ================ \n";

          cout << "Masukkan total pembelian : Rp ";
          cin >> total_pembelian;

          cout << "================ \n";

          if (total_pembelian >= 500000) {
            total_diskon = total_pembelian * 0.15;
            cout << "Diskon 15% : Rp " << total_diskon << "\n";

            total_yang_harus_dibayar  = total_pembelian - total_diskon;
            cout << "Total yang harus dibayar : Rp " << total_yang_harus_dibayar << "\n\n";
          } else if (total_pembelian >= 250000) {
            total_diskon = total_pembelian * 0.5;
            cout << "Diskon 5% : Rp " << total_diskon << "\n";

            total_yang_harus_dibayar  = total_pembelian - total_diskon;
            cout << "Total yang harus dibayar : Rp " << total_yang_harus_dibayar << "\n\n";
          } else {
            total_yang_harus_dibayar  = total_pembelian;
            cout << "Total yang harus dibayar : Rp " << total_yang_harus_dibayar << "\n\n";
          }

          cout << "Ulangi (y) / kembali ke menu utama (t)? : ";
          cin >> ulangi;

          system("CLS");
        } while (ulangi == 'y');
        break;
      case 3:
        do {
          int pilih_rumus, panjang_balok, lebar_balok, tinggi_balok;

          cout << "================ 3. Menghitung Keliling, Luas, Volume Balok ================ \n";
          cout << "1. Keliling \n";
          cout << "2. Luas \n";
          cout << "3. Volume \n\n";

          cout << "================ \n\n";

          cout << "Pilih rumus : ";
          cin >> pilih_rumus;

          system("CLS");

          switch (pilih_rumus) {
            case 1:
              do {
                cout << "======== 3.1. Keliling Balok ======== \n";
                cout << "Masukkan panjang balok : ";
                cin >> panjang_balok;

                cout << "Masukkan lebar balok : ";
                cin >> lebar_balok;

                cout << "Masukkan tinggi balok : ";
                cin >> tinggi_balok;

                cout << "\n================ \n\n";

                cout << "Hasil keliling [4 x (p + l + t)] : " << 4 * (panjang_balok + lebar_balok + tinggi_balok) << "\n\n";

                cout << "Ulangi (y) / kembali ke menu (t)? : ";
                cin >> ulangi;

                system("CLS");
              } while (ulangi == 'y');
              break;
            case 2:
              do {
                cout << "======== 3.2. Luas Balok ======== \n";
                cout << "Masukkan panjang balok : ";
                cin >> panjang_balok;

                cout << "Masukkan lebar balok : ";
                cin >> lebar_balok;

                cout << "Masukkan tinggi balok : ";
                cin >> tinggi_balok;

                cout << "\n================ \n\n";

                cout << "Hasil luas [2 x (pl + pt + lt)] : " << 2 * ((panjang_balok * lebar_balok) + (panjang_balok * tinggi_balok) + (lebar_balok * tinggi_balok)) << "\n\n";

                cout << "Ulangi (y) / kembali ke menu (t)? : ";
                cin >> ulangi;

                system("CLS");
              } while (ulangi == 'y');
              break;
            case 3:
              do {
                cout << "======== 3.3. Volume Balok ======== \n";
                cout << "Masukkan panjang balok : ";
                cin >> panjang_balok;

                cout << "Masukkan lebar balok : ";
                cin >> lebar_balok;

                cout << "Masukkan tinggi balok : ";
                cin >> tinggi_balok;

                cout << "\n================ \n\n";

                cout << "Hasil volume (p x l x t) : " << panjang_balok * lebar_balok * tinggi_balok  << "\n\n";

                cout << "Ulangi (y) / kembali ke menu (t)? : ";
                cin >> ulangi;

                system("CLS");
              } while (ulangi == 'y');
              break;
            default:
              cout << "Tidak ada pilihan menu rumus! \n\n";
              break;
          }

           cout << "Kembali ke menu rumus (y) / menu utama (t)? : ";
           cin >> ulangi;

           system("CLS");
        } while (ulangi == 'y');
        break;
      default:
        cout << "Tidak ada pilihan menu utama! \n\n";
        break;
    }

    cout << "Kembali ke menu utama (y) / keluar (t)? : ";
    cin >> ulangi;

    system("CLS");
  } while (ulangi == 'y');

  cout << "Program selesai!";
}
