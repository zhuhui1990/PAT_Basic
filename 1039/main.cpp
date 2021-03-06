#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	unordered_map<char,int> ht1,ht2;
	for(int i=0;i<s1.length();++i){
		++ht1[s1[i]];
	}
	for(int i=0;i<s2.length();++i){
		++ht2[s2[i]];
	}
	int more=0,less=0;
	for(auto it2=ht2.begin();it2!=ht2.end();++it2){
		auto it1=ht1.find(it2->first);
		if(it1!=ht1.end() && it1->second < it2->second)
			less+=it2->second - it1->second;
		else if(it1==ht1.end())
			less+=it2->second;
	}
	if(less>0)
		cout<<"No "<<less<<endl;
	else
		cout<<"Yes "<<s1.length()-s2.length()<<endl;
	return 0;
}