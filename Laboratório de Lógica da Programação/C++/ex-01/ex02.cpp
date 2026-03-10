#include<iostream>
#include<locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	int num, sucessor, antecessor;
	cout << "Digite um número: ";
	cin >> num;
	antecessor = num-1;
	sucessor = num+1;
	cout << "O ANTECESSOR DE  " <<num<< " é: " <<antecessor<< " e o SUCESSOR é: " <<sucessor;
}
