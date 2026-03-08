#include<iostream>
#include<locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float metros, centimetros;
	cout << "---------------------------------- \n";
	cout << "QUANTOS CENTÍMETROS TEM POR METRO? \n";
	cout << "---------------------------------- \n";
	cout << "Digite quantos métros: ";
	cin >> metros;
	centimetros = metros * 100;
	cout <<metros<< " metros tem " <<centimetros<< " centímetros";
}
