#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	float a1, a2, a3;
	
	cout << "Determine o valor do primeiro �ngulo: ";
	cin >> a1;
	
	cout << "Determine o valor do segundo �ngulo: ";
	cin >> a2;
	
	cout << "Determine o valor do terceiro �ngulo: ";
	cin >> a3;
	
	if (a1 == 90 or a2 == 90 or a3 == 90){
		cout << "O tri�ngulo � ret�ngulo";
	} 
	
	if (a1>90 or a2>90 or a3>90){
		cout << "O tri�ngulo � obtus�ngulo";
	}
		
	if (a1<90 && a2<90 && a3<90){
		cout << "O tri�ngulo � acut�ngulo";
	}
}

