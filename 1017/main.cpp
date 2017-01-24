#include <iostream>
#include <string>

using namespace std;

inline int char2int(const char& c){
	return c-'0';
}
inline char int2char(const int& a){
	return '0'+a;
}

int main(){
	string s,s2;
	int b;
	cin>>s>>b;
	if(s.length()==1){
		cout<<char2int(s[0])/b<<" "<<char2int(s[0])%b<<endl;
		return 0;
	}
	int a1,a2;
	a1=char2int(s[0]);
	if(a1>b){
			s2 += int2char(a1/b);
			a1 = a1%b;
	}
	for(int i=1;i<s.length();++i){
		a1*=10;
		a1+=char2int(s[i]);
		s2 += int2char(a1/b);
		a1 = a1%b;
	}
	
	cout<<s2<<" "<<a1;
	
	return 0;
}