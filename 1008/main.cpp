#include <iostream>
#include <vector>
using namespace std;

int main(){
	//只控制输出的过程
	int m,n;
	while(cin>>n>>m){
		int offset=n-m%n;
		vector<int> nums;
		int temp;
		for(int i=0;i<n;++i){
			cin>>temp;
			nums.push_back(temp);
		}
		for(int i=0;i<n-1;++i){
			int loc=(i+offset)%n;
			cout<<nums[loc]<<" ";
		}
		int loc=(n-1+offset)%n;
		cout<<nums[loc]<<endl;
	}
	return 0;
}