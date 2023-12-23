#include <iostream>
#include <cmath>

using namespace std;

    double LuasPersegi(double Sisi) {
    return pow(Sisi, 2);
    }
    
    double LuasPersegiPanjang (double Panjang, double Lebar){
    return Panjang * Lebar;
    }
    
    // Nilai PI 
    double PI = 3.14; 
    double lingkaran(double jarijari) {
    return PI * pow(jarijari, 2);
}

int main() {
    
    string BangunDatar;
    
    cout << "PROGRAM MENGHITUNG BANGUN DATAR" << endl << endl;
    
    while (true){
    cout << "1. LUAS PERSEGI" << endl;
    cout << "2. LUAS PERSEGI PANJANG" << endl;
    cout << "3. LUAS LINGKARAN" << endl;
    cout << "MASUKKAN BANGUN DATAR YANG INGIN ANDA HITUNG LUASNYA : ";
    cin >> BangunDatar;
    cout << endl;
    
        if (BangunDatar == "1"){
        
            double Sisi;
        
            cout << "MENGHITUNG LUAS PERSEGI" << endl << endl;
        
            cout << "MASUKKAN SISI PERSEGI : ";
            cin >> Sisi;
            cout << endl;

            double Luas = LuasPersegi(Sisi);

            cout << "LUAS PERSEGI DENGAN SISI " << Sisi << " CM ADALAH " << Luas << ""; 
            }
        
        else if (BangunDatar == "2"){
        
            double Panjang;
            double Lebar;
        
            cout << "MENGHITUNG LUAS PERSEGI PANJANG" << endl << endl;
        
            cout << "MASUKKAN PANJANG PERSEGI : ";
            cin >> Panjang;
            cout << endl;
        
            cout << "MASUKKAN LEBAR PERSEGI : ";
            cin >> Lebar;
            cout << endl;

            double Luas = LuasPersegiPanjang (Panjang, Lebar);

            cout << "LUAS PERSEGI PANJANG " << Panjang << " CM DAN LEBAR " << Lebar << " CM ADALAH " << Luas << ""; 
            }
        
        else if (BangunDatar == "3") {
            double jarijari;
            cout << "MASUKAN JARI-JARI: ";
            cin >> jarijari;
            cout << "LUAS LINGKARAN DENGAN JARI JARI " << jarijari << " CM ADALAH " << lingkaran(jarijari)<< "" <<endl;
        }
        else{
        cout << "MAAF, BANGUN DATAR YANG ANDA MASUKKAN TIDAK TERSEDIA" << endl << endl;
        continue;
    	}
        
        if (BangunDatar == "EXIT "){
            break;
        }
        
    cout << endl;
       
    string Next;
    
    cout << "APAKAH ANDA INGIN MENGHITUNG LUAS BANGUN DATAR YANG LAIN ? " << endl;
    cout << "KETIK YA UNTUK MELANJUTKAN" << endl;
    cout << "KETIK EXIT UNTUK BERHENTI" << endl;
    cin >> Next;
    
    
        if(Next == "YA"){
        continue;
        }
        
        else{
        cout << endl << endl;
        break;     
   		}
}
	return 0;
}
	
	
	
	

 


