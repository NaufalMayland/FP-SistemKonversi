#include <iostream>
using namespace std;

void konversiMataUang(){
    string menuMataUang[6] = {
        "Rupiah(IDR)", 
        "Ringgit(MYR)", 
        "Dolar(USD)", 
        "Yen(JPY)", 
        "Won(KRW)", 
        "Kembali ke menu utama"
    };

    int pilih, pilihKonversi, nilai;
    // float hasil;

    cout << "======================================" << endl;
    cout << "KONVERSI MATA UANG" << endl;
    cout << "======================================" << endl;
    cout << "Pilih mata uang yang ingin dikonversi:" << endl;
    for (int i = 0; i <= 5; i++){
        cout << i + 1 << ". " << menuMataUang[i] << endl;
    }
    cout << "======================================" << endl;
    cout << "Pilih: ";
    cin >> pilih;

    int pilihIndex = pilih - 1;
    int tujuanKonversi[4];
    int nomor = 0;

    if (pilih == 1){
        cout << "\n" << menuMataUang[pilih - 1] << " dikoversi ke: " << endl;
        for (int i = 0; i <= 4; i++){
            if (i == pilihIndex){
                continue;
            }

            cout << nomor + 1 << ". " << menuMataUang[i] << endl;
            tujuanKonversi[nomor] = i;
            nomor++;
        }
        cout << "Pilih: ";
        cin >> pilihKonversi;

        int indexTujuan = tujuanKonversi[pilihKonversi - 1];
        cout << "\nMasukkan jumlah nilai " << menuMataUang[pilih - 1] << " untuk dikonversi ke " << menuMataUang[indexTujuan];
        cin >> nilai;

    } 
}

void konversiSuhu(){
    string menuSuhu[5] = {
        "Celcius", 
        "Fahrenheit", 
        "Kelvin", 
        "Kembali ke menu utama"
    };

    int pilih, pilihKonversi;
    double nilai, hasil;

    cout << "======================================" << endl;
    cout << "KONVERSI SUHU" << endl;
    cout << "======================================" << endl;
    cout << "Pilih suhu yang ingin dikonversi:" << endl;
    for (int i = 0; i <= 3; i++){
        cout << i + 1 << ". " << menuSuhu[i] << endl;
    }
    cout << "======================================" << endl;
    cout << "Pilih: ";
    cin >> pilih;

    int pilihIndex = pilih - 1;
    int tujuanKonversi[3];
    int nomor = 0;

    if (pilih == 1){
        cout << "\n" << menuSuhu[pilih - 1] << " dikoversi ke: " << endl;
        for (int i = 0; i <= 2; i++){
            if (i == pilihIndex){
                continue;
            }
        
            cout << nomor + 1 << ". " << menuSuhu[i] << endl;
            tujuanKonversi[nomor] = i;
            nomor++;
        }
        cout << "Pilih: ";
        cin >> pilihKonversi;

        int indexTujuan = tujuanKonversi[pilihKonversi - 1];
        cout << "\nMasukkan jumlah nilai " << menuSuhu[pilih - 1] << " untuk dikonversi ke " << menuSuhu[indexTujuan] << ": ";
        cin >> nilai;

        if (pilihKonversi == 1){
            hasil = (nilai * 9 / 5) + 32;
        } else if (pilihKonversi == 2){
            hasil = nilai + 273.15;
        }

        cout << nilai << " " << menuSuhu[pilih - 1] << " = " << hasil << " " << menuSuhu[indexTujuan] << endl;
    }
}

void mainMenu(){
    int pilihMenu;

    while (true) {
        system("cls");
        cout << "======================================" << endl;
        cout << "MENU KONVERSI" << endl;
        cout << "======================================" << endl;
        cout << "1. Konversi Mata Uang" << endl;
        cout << "2. Konversi Suhu" << endl;
        cout << "3. Exit/Keluar" << endl;
        cout << "======================================" << endl;
        cout << "Pilih: ";
        cin >> pilihMenu;

        if (pilihMenu >= 1 && pilihMenu <= 3) {
            break;
        } else {
            cout << "\nPilihan tidak tersedia! Mohon masukan pilihan yang benar" << endl;
            system("pause");
        }
    }

    system("cls");

    if (pilihMenu == 1) {
        system("cls");
        konversiMataUang();
    } 
    else if (pilihMenu == 2) {
        system("cls");
        konversiSuhu();
    } 
    else {
        cout << "Terimakasih" << endl;
    }
}

int main(){
    mainMenu();
}