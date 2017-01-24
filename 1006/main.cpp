#include <iostream>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		int a,b,c;
		a = n%10;
		n /= 10;
		b = n%10;
		n /= 10;
		c = n%10;
		for(int i=0;i<c;++i){
			cout<<"B";
		}
		for(int i=0;i<b;++i){
			cout<<"S";
		}
		for(int i=0;i<a;++i){
			cout<<i+1;
		}
		cout<<endl;
	}
	return 0;
}