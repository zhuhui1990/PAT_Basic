#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
	int n,k;
	cin>>n;
	if(n==0){
		return 0;
	}
	unordered_map<int,int> hashtable;
	int temp;
	for(int i=0;i<n;++i){
		cin>>temp;
		++hashtable[temp];
	}
	cin>>k;
	for(int i=0;i<k-1;++i){
		cin>>temp;
		if(hashtable.find(temp)!=hashtable.end()){
			cout<<hashtable[temp]<<" ";
		}else{
			cout<<"0 ";
		}
	}
	cin>>temp;
	if(hashtable.find(temp)!=hashtable.end()){
		cout<<hashtable[temp]<<endl;
	}else{
		cout<<"0"<<endl;
	}
	return 0;
}