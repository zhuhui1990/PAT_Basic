#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int cnta=0,cntb=0;
	int a,b,c,d;
	for(int i=0;i<n;++i){
		cin>>a>>b>>c>>d;
		if(b==a+c && b!=d){
			++cntb;
		}else if(d==a+c && b!=d){
			++cnta;
		}
	}
	cout<<cnta<<" "<<cntb<<endl;
	return 0;
}