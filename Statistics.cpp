#include<bits/stdc++.h>
using namespace std;

int n,maks,mini,bil;

int main(){
	mini = 100001;
	maks = -100001;
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>bil;
		if(bil < mini) mini = bil;
	}
	cout<<maks<<" "<<mini<<endl;
}
