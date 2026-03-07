#include<iostream>
#include<locale>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	float n1, n2, n3, media;
	cout << "Digite um número: ";
	cin >> n1;
	cout << "Digite o segundo número: ";
	cin >> n2;
	cout << "Digite o terceiro número: ";
	cin >> n3;
	media = (n1+n2+n3)/3;
	cout << "A média dos números: " <<n1<< ", " <<n2<< " e " <<n3<< " é: " <<media;
}
