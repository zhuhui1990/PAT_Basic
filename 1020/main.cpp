#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Good{
	double amt;
	double price;
	double ppa;
	bool operator < (const Good& rhs) const{
		return ppa>rhs.ppa;
	}
};

int main(){
	int n;
	double amount;
	cin>>n>>amount;
	if(n==0){
		cout<<"0.00"<<endl;
		return 0;
	}
	vector<Good> goods(n);
	for(int i=0;i<n;++i){
		cin>>goods[i].amt;
	}
	for(int i=0;i<n;++i){
		cin>>goods[i].price;
		if(goods[i].amt >0){
			goods[i].ppa=goods[i].price/goods[i].amt;
		}
		else{
			goods[i].ppa=0.;
		}
	}
	sort(goods.begin(),goods.end());
	double profit=0;
	int i=0;
	while(amount>0  && i<goods.size()){
		double curamt=min(goods[i].amt,amount);
		profit += curamt*goods[i].ppa;
		amount -= goods[i].amt;
		++i;
	}
	cout<<setprecision(2)<<fixed<<profit<<endl;
	return 0;
}