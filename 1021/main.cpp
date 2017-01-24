#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
	unordered_map<int,int> hash_table;
	string s;
	cin>>s;
	for(int i=0;i<s.length();++i){
		++hash_table[s[i]];
	}
	for(int i=0;i<10;++i){
		if(hash_table.find('0'+i)!=hash_table.end()){
			cout<<i<<":"<<hash_table['0'+i]<<endl;
		}
	}
	return 0;
}