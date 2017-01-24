#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	string s;
	string pattern("0123456789JQK");
	if(a.length()>b.length()){
		int cnt=a.length()-b.length();
		for(int i=0;i<cnt;++i){
			b = "0"+b;
		}
	}else if(b.length()>a.length()){
		int cnt=b.length()-a.length();
		for(int i=0;i<cnt;++i){
			a = "0"+a;
		}
	}
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	//cout<<"a="<<a<<endl;
	//cout<<"b="<<b<<endl;

	int i=1;
	for(int i=0;i<a.length();++i){
		int aa=a[i]-'0';
		int bb=b[i]-'0';
		if(i%2==0){
			s = pattern[(aa+bb)%13]+s;
		}else{
			int cc=bb-aa;
			cc = cc<0? cc+10:cc;
			s = pattern[cc]+s;
		}
	}
	cout<<s<<endl;
	return 0;
}