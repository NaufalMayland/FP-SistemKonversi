#include <iostream>
using namespace std;

void konversiSatuanBerat(){
    string menuSatuanBerat[10] = {
        "Ton(t)",
        "Kwintal(kw)",
        "Kilogram(kg)",
        "Hektogram(hg)",
        "Dekagram(dag)",
        "Gram(g)",
        "Desigram(dg)",
        "Centigram(cg)",
        "Miligram(mg)",
        "Kembali ke menu utama",
    };

    int pilih, pilihKonversi;
    char ulang;
    double nilai, hasil;

    do{
        while (true){
            system("cls");
            cout << "======================================" << endl;
            cout << "KONVERSI SATUAN BERAT" << endl;
            cout << "======================================" << endl;
            cout << "Pilih satuan berat yang ingin dikonversi:" << endl;
            for (int i = 0; i <= 9; i++){
                cout << i + 1 << ". " << menuSatuanBerat[i] << endl;
            }
            cout << "======================================" << endl;
            cout << "Pilih: ";
            cin >> pilih;
    
            if (pilih >= 1 && pilih <= 10) {
                break;
            } else {
                cout << "\nPilihan tidak tersedia! Mohon masukan pilihan yang benar" << endl;
                system("pause");
            }
        }

        if (pilih == 10){
            return;
        }

        int pilihIndex = pilih - 1;
        int tujuanKonversi[9];

        if (pilih == 1){
            cout << "\n" << menuSatuanBerat[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanBerat[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanBerat[pilihIndex] << " untuk dikonversi ke " << menuSatuanBerat[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai * 10;
            } else if (pilihKonversi == 2){
                hasil = nilai * 1000;
            } else if (pilihKonversi == 3){
                hasil = nilai * 10000;
            } else if (pilihKonversi == 4){
                hasil = nilai * 100000;
            } else if (pilihKonversi == 5){
                hasil = nilai * 1000000;
            } else if (pilihKonversi == 6){
                hasil = nilai * 10000000;
            } else if (pilihKonversi == 7){
                hasil = nilai * 100000000;
            } else if (pilihKonversi == 8){
                hasil = nilai * 1000000000;
            }

            cout << nilai << " " << menuSatuanBerat[pilih - 1] << " = " << hasil << " " << menuSatuanBerat[indexTujuan] << endl;
        } else if (pilih == 2){
            cout << "\n" << menuSatuanBerat[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanBerat[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanBerat[pilihIndex] << " untuk dikonversi ke " << menuSatuanBerat[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 10;
            } else if (pilihKonversi == 2){
                hasil = nilai * 100;
            } else if (pilihKonversi == 3){
                hasil = nilai * 1000;
            } else if (pilihKonversi == 4){
                hasil = nilai * 10000;
            } else if (pilihKonversi == 5){
                hasil = nilai * 100000;
            } else if (pilihKonversi == 6){
                hasil = nilai * 1000000;
            } else if (pilihKonversi == 7){
                hasil = nilai * 10000000;
            } else if (pilihKonversi == 8){
                hasil = nilai * 100000000;
            }

            cout << nilai << " " << menuSatuanBerat[pilih - 1] << " = " << hasil << " " << menuSatuanBerat[indexTujuan] << endl;
        } else if (pilih == 3){
            cout << "\n" << menuSatuanBerat[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanBerat[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanBerat[pilihIndex] << " untuk dikonversi ke " << menuSatuanBerat[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 1000;
            } else if (pilihKonversi == 2){
                hasil = nilai / 100;
            } else if (pilihKonversi == 3){
                hasil = nilai * 10;
            } else if (pilihKonversi == 4){
                hasil = nilai * 100;
            } else if (pilihKonversi == 5){
                hasil = nilai * 1000;
            } else if (pilihKonversi == 6){
                hasil = nilai * 10000;
            } else if (pilihKonversi == 7){
                hasil = nilai * 100000;
            } else if (pilihKonversi == 8){
                hasil = nilai * 1000000;
            }

            cout << nilai << " " << menuSatuanBerat[pilih - 1] << " = " << hasil << " " << menuSatuanBerat[indexTujuan] << endl;
        } else if (pilih == 4){
            cout << "\n" << menuSatuanBerat[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanBerat[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanBerat[pilihIndex] << " untuk dikonversi ke " << menuSatuanBerat[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 10000;
            } else if (pilihKonversi == 2){
                hasil = nilai / 1000;
            } else if (pilihKonversi == 3){
                hasil = nilai / 10;
            } else if (pilihKonversi == 4){
                hasil = nilai * 10;
            } else if (pilihKonversi == 5){
                hasil = nilai * 100;
            } else if (pilihKonversi == 6){
                hasil = nilai * 1000;
            } else if (pilihKonversi == 7){
                hasil = nilai * 10000;
            } else if (pilihKonversi == 8){
                hasil = nilai * 100000;
            }

            cout << nilai << " " << menuSatuanBerat[pilih - 1] << " = " << hasil << " " << menuSatuanBerat[indexTujuan] << endl;
        } else if (pilih == 5){
            cout << "\n" << menuSatuanBerat[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanBerat[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanBerat[pilihIndex] << " untuk dikonversi ke " << menuSatuanBerat[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 100000;
            } else if (pilihKonversi == 2){
                hasil = nilai / 10000;
            } else if (pilihKonversi == 3){
                hasil = nilai / 100;
            } else if (pilihKonversi == 4){
                hasil = nilai / 10;
            } else if (pilihKonversi == 5){
                hasil = nilai * 10;
            } else if (pilihKonversi == 6){
                hasil = nilai * 100;
            } else if (pilihKonversi == 7){
                hasil = nilai * 1000;
            } else if (pilihKonversi == 8){
                hasil = nilai * 10000;
            }

            cout << nilai << " " << menuSatuanBerat[pilih - 1] << " = " << hasil << " " << menuSatuanBerat[indexTujuan] << endl;
        } else if (pilih == 6){
            cout << "\n" << menuSatuanBerat[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanBerat[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanBerat[pilihIndex] << " untuk dikonversi ke " << menuSatuanBerat[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 1000000;
            } else if (pilihKonversi == 2){
                hasil = nilai / 100000;
            } else if (pilihKonversi == 3){
                hasil = nilai / 1000;
            } else if (pilihKonversi == 4){
                hasil = nilai / 100;
            } else if (pilihKonversi == 5){
                hasil = nilai / 10;
            } else if (pilihKonversi == 6){
                hasil = nilai * 10;
            } else if (pilihKonversi == 7){
                hasil = nilai * 100;
            } else if (pilihKonversi == 8){
                hasil = nilai * 1000;
            }

            cout << nilai << " " << menuSatuanBerat[pilih - 1] << " = " << hasil << " " << menuSatuanBerat[indexTujuan] << endl;
        } else if (pilih == 7){
            cout << "\n" << menuSatuanBerat[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanBerat[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanBerat[pilihIndex] << " untuk dikonversi ke " << menuSatuanBerat[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 10000000;
            } else if (pilihKonversi == 2){
                hasil = nilai / 1000000;
            } else if (pilihKonversi == 3){
                hasil = nilai / 10000;
            } else if (pilihKonversi == 4){
                hasil = nilai / 1000;
            } else if (pilihKonversi == 5){
                hasil = nilai / 100;
            } else if (pilihKonversi == 6){
                hasil = nilai / 10;
            } else if (pilihKonversi == 7){
                hasil = nilai * 10;
            } else if (pilihKonversi == 8){
                hasil = nilai * 100;
            }

            cout << nilai << " " << menuSatuanBerat[pilih - 1] << " = " << hasil << " " << menuSatuanBerat[indexTujuan] << endl;
        } else if (pilih == 8){
            cout << "\n" << menuSatuanBerat[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanBerat[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanBerat[pilihIndex] << " untuk dikonversi ke " << menuSatuanBerat[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 1000000000;
            } else if (pilihKonversi == 2){
                hasil = nilai / 100000000;
            } else if (pilihKonversi == 3){
                hasil = nilai / 1000000;
            } else if (pilihKonversi == 4){
                hasil = nilai / 100000;
            } else if (pilihKonversi == 5){
                hasil = nilai / 10000;
            } else if (pilihKonversi == 6){
                hasil = nilai / 1000;
            } else if (pilihKonversi == 7){
                hasil = nilai / 100;
            } else if (pilihKonversi == 8){
                hasil = nilai / 10;
            }

            cout << nilai << " " << menuSatuanBerat[pilih - 1] << " = " << hasil << " " << menuSatuanBerat[indexTujuan] << endl;
        } else if (pilih == 9){
            cout << "\n" << menuSatuanBerat[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanBerat[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanBerat[pilihIndex] << " untuk dikonversi ke " << menuSatuanBerat[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 1000000000;
            } else if (pilihKonversi == 2){
                hasil = nilai / 100000000;
            } else if (pilihKonversi == 3){
                hasil = nilai / 1000000;
            } else if (pilihKonversi == 4){
                hasil = nilai / 100000;
            } else if (pilihKonversi == 5){
                hasil = nilai / 10000;
            } else if (pilihKonversi == 6){
                hasil = nilai / 1000;
            } else if (pilihKonversi == 7){
                hasil = nilai / 100;
            } else if (pilihKonversi == 8){
                hasil = nilai / 10;
            }

            cout << nilai << " " << menuSatuanBerat[pilih - 1] << " = " << hasil << " " << menuSatuanBerat[indexTujuan] << endl;
        }

        cout << "Ulangi konversi?(y/t): ";
        cin >> ulang;

        if (ulang == 't' || ulang == 'T'){
            exit(0); 
        }

    } while (ulang ==  'y' || ulang == 'Y');
}

void konversiSatuanPanjang(){
    string menuSatuanPanjang[10] = {
        "Kilometer(km)",
        "Hektometer(hm)",
        "Dekameter(dam)",
        "Meter(m)",
        "Desimeter(dm)",
        "Centimeter(cm)",
        "Milimeter(mm)",
        "Kembali ke menu utama",
    };

    int pilih, pilihKonversi;
    char ulang;
    double nilai, hasil;

    do{
        while (true){
            system("cls");
            cout << "======================================" << endl;
            cout << "KONVERSI SATUAN PANJANG" << endl;
            cout << "======================================" << endl;
            cout << "Pilih satuan panjang yang ingin dikonversi:" << endl;
            for (int i = 0; i <= 7; i++){
                cout << i + 1 << ". " << menuSatuanPanjang[i] << endl;
            }
            cout << "======================================" << endl;
            cout << "Pilih: ";
            cin >> pilih;
    
            if (pilih >= 1 && pilih <= 8) {
                break;
            } else {
                cout << "\nPilihan tidak tersedia! Mohon masukan pilihan yang benar" << endl;
                system("pause");
            }
        }

        if (pilih == 8){
            return;
        }

        int pilihIndex = pilih - 1;
        int tujuanKonversi[9];

        if (pilih == 1){
            cout << "\n" << menuSatuanPanjang[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanPanjang[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanPanjang[pilihIndex] << " untuk dikonversi ke " << menuSatuanPanjang[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai * 10;
            } else if (pilihKonversi == 2){
                hasil = nilai * 100;
            } else if (pilihKonversi == 3){
                hasil = nilai * 1000;
            } else if (pilihKonversi == 4){
                hasil = nilai * 10000;
            } else if (pilihKonversi == 5){
                hasil = nilai * 100000;
            } else if (pilihKonversi == 6){
                hasil = nilai * 1000000;
            }

            cout << nilai << " " << menuSatuanPanjang[pilih - 1] << " = " << hasil << " " << menuSatuanPanjang[indexTujuan] << endl;
        } else if (pilih == 2){
            cout << "\n" << menuSatuanPanjang[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanPanjang[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanPanjang[pilihIndex] << " untuk dikonversi ke " << menuSatuanPanjang[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 10;
            } else if (pilihKonversi == 2){
                hasil = nilai * 10;
            } else if (pilihKonversi == 3){
                hasil = nilai * 100;
            } else if (pilihKonversi == 4){
                hasil = nilai * 1000;
            } else if (pilihKonversi == 5){
                hasil = nilai * 10000;
            } else if (pilihKonversi == 6){
                hasil = nilai * 100000;
            }

            cout << nilai << " " << menuSatuanPanjang[pilih - 1] << " = " << hasil << " " << menuSatuanPanjang[indexTujuan] << endl;
        } else if (pilih == 3){
            cout << "\n" << menuSatuanPanjang[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanPanjang[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanPanjang[pilihIndex] << " untuk dikonversi ke " << menuSatuanPanjang[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 100;
            } else if (pilihKonversi == 2){
                hasil = nilai / 10;
            } else if (pilihKonversi == 3){
                hasil = nilai * 10;
            } else if (pilihKonversi == 4){
                hasil = nilai * 100;
            } else if (pilihKonversi == 5){
                hasil = nilai * 1000;
            } else if (pilihKonversi == 6){
                hasil = nilai * 10000;
            }

            cout << nilai << " " << menuSatuanPanjang[pilih - 1] << " = " << hasil << " " << menuSatuanPanjang[indexTujuan] << endl;
        } else if (pilih == 4){
            cout << "\n" << menuSatuanPanjang[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanPanjang[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanPanjang[pilihIndex] << " untuk dikonversi ke " << menuSatuanPanjang[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 1000;
            } else if (pilihKonversi == 2){
                hasil = nilai / 100;
            } else if (pilihKonversi == 3){
                hasil = nilai / 10;
            } else if (pilihKonversi == 4){
                hasil = nilai * 10;
            } else if (pilihKonversi == 5){
                hasil = nilai * 100;
            } else if (pilihKonversi == 6){
                hasil = nilai * 1000;
            }

            cout << nilai << " " << menuSatuanPanjang[pilih - 1] << " = " << hasil << " " << menuSatuanPanjang[indexTujuan] << endl;
        } else if (pilih == 5){
            cout << "\n" << menuSatuanPanjang[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanPanjang[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanPanjang[pilihIndex] << " untuk dikonversi ke " << menuSatuanPanjang[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 10000;
            } else if (pilihKonversi == 2){
                hasil = nilai / 1000;
            } else if (pilihKonversi == 3){
                hasil = nilai / 100;
            } else if (pilihKonversi == 4){
                hasil = nilai / 10;
            } else if (pilihKonversi == 5){
                hasil = nilai * 10;
            } else if (pilihKonversi == 6){
                hasil = nilai * 100;
            }

            cout << nilai << " " << menuSatuanPanjang[pilih - 1] << " = " << hasil << " " << menuSatuanPanjang[indexTujuan] << endl;
        } else if (pilih == 6){
            cout << "\n" << menuSatuanPanjang[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanPanjang[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanPanjang[pilihIndex] << " untuk dikonversi ke " << menuSatuanPanjang[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 100000;
            } else if (pilihKonversi == 2){
                hasil = nilai / 10000;
            } else if (pilihKonversi == 3){
                hasil = nilai / 1000;
            } else if (pilihKonversi == 4){
                hasil = nilai / 100;
            } else if (pilihKonversi == 5){
                hasil = nilai / 10;
            } else if (pilihKonversi == 6){
                hasil = nilai * 10;
            }

            cout << nilai << " " << menuSatuanPanjang[pilih - 1] << " = " << hasil << " " << menuSatuanPanjang[indexTujuan] << endl;
        } else if (pilih == 7){
            cout << "\n" << menuSatuanPanjang[pilih - 1] << " dikoversi ke: " << endl;
            
            int nomor = 0;
            for (int i = 0; i <= 8; i++){
                if (i == pilihIndex){
                    continue;
                }
                
                cout << nomor + 1 << ". " << menuSatuanPanjang[i] << endl;
                tujuanKonversi[nomor] = i;
                nomor++;
            }
            cout << "Pilih: ";
            cin >> pilihKonversi;
    
            int indexTujuan = tujuanKonversi[pilihKonversi - 1];
            cout << "\nMasukkan jumlah nilai " << menuSatuanPanjang[pilihIndex] << " untuk dikonversi ke " << menuSatuanPanjang[indexTujuan] << ": ";
            cin >> nilai;

            if (pilihKonversi == 1){
                hasil = nilai / 1000000;
            } else if (pilihKonversi == 2){
                hasil = nilai / 100000;
            } else if (pilihKonversi == 3){
                hasil = nilai / 10000;
            } else if (pilihKonversi == 4){
                hasil = nilai / 1000;
            } else if (pilihKonversi == 5){
                hasil = nilai / 100;
            } else if (pilihKonversi == 6){
                hasil = nilai / 10;
            }

            cout << nilai << " " << menuSatuanPanjang[pilih - 1] << " = " << hasil << " " << menuSatuanPanjang[indexTujuan] << endl;
        }

        cout << "Ulangi konversi?(y/t): ";
        cin >> ulang;

        if (ulang == 't' || ulang == 'T'){
            exit(0); 
        }

    } while (ulang ==  'y' || ulang == 'Y');
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

        cout << "Ulangi konversi?(y/t): ";
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
        cout << "1. Konversi Satuan Berat" << endl;
        cout << "2. Konversi Satuan Panjang" << endl;
        cout << "3. Konversi Suhu" << endl;
        cout << "4. Exit/Keluar" << endl;
        cout << "======================================" << endl;
        cout << "Pilih: ";
        cin >> pilihMenu;

        if (pilihMenu == 1) {
            system("cls");
            konversiSatuanBerat();
        } else if (pilihMenu == 2){
            system("cls");
            konversiSatuanPanjang();
        } else if (pilihMenu == 3) {
            system("cls");
            konversiSuhu();
        } else if(pilihMenu == 4){
            cout << "Terimakasih" << endl;
            break;
        }else {
            cout << "\nPilihan tidak tersedia! Mohon masukan pilihan yang benar" << endl;
            system("pause");
        }
    }
}

int main(){
    mainMenu();
}