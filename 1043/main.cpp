#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	string s;
	cin>>s;
	vector<int> vec(6,0);
	string PATest("PATest");
	for(int i=0;i<s.length();++i){
		switch(s[i]){
			case('P'):{
				++vec[0];
				break;
			}case('A'):{
				++vec[1];
				break;
			}case('T'):{
				++vec[2];
				break;
			}case('e'):{
				++vec[3];
				break;
			}case('s'):{
				++vec[4];
				break;
			}case('t'):{
				++vec[5];
				break;
			}default:{
				break;
			}
		}
	}
	int sum=vec[0]+vec[1]+vec[2]+vec[3]+vec[4]+vec[5];
	while(sum > 0){
		for(int i=0;i<6;++i){
			if(vec[i]>0){
				--vec[i];
				--sum;
				cout<<PATest[i];
			}
		}
	}
	cout<<endl;
	return 0;
}