#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string A;
	string vardas;
	cout << "Koks Jusu vardas?" << endl;
	cin >> vardas;
	string zinute;
	if(vardas.back() == 'a' || vardas.back() == 'e'){
		zinute = "Sveika"; // ???
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
	A+="\n";
	A+= "* ";
	for(int I = 0; I < zinute.length(); I++){
		A+=" ";
	}
	for(int H = 0; H < vardas.length() + 3; H++){
		A+=" ";
	}
	A += " *";
	A += "\n";
	A += "* ";
	A += zinute;
	A += ", ";
	A += vardas;
	A += "! *";
	A += "\n";
		A+= "* ";
	for(int I = 0; I < zinute.length(); I++){
		A+=" ";
	}
	for(int H = 0; H < vardas.length() + 3; H++){
		A+=" ";
	}
	A += " *";
	A += "\n";
	A += "**";
	for(int I = 0; I < zinute.length(); I++){
		A+="*";
	}
	for(int H = 0; H < vardas.length() + 3; H++){
		A+="*";
	}
	A+="**";
	cout << A << endl;
	return 0;
}
