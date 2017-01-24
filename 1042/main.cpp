#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	unordered_map<char,int> hashtable;
	char c;
	for(int i=0;i<s.length();++i){
		c=tolower(s[i]);
		if(c>='a' && c<='z')
			++hashtable[c];
	}
	int max=0;
	char maxletter='z'+1;
	for(auto it=hashtable.begin();it!=hashtable.end();++it){
		if(it->second > max){
			max=it->second;
			maxletter=it->first;
		}else if(it->second ==max && it->first < maxletter ){
			maxletter=it->first;
		}
	}
	cout<<maxletter<<" "<<max<<endl;
	return 0;
}