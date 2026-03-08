#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float base, altura, area;
	cout << "-------------------------------- \n";
	cout << "DESCUBRA A ÁREA DO RETÂNGULO \n";
	cout << "-------------------------------- \n";
	cout << "Qual a base? ";
	cin >> base;
	cout << "Qual a altura? ";
	cin >> altura;
	area = base * altura;
	cout << "A área do retângulo é: " <<area;
}
