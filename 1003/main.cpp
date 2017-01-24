#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		string s;
		cin>>s;
		bool flag(true);
		for(int jj=0;jj<s.length();++jj){
			if(s[jj] != 'P' && s[jj] != 'A' && s[jj] != 'T'){
				flag = false;
				break;
			}
		}
		if(flag){
			int j=0;
			for(;j<s.length();++j){
				if(s[j]=='P')
					break;
			}
			int a=j;
			for(;j<s.length();++j){
				if(s[j]=='T')
					break;
			}
			int b=j-a-1;
			int c=s.length()-j-1;
			if(b == 0)
				flag=false;
			if(c != a * b)
				flag=false;
		}
			
			
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}