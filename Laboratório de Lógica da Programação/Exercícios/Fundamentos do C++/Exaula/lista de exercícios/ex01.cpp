#include<iostream>
#include<locale>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n1, n2, soma;
	cout << "Digite um número: ";
	cin >> n1;
	cout << "Digite o segundo número: ";
	cin >> n2;
	soma = n1+n2;
	cout << "A soma de " <<n1<< " e " <<n2<< " é: " <<soma;
}
