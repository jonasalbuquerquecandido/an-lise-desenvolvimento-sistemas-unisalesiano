// Carregamento das Bibliotecas
#include<iostream>
#include<locale.h>
using namespace std;

main(){ 
	// Selecionar idiomas
	setlocale(LC_ALL, "portuguese");
	
	// Declaração das variáveis
	int num, triplo;
	
	// Processamento	
	cout << "Digite um número: ";
	cin >> num;
	triplo = num * 3;
	cout << "O número: " <<num<<" possui triplo = " <<triplo<<endl;
	system("pause");
}
