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

    while(true){
        system("cls");
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

        if (pilih >= 1 && pilih <= 6){
            break;
        } else {
            cout << "\nPilihan tidak tersedia! Mohon masukan pilihan yang benar" << endl;
            system("pause");
        }
    }

    if (pilih == 6){
        return;
    }

    int pilihIndex = pilih - 1;
    int tujuanKonversi[5];
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

    } else if (pilih == 2){
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
    } else if (pilih == 3){
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
    } else if(pilih == 4){
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
    } else if (pilih == 5){
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
    string menuSuhu[4] = {
        "Celcius", 
        "Fahrenheit", 
        "Kelvin", 
        "Kembali ke menu utama"
    };

    int pilih, pilihKonversi;
    char ulang;
    double nilai, hasil;

    do{
        while (true){
            system("cls");
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
    
            if (pilih >= 1 && pilih <= 4) {
                break;
            } else {
                cout << "\nPilihan tidak tersedia! Mohon masukan pilihan yang benar" << endl;
                system("pause");
            }
        }

        if (pilih == 4){
            return;
        }
    
        int pilihIndex = pilih - 1;
        int tujuanKonversi[3];
        
        if (pilih == 1){
            cout << "\n" << menuSuhu[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
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
            cout << "\nMasukkan jumlah nilai " << menuSuhu[pilihIndex] << " untuk dikonversi ke " << menuSuhu[indexTujuan] << ": ";
            cin >> nilai;
    
            if (pilihKonversi == 1){
                hasil = (nilai * 9 / 5) + 32;
            } else if (pilihKonversi == 2){
                hasil = nilai + 273.15;
            }
    
            cout << nilai << " " << menuSuhu[pilih - 1] << " = " << hasil << " " << menuSuhu[indexTujuan] << endl;

        } if (pilih == 2){
            cout << "\n" << menuSuhu[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
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
            cout << "\nMasukkan jumlah nilai " << menuSuhu[pilihIndex] << " untuk dikonversi ke " << menuSuhu[indexTujuan] << ": ";
            cin >> nilai;
    
            if (pilihKonversi == 1){
                hasil = (nilai - 32) * 5 / 9;
            } else if (pilihKonversi == 2){
                hasil = (nilai - 32) * 5 / 9 + 273.15;
            }
    
            cout << nilai << " " << menuSuhu[pilih - 1] << " = " << hasil << " " << menuSuhu[indexTujuan] << endl;
        } if (pilih == 3){
            cout << "\n" << menuSuhu[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
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
            cout << "\nMasukkan jumlah nilai " << menuSuhu[pilihIndex] << " untuk dikonversi ke " << menuSuhu[indexTujuan] << ": ";
            cin >> nilai;
    
            if (pilihKonversi == 1){
                hasil = nilai - 273.15;
            } else if (pilihKonversi == 2){
                hasil = (nilai - 273.15) * 9 / 5 + 32;
            }
    
            cout << nilai << " " << menuSuhu[pilih - 1] << " = " << hasil << " " << menuSuhu[indexTujuan] << endl;
        }

        cout << "Ulangi konversi suhu?(y/t): ";
        cin >> ulang;

        if (ulang == 't' || ulang == 'T'){
            exit(0); 
        }
            
    } while(ulang == 'y' || ulang == 'Y');
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

        if (pilihMenu == 1) {
            system("cls");
            konversiMataUang();
        } else if (pilihMenu == 2) {
            system("cls");
            konversiSuhu();
        } else if(pilihMenu == 3){
            cout << "Terimakasih" << endl;
            break;
        }else {
            cout << "\nPilihan tidak tersedia! Mohon masukan pilihan yang benar" << endl;
            system("pause");
        }
    }
    system("cls");
}

int main(){
    mainMenu();
}