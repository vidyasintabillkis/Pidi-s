#include <iostream>
#include <windows.h>

using namespace std; 
	
void easy ( ){
	string jawaban = "J.K. Rowling", clue, jawab; 
	bool benar = false; 
	clue = "J._. R___i__";
	
	
	do {
		cout << "Who is the author of Harry Potter Series?" <<endl; 
		cout << "The Clue is : " << clue << endl; 
		
		cout << "The Answers : "; cin >> jawab; 
		
		if (jawab == "J.K. Rowling"){
//			benar = true;
			cout << "Cool, You must be Potterhead right!" <<endl; 
		} else {
			cout << "Sorry, You're less right. The Answer is J.K. Rowling" <<endl; 
		}
		cout << endl; 
	} while ((benar) && (!benar));
	
		if (benar){
			cout << "Congratulations!!!" <<endl;
		} else {
			cout << "Never Give Up!!!" <<endl; 
		}
	
}

int main (){
	
	easy(); 
	
	return 0; 
}
