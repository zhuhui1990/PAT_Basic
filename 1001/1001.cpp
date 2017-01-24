#include <iostream>

using namespace std;

int main(){
	int n,res;
	while(cin>>n){
		res=0;
		while(n>1){
			if(n%2 != 0){
				n *= 3;
				n += 1;
				n /= 2;
			}else{
				n /= 2;
			}
			++res;
		}
		cout<<res<<endl;
	}
	return 0;
}