#include<iostream>
#include<locale.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, sucessor, antecessor;
	
	cout << "Digite um número inteiro: ";
	cin >> n1;
	sucessor = n1 + 1;
	antecessor = n1 - 1;
	cout << "O antecessor e o sucessor do número " <<n1<< " é " <<antecessor<< " e "
<<sucessor;
}
