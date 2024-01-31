#include<bits/stdc++.h>
using namespace std;

int n,bil,sum;

int main(){
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>bil;
		sum = sum + bil;
	}
	cout<<sum<<endl;
}
