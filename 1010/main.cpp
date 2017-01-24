#include <iostream>
#include <vector>
using namespace std;


int main(){
	int temp0,temp1;
	vector<int> dif_coef,dif_pow;
	while(cin>>temp0>>temp1){
		if(temp1 > 0){
			dif_coef.push_back(temp0*temp1);
			dif_pow.push_back(temp1-1);
		}else{
			dif_coef.push_back(0);
			dif_pow.push_back(0);
		}
	}
	if(dif_coef.size()==0)
		cout<<"0 0"<<endl;
	else{
			if(dif_coef.size() == 1){
				cout<<dif_coef[0]<<" "<<dif_pow[0]<<endl;
			}else{
			for(int i=0;i<dif_coef.size()-2;++i){
				if(dif_coef[i]!=0)
					cout<<dif_coef[i]<<" "<<dif_pow[i]<<" ";
			}
			if(dif_coef[dif_coef.size()-1] != 0){
				cout<<dif_coef[dif_coef.size()-2]<<" "<<dif_pow[dif_pow.size()-2]<<" ";
				cout<<dif_coef[dif_coef.size()-1]<<" "<<dif_pow[dif_pow.size()-1]<<endl;
			}else{
				cout<<dif_coef[dif_coef.size()-2]<<" "<<dif_pow[dif_pow.size()-2]<<endl;;
			}
		}
	}
		
	return 0;
	
}