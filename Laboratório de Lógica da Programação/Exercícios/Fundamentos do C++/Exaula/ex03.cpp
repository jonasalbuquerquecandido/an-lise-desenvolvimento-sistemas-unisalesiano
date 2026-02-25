#include<iostream>
#include<locale.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome, curso, semestre;
	
	cout << "Qual o seu nome? ";
	cin >> nome;	
	cout << "Qual o seu curso? ";
	cin >> curso;
	cout << "Em qual semestre você está?";
	cin >> semestre;
	cout << "------------------------------------- \n";
	cout << "O aluno " <<nome<< " que está cursando " <<curso<< " está no " <<semestre;
 }
