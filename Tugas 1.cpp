#include<iostream> 

using namespace std;
int main(){
	
	int a;
	int b;
	
	while(true){
	
	cout << "Masukan bilangan ganjil : " ;
	cin >> a;
	
	cout << "Masukan bilangan genap : " ;
	cin >> b;
	
	if ( a % 2 != 0 && b % 2 == 0 ){
		cout<< "Benar, " << a << " Bilangan Ganjil dan " <<  b << " Bilangan Genap";
		break;
		
	} else if ( a % 2 == 0 && b % 2 != 0){
		cout << "Salah, " << a << " Bilangan Genap dan " <<  b << " Bilangan Ganjil";
		cout << endl << endl;
		continue;
		
	} else if ( a % 2 == 0){
		cout << "Salah, " << a << " Bilangan Genap";
		cout << endl << endl;
		continue;
		
		
	} else if ( b % 2 != 0){
		cout << "Salah, " << b << " Bilangan Ganjil";
		cout << endl << endl;
		continue;
	}
		
	}	
	
	return 0;
		

	
	
	
}
