#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float N1, N2;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe o primeiro n�mero: ";
	cin >> N1;
	
	cout << "informe o segundo n�mero: ";
	cin >> N2;
	
	if (N1>N2){
		cout << "o primeiro n�mero � maior";
	} else if (N1==N2){
		cout << "os n�meros s�o iguais";
	} else{
		cout << "o segundo n�mero � maior";
	}
	
	
}
