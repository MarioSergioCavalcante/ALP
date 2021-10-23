#include <iostream>
#include <cmath>
using namespace std;
int main(){
	 float lado, area;
	cout << "Qual a dimensão do quadrado? "; 
	cin >> lado;
	cout << "A area vale: " ;
	area = pow(lado,2);
	cout << area << endl;
	cout <<"O dobro da área vale: " << 2*area << endl;
    return 0;
}
