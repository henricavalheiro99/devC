#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float sb,sa;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe seu sal�rio: ";
	cin >> sb;
	
	if (sb <= 1000){
		sa = sb * 1.15;
		cout << "o sal�rio base era: " << sb <<" e o sal�rio aumentado �: " << sa;
		
	} else if (sb >1000 && sb <=2000){
		sa = sb * 1.10;
		cout << "o sal�rio base era: " << sb <<" e o sal�rio aumentado �: " << sa;
		
	} else {
		sa = sb * 1.05;
		cout << "o sal�rio base era: " << sb <<" e o sal�rio aumentado �: " << sa;
	}
	
	
}
