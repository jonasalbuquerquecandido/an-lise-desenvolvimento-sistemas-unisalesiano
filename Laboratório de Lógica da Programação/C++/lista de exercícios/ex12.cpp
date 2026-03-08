#include<iostream>
#include<locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float peso, altura, imc;
	cout << "Qual o peso em kg? ";
	cin >> peso;
	cout << "Qual a altura em metros? ";
	cin >> altura;
	imc = peso / (altura * altura);
	cout << "O IMC é: " <<imc<<endl;
	return 0;
}
