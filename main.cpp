#include <iostream>
using namespace std;

void konversiMataUang(){
    system("cls");

    string menuMataUang[6] = {"Rupiah(IDR)", "Ringgit(MYR)", "Dolar(USD)", "Yen(JPY)", "Won(KRW)", "Kembali ke menu utama"};
    int pilih, pilihKonversi;

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

    if (pilih == 1){
        cout << "\n" << menuMataUang[0] << " dikoversi ke: " << endl;
        for (int i = 1; i <= 4; i++){
            cout << i << ". " << menuMataUang[i] << endl;
        }
        cout << "Pilih: ";
        cin >> pilihKonversi;
    }
}

void konversiSuhu(){
    system("cls");

    string menuSuhu[5] = {"Celcius", "Fahrenheit", "Kelvin", "Reamur", "Kembali ke menu utama"};

    cout << "======================================" << endl;
    cout << "KONVERSI SUHU" << endl;
    cout << "======================================" << endl;
    cout << "Pilih suhu yang ingin dikonversi:" << endl;
    for (int i = 0; i <= 4; i++){
        cout << i + 1 << ". " << menuSuhu[i] << endl;
    }
    cout << "======================================" << endl;
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
        konversiMataUang();
    } 
    else if (pilihMenu == 2) {
        konversiSuhu();
    } 
    else {
        cout << "Terimakasih" << endl;
    }
}

int main(){
    mainMenu();
}