#include <iostream>
#include <vector>
#include <string>

using namespace std;

inline int char2int(const char& c){
	return c-'0';
}


int main(){
	vector<int> weight({7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2});
	vector<char> M({'1','0','X','9','8','7','6','5','4','3','2'});
	int n;
	cin>>n;
	if(n==0){
		cout<<"All passed"<<endl;
		return 0;
	}
	string s;
	int cnt=0;
	for(int i=0;i<n;++i){
		cin>>s;
		if(s.length()!=18){
			cout<<s<<endl;
			++cnt;
			continue;
		}
		int sum=0;
		bool flag=false;
		for(int j=0;j<s.length()-1;++j){
			if(s[j]>'9' || s[j]<'0'){
				flag=true;
				break;
			}
			sum += char2int(s[j])*weight[j];
		}
		if(flag){
			cout<<s<<endl;
			++cnt;
			continue;
		}
		char c=M[sum%11];
		//cout<<"sum="<<sum<<" sum%11="<<sum%11<<" c="<<c<<endl;
		if(c!=s[s.length()-1]){
			cout<<s<<endl;
			++cnt;
		}
	}
	if(cnt == 0){
		cout<<"All passed"<<endl;
	}
	return 0;
}
