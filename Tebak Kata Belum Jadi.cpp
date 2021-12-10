#include <iostream>
using namespace std; 

int main (){
	string jawaban = "TteokBboki"; 
	string clue = "T__o_B___i"; 
	string jawab, ya; 
	
	
	do{
	system ("CLS"); 
		cout << "Pertanyaan : Salah satu Makanan khas Korea" <<endl;
		cout << clue <<endl; 
		 
		for (int i=0; i<3; i++){
			cout << "Jawaban Kamu : "; cin >> jawab; 
		if (jawab==jawaban){
			cout << "Mantappujiwa"<<endl; 
			break; 
		}
		
		else {
			cout <<"zonkk"<<endl; 
		}
		cout << "ingin bermain lagi?"; cin >> ya; 
		}
		
	}
	while (ya == "y" || ya == "Y"); 
	
	return 0; 
}
