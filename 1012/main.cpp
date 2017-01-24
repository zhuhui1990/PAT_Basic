#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int temp;
	int n;
	int a1=0,a2=0,a3=0,a5=0;
	double a4=0.;
	int cnt2=0,cnt4=0;
	int sgn=1;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>temp;
		switch(temp%5){
			case(0):{
				a1 += temp%2==0?temp:0;
				break;
			}
			case(1):{
				a2 += sgn*temp;
				sgn *= -1;
				++cnt2;
				break;
			}
			case(2):{
				++a3;
				break;
			}
			case(3):{
				a4 += temp;
				++cnt4;
				break;
			}
			case(4):{
				a5 = a5>temp? a5:temp;
				break;
			}
		}
	}
		a1==0? cout<<"N ":cout<<a1<<" ";
		cnt2==0? cout<<"N ":cout<<a2<<" ";
		a3==0? cout<<"N ":cout<<a3<<" ";
		cout<<setprecision(1)<<fixed;
		cnt4==0? cout<<"N ":cout<<a4/cnt4<<" ";
		a5==0? cout<<"N":cout<<a5;
		cout<<endl;
	return 0;
}