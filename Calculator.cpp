#include <cmath>
#include <iostream>
using namespace std;

int a, b, hasil;
char op;
int main() {
	
	cout << "Enter operator: +, -";
  	cin >> op;
  	
  	cout << "Enter two operands: ";
  	cin >> a >> b;
  	
  	if(op == '+') {
  		hasil = a + b;
	} else if(op =='-'){
		hasil = a - b;
	}
	
	cout<<hasil;
	
	
}
