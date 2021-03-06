#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int factor(int num){
	int n=sqrt(num);
	while(n>=1){
		if(num%n==0)
			return n;
		--n;
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0;i<n;++i){
		cin>>nums[i];
	}
	sort(nums.begin(),nums.end(),[](int a,int b){return a>=b;});
	int nn=factor(n);
	int mm=n/nn;
	vector<vector<int>> mat(mm,vector<int>(nn,-1));
	mat[0][0]=nums[0];
	int direction=0;
	int iloc=0,jloc=0;
	for(int i=1;i<n;++i){
		if(direction == 0){
			++jloc;
			if(jloc>=nn || mat[iloc][jloc]>0){
				--jloc;
				++direction;
			}
		}
		if(direction == 1){
			++iloc;
			if(iloc>=mm || mat[iloc][jloc]>0){
				--iloc;
				++direction;
			}
		}
		if(direction == 2){
			--jloc;
			if(jloc<0 || mat[iloc][jloc]>0){
				++jloc;
				++direction;
			}
		}
		if(direction ==3){
			--iloc;
			if(iloc<0 || mat[iloc][jloc]>0){
				++iloc;
				direction=0;
				++jloc;
			}
		}
		//cout<<"i="<<i<<" nums[i]="<<nums[i]<<" iloc="<<iloc<<" jloc="<<jloc<<endl;
		mat[iloc][jloc]=nums[i];
	}
	for(int i=0;i<mm;++i){
		for(int j=0;j<nn-1;++j){
			cout<<mat[i][j]<<" ";
		}
		cout<<mat[i][nn-1]<<endl;
	}
	return 0;
}