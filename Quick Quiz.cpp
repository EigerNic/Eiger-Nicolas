#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
 
string s;
int n;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>s;
	int n = s.length();
	//s = "00101000"
	for(int i = 0;i < n;i++){
		if(s[i] == '0'){
			s[i] = '1';
		}else{
			s[i] = '0';
		}		
	}
	cout<<s<<"\n";
}
