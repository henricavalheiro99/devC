#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float SM, H, SB;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe seu sal�rio: ";
	cin >> SM;
	
	cout << "informe o n�mero de horas que voc� trabalha: ";
	cin >> H;
	
	SB = SM + (12 * H);
		cout << "o valor do seu sal�rio bruto � " << SB;
		
}
