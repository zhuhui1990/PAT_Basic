#include <iostream>

using namespace std;

int main(){
	int n;
	char a;
	cin>>n>>a;
	for(int i=0;i<n;++i){
		cout<<a;
	}
	cout<<endl;
	int row1=(n%2==0?n/2-2:n/2-1);
	for(int i=0;i<row1;++i){
		cout<<a;
		for(int j=0;j<n-2;++j){
		cout<<" ";
		}
		cout<<a<<endl;
	}
	for(int i=0;i<n;++i){
		cout<<a;
	}
	cout<<endl;
	return 0;
}