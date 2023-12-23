 #include<iostream>

using namespace std;


int main()
{
	int Harga;
	int total = 0;
	int jumlahTiket;
	int diskon = 0;
	
	int Ekonomi = 100000;
	int Bisnis = 200000;
	int Eksekutif = 300000;
	
	
	string tiket;

	
	cout << " MASUKAN JENIS TIKET YANG INGIN DI PESAN : " << endl << endl;
	cout << " 1. EKONOMI (Rp. 100.000)" << endl;
	cout << " 2. BISNIS (Rp. 200.000)" << endl;
	cout << " 3. EKSEKUTIF (Rp. 300.000)" << endl << endl;
	
	int pilihan;
	cout << "MASUKKAN PILIHAN TIKET (1. EKONOMI, 2. BISNIS, 3. EKSEKUTIF): ";
	cin >> pilihan;
	
	cout << "MASUKKAN JUMLAH TIKET YANG INGIN DI PESAN : ";
	cin >> jumlahTiket;
	
 	switch (pilihan) {
        case 1:
            total = jumlahTiket * Ekonomi;
            tiket = "EKONOMI";
            break;
            
        case 2:
            total = jumlahTiket * Bisnis;
            tiket = "BISNIS";
            break;
			
		case 3:
            total = jumlahTiket * Eksekutif;
            tiket = "EKSEKUTIF";
            break;
		    		
	}
	
	
	
	if (total >= 500000){
		diskon = 0.1 * total;	
	}
	else if (total >= 300000){
		diskon = 0.05 * total;
	}
	else if (total >= 200000){
		diskon = 0.02 * total;
	}
	
	int TotalBayar = total - diskon;
	
	
	
	cout << "DETAIL PEMESANAN: " << endl;
    cout << "JENIS TIKET     : " << tiket << endl;
    cout << "JUMLAH TIKET    : " << jumlahTiket << endl;
    cout << "TOTAL PEMBELIAN : Rp. " << total << endl;
    cout << "DISKON          : Rp. " << diskon << endl;
    cout << "TOTAL YANG HARUS DIBAYAR : Rp. " << TotalBayar << endl;

    return 0;
}

