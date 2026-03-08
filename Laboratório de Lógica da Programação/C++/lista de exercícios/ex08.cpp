#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salarioatual, salarionovo, percaumento, valaumento;
	cout << "-------------------------------- \n";
	cout << "VALOR DE AUMENTO E NOVO SALÁRIO \n";
	cout << "-------------------------------- \n";
	cout << "Qual o seu salário atual? ";
	cin >> salarioatual;
	cout << "Qual o percentual de aumento? ";
	cin >> percaumento;
	valaumento =  salarioatual * (percaumento/100);
	salarionovo = salarioatual + valaumento;
	cout << "\nO valor do aumento é: R$" <<valaumento;
	cout << "\nO o seu novo salário é: R$ " <<salarionovo<< endl;
	return 0;
}
