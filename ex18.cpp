#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float t;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe o n�mero de lados iguais do tri�ngulo: ";
	cin >> t;
	
	if (t == 3){
		cout << "o tri�ngulo � equil�tero";
	}
	
	if (t == 2){
		cout << "o tri�ngulo � is�sceles";
	}
	
	if (t == 0){
		cout << "o tri�ngulo � escaleno";
	}



}
