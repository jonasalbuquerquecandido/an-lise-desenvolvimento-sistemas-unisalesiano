#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, area, pi;
	cout << "-------------------------------- \n";
	cout << "DESCUBRA A ÁREA DO CÍRCULO \n";
	cout << "-------------------------------- \n";
	cout << "Qual o raio? ";
	cin >> raio;
	pi = 3.14;
	area = pi * (raio*2);
	cout << "A área do círculo é: " <<area;
}
