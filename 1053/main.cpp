#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n,d;
	double e;
	cin>>n>>e>>d;
	int k;
	int type1=0,type2=0;
	for(int i=0;i<n;++i){
		cin>>k;
		int cnt=0;
		double temp;
		for(int j=0;j<k;++j){
			cin>>temp;
			if(temp<e)
				++cnt;
		}
		//cout<<"i="<<i<<" k="<<k<<" cnt="<<cnt<<endl;
		if(cnt>k/2 && k>d)
			++type1;
		if(cnt>k/2 && k<=d)
			++type2;
	}
	cout<<setprecision(1)<<fixed;
	cout<<double(type2)/n*100<<"% "<<double(type1)/n*100<<"%"<<endl;
	return 0;
}