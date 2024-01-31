#include<iostream>
using namespace std;

int main (){
	string act;
	string pla;
	int age;
	
	cout<<"Usia kamu berapa \t:"<<age;
	cin>>age;
	
	cout<<"aktivitas apa \t: ";
	getline(cin, act);
	
	cout<<"Di mana kamu "<<act<<"\t: ";
	getline(cin, pla);
		
	cout<<"saya sedang "<<act<<" di "<<pla<<endl;
	cout<<"Usia saya adalah "<<age<<" tahun.";
}
