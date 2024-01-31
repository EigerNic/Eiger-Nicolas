#include<bits/stdc++.h>
using namespace std;

int n,sum;

int main (){
	cin>>n;
	if(n == 1){
		sum++;
		cout<<"ya"<<endl;
	}
	else while(n > 1){
		if(n % 2 == 1){
			cout<<"bukan"<<endl;
			sum++;
			break;
		}else{
			n = n / 2;
		}
	}
	if(sum == 0) cout<<"ya"<<endl;
}
