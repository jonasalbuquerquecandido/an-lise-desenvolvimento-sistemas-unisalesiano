// Carregamento das Bibliotecas
#include<iostream>
#include<locale>
using namespace std;

int main(){ // É necessário finalizar as linhas do código com ;
	//Definir Localidade para Português do Brasil
	setlocale(LC_ALL, "portuguese");
	// Saída de dados
	
	// Declarar as variáveis, float é para casas decimais 
	float nota1;
	float nota2;
	float media;
	
	// Entrada - Leitura das notas, 
	//COUT é o escreva = envia a mensagem para a tela
	//CIN é o leia = lê o conteúdo da variável
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	
	// Cálculo da média
	media = (nota1 + nota2)/2;
	
	// Saída do resultado  para o usuário
	cout << "A média dessas duas notas é : " << media;
	
	
	
	
	
	
}

