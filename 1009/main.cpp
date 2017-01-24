#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string temp;
	vector<string> res;
	while(cin>>temp){
		res.push_back(temp);
	}
	for(int i=res.size()-1;i>=1;--i){
		cout<<res[i]<<" ";
	}
	cout<<res[0]<<endl;
	return 0;
}