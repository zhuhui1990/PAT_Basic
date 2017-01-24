#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string s1;
	cin>>n>>s1;
	if(n==0)
		return 0;
	int row=1;
	int all=1;
	while(all<n){
		row += 2;
		all+=2*row;
	}
	if(all>n){
		 all -= 2*row;
		 row -= 2;
	}
	string s;
	for(int i=row;i>=1;i -= 2){
		s.clear();
		for(int j=0;j<(row-i)/2;++j){
			s = " "+s;
		}
		for(int j=0;j<i;++j){
			s += s1;
		}
		cout<<s<<endl;
	}
	for(int i=3;i<=row;i += 2){
		s.clear();
		for(int j=0;j<(row-i)/2;++j){
			s = " "+s;
		}
		for(int j=0;j<i;++j){
			s += s1;
		}
		cout<<s<<endl;
	}
	cout<<n-all<<endl;
	return 0;
}