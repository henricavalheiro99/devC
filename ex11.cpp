#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float N1, N2, N3;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe um n�mero: ";
	cin >> N1;
	
	cout << "informe um segundo n�mero: ";
	cin >> N2;
	
	cout << "informe um terceiro n�mero: ";
	cin >> N3;
	
	if (N1>N2 && N1>N3){
		cout << "o primeiro n�mero � o maior";
	}
	
	if (N2>N1 && N2>N3){
		cout << "o segundo n�mero � o maior";
	}
	
	if (N3>N2 && N3>N1){
		cout << "o primeiro n�mero � o maior";
	}
	
}
