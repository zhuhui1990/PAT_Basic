#include <iostream>
#include <string>

using namespace std;

int main(){
	string a,b;
	int da,db;
	cin>>a>>da>>b>>db;
	int cnta,cntb;
	int pa=0,pb=0;
	for(int i=0;i<a.length();++i){
		if(a[i]==da+48){
			pa *= 10;
			pa += da;
		}
	}
	for(int i=0;i<b.length();++i){
		if(b[i]==db+48){
			pb *= 10;
			pb += db;
		}
	}
	
	cout<<pa+pb<<endl;
	return 0;
}