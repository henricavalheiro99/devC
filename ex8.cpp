#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float N;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe um n�mero: ";
	cin >> N;
	
	if (N > 0){
		cout << "seu n�mero � positivo";
	} else if (N == 0){
		cout << "seu n�mero � igual a 0";
	} else {
		cout << "seu n�mero � negativo";
	}
	
}
