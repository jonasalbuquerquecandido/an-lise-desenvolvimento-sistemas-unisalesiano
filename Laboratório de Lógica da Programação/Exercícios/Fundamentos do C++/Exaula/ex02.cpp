#include<iostream>
#include<locale.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, soma, produto;
	
	cout << "Digite o primeiro número: ";
	cin >> n1;
	cout << "Digite o segundo número: ";
	cin >> n2;
	soma = n1 + n2;
	produto = n1 * n2;
	cout << "A soma do número " <<n1<< " e " <<n2<< " é: " <<soma<<"\n";
	cout << "-------------------------------- \n";
	cout << "O produto dos números " <<n1<< " e " <<n2<< " é " <<produto;
	
	
	
	
}
