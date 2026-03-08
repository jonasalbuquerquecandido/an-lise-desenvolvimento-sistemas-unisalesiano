#include<iostream>
#include<locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float valori, desconto, valorf;
	cout << "Qual o valor do produto? ";
	cin >> valori;
	cout << "Qual o desconto? ";
	cin >> desconto;
	valorf = valori - (valori*(desconto/100));
	cout << "O valor final do produto é R$" <<valorf<<endl;
	return 0;	
}
