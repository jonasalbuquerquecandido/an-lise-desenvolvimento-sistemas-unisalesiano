// Carregamento das Bibliotecas
#include<iostream>
#include<locale>
using namespace std;

int main(){ // É necessário finalizar as linhas do código com ;
	//Definir Localidade para Português do Brasil
	setlocale(LC_ALL, "portuguese");
	// int = número inteiro, float = núemro real, char/ string = caracteres
	float lado, area;
	
	cout << "Defina a medida do lado do quadrado: ";
	cin >> lado;

	area = lado * lado;
	
	cout << "A área do quadrado é: " << area ;
	

