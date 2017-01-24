#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string s;
	vector<vector<string>> signs(3); 
	for(int i=0;i<3;++i){
		getline(cin,s);
		string temp;
		bool flag=false;
		for(int j=0;j<s.length();++j){
			//cout<<"j="<<j<<" temp="<<temp<<" flag="<<flag<<endl;
			if(s[j]=='[')
				flag=true;
			else if(s[j]==']')
				flag=false;
			if(flag && s[j]!='[')
				temp +=s[j];
			if(s[j]==']'){
				signs[i].push_back(temp);
				temp.erase();
			}
		}
		/*
		for(int j=0;j<signs[i].size();++j){
			cout<<"i="<<i<<" j="<<j<<signs[i][j]<<endl;
		}
		cout<<endl;
		*/
	}
	int n;
	cin>>n;
	vector<int> a(5);
	for(int i=0;i<n;++i){
		for(int j=0;j<5;++j){
			cin>>a[j];
		}
		if(a[0]>signs[0].size() || a[4]>signs[0].size() ||a[0]<=0 || a[4]<=0){
			cout<<"Are you kidding me? @\\/@"<<endl;
			continue;
		}
		else if(a[1]>signs[1].size() || a[3]>signs[1].size() ||a[1]<=0 || a[3]<=0){
			cout<<"Are you kidding me? @\\/@"<<endl;
			continue;
		}
		else if(a[2]>signs[2].size() || a[2]<=0){
			cout<<"Are you kidding me? @\\/@"<<endl;
			continue;
		}
		cout<<signs[0][a[0]-1]<<"("<<signs[1][a[1]-1]<<signs[2][a[2]-1]<<signs[1][a[3]-1]<<")"<<signs[0][a[4]-1]<<endl;
	}
	

		
	return 0;
}