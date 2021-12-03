#include <iostream>
using namespace std; 

void header(){
	cout << "-------------------------------------------------------------" <<endl;
	cout << "\t\t\t  WELCOME \t\t" <<endl;
	cout << "-------------------------------------------------------------" <<endl;
	cout <<endl;
	cout <<"\t\t Aplikasi ini berbasis koin \t"<<endl;
	cout <<"\t Silahkan Convert Uang-mu terlebih dahulu \t"<<endl;
	cout << "-------------------------------------------------------------" <<endl;
}

int main (){
	header();
	cout << endl;
	
	double uang, koin;
	int genre; 

	cout << "1 Koin = Rp. 10000" <<endl;
	cout << "Masukkan Jumlah Uang-mu\t : Rp. "; cin >> uang;
	koin = uang/10000;
	cout << "Koin yang kamu miliki\t : " << koin << " koin" <<endl; 
	cout <<endl;
	
		cout << "Berikut beberapa Genre Film yang tersedia \t " <<endl;
		cout << " 1. Horror " <<endl;
		cout << " 2. Anime " <<endl;
		cout << " 3. Thriller " <<endl;
		cout << " 4. Romance " << endl;
	
	cout <<endl;
	cout << "Silahkan Pilih Genre Film : "; cin >> genre;
	cout <<endl;
	if (genre == 1){
		cout << "Berikut film dari genre Horror"<<endl;
		cout << "1. The Conjuring [3.8 koin]" <<endl;
		cout << "2. Don't Breathe [5 koin]" <<endl;
		cout << "3. Us            [4.5 koin]" <<endl;
	} else if (genre == 2){
		cout << "Berikut film dari genre Anime"<<endl;
		cout << "1. Your Name\t\t [6 koin]" <<endl;
		cout << "2. Weathering With You\t [5 koin]" <<endl;
		cout << "3. Sprited Away\t\t [7 koin]" <<endl;
	} else if (genre == 3){
		cout << "Berikut film dari genre Thriller"<<endl;
		cout << "1. Fantasy Island\t [9 koin]" <<endl;
		cout << "2. The Invisible Man\t [7 koin]" <<endl;
		cout << "3. The Hunt\t\t [6.5 koin]" <<endl;
	} else if (genre == 4){
		cout << "Berikut film dari genre Romance"<<endl;
		cout << "1. Love, Rosie\t\t\t [5.6 koin]" <<endl;
		cout << "2. The Fault in Our Stars\t [7 koin]" <<endl;
		cout << "3. The Theory of Everything\t [6 koin]" <<endl;
	} else {
		cout << "Mohon maaf genre film tidak tersedia" <<endl; 
	}
	
	cout <<endl;
	cout << "Silahkan pilih Film yang ingin dibeli\t : "; cin >>  
}
