#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float grauc, grauf;
	cout << "-------------------------------- \n";
	cout << "DESCUBRA A TEMPERATURA EM FAHRENHEIT \n";
	cout << "-------------------------------- \n";
	cout << "Qual a temperatura em Graus Celsius? ";
	cin >> grauc;
	grauf = (grauc * 9/5) + 32;
	cout << "A temperatura de " <<grauc<< " Graus Celsius é: " <<grauf<< " Graus Fahrenheit";
}
