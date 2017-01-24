#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main(){
	string s1,s2,s3;
	getline(cin,s1);
	cin>>s2;
	if(s1.length()==0){
		cout<<s2<<endl;
		return 0;
	}
	unordered_set<char> hashtable;
	for(int i=0;i<s1.length();++i){
		hashtable.insert(toupper(s1[i]));
	}
	bool flag=false;
	if(hashtable.find('+')!=hashtable.end())
		flag=true;
	for(int i=0;i<s2.length();++i){
		if(flag)
			if(s2[i]>='A' && s2[i]<='Z'){
				continue;
			}
		if(hashtable.find(toupper(s2[i]))!=hashtable.end()){
			continue;
		}
		s3+=s2[i];
	}
	cout<<s3<<endl;
	return 0;
}