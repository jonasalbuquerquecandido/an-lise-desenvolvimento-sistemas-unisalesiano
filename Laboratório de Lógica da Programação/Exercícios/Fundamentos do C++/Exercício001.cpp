#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, soma;
	
	cout << "Digite o primeiro número: ";
	cin >> n1;
	cout << "Digite o segundo número: ";
	cin >> n2;
	soma = n1 + n2;
	cout << "A soma entre " <<n1<< " e " <<n2<< " é: " <<soma;
}
