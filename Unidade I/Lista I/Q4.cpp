#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float nota1, nota2, nota3, nota4, media;
	cout << "Digite  a Nota 1: ";
	cin >> nota1;
	cout << "Digite a Nota 2: "; 
	cin >> nota2;
	cout << "Digite a Nota 3: ";
	cin >> nota3;
	cout << "DIgite a Nota 4: ";
	cin >> nota4;
	cout << "A media das notas é: ";
	media = (nota1 + nota2 + nota3 + nota4)/4.0;
	cout << media;
	return 0;
	
}
