#include <iostream>
#include <unordered_map>
#include <string>
#include <utility>

using namespace std;

int main(){
	int n;
	cin>>n;
	unordered_map<int,pair<string,int>> hashtable;
	string s;
	int a,b;
	for(int i=0;i<n;++i){
		cin>>s>>a>>b;
		hashtable.insert({a,make_pair(s,b)});
	}
	int m;
	cin>>m;
	for(int i=0;i<m;++i){
		cin>>a;
		auto it=hashtable.find(a);
		s=it->second.first;
		b=it->second.second;
		cout<<s<<" "<<b<<endl;
	}
	return 0;
}