#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string s;
	vector<string> numbers({"ling","yi","er","san","si","wu","liu","qi","ba","jiu"});
	while(cin>>s){
		int res=0;
		for(int i=0;i<s.length();++i){
			res += s[i]-'0';
		}
		string output;
		while(res>0){
			int digit = res % 10;
			output = numbers[digit] + " " + output;
			res /= 10;
		}
		output.pop_back();
		cout<<output<<endl;
	}
	return 0;
}