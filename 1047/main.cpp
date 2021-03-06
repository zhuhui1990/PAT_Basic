#include <iostream>
#include <unordered_map>
#include <stdio.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	unordered_map<int,int> hashtable;
	int team,id,score;
	for(int i=0;i<n;++i){
		scanf("%d-%d %d",&team,&id,&score);
		hashtable[team] += score;
	}
	int max=0,maxteam=0;
	for(auto it=hashtable.begin();it!=hashtable.end();++it){
		if(it->second > max){
			max=it->second;
			maxteam=it->first;
		}
	}
	cout<<maxteam<<" "<<max<<endl;
	return 0;
}