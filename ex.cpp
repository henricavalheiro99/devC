#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float p1,p2,result;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	cout << "informe a primeira nota: ";
	cin >> p1;
	
	cout << "informe a segunda nota: ";
	cin >> p2;
	
	result = (p1+p2) / 2;
	
	if (result >=7){
		cout << "Você passou com a nota: " << result << " parabéns";
	} else{
		cout << "REPROVADO BURRO!: ";
	}
	
}
