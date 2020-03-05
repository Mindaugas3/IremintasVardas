#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string A = "";
	string B = "";
	string C = "";
	string D = "";
	string E = "";
	string vardas;
	cout << "Koks Jusu vardas?" << endl;
	cin >> vardas;
	string zinute;
	if(vardas.back() == 'a' || vardas.back() == 'e'){
		zinute = "Sveikas"; // ???
	} else {
		zinute = "Sveikas";
	}
	A += "**";
	for(int I = 0; I < zinute.length(); I++){
		A+="*";
	}
	for(int H = 0; H < vardas.length() + 3; H++){
		A+="*";
	}
	A+="**";
	cout << A << endl;
	B+= "* ";
	for(int I = 0; I < zinute.length(); I++){
		B+=" ";
	}
	for(int H = 0; H < vardas.length() + 3; H++){
		B+=" ";
	}
	B += " *";
	cout << B << endl;
	C += "* ";
	C += zinute;
	C += ", ";
	C += vardas;
	C += "! *";
	cout << C << endl;
	D = B;
	E = A;
	cout << D << endl << E << endl;
	return 0;
}
