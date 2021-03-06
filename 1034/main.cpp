#include <iostream>
#include <stdio.h>
using namespace std;

long long gcd(long long a,long long b){
	if(a==0 || b==0)
		return 1;
	a=a>0?a:-a;
	b=b>0?b:-b;
	long long min=a<=b?a:b;
	long long max=a>=b?a:b;
	if(max%min==0)
		return min;
	else
		return gcd(min,max%min);
}

inline void reduction(long long& num, long long& denom){
	long long a=gcd(num,denom);
	num /= a;
	denom /= a;
	if(denom<0){
		num *= -1;
		denom *= -1;
	}
}

void output(const long long& num, const long long& denom){
	if(num==0){
		cout<<"0";
		return;
	}
	if(num<0)
		cout<<"(";
	long long i=num/denom;
	if(i>=1 || i<=-1){
		cout<<i;
	}
	long long num1;
	if(denom!=1)
		num1=num%denom;
	else
		num1=num;
	if(i<0)
		num1=-num1;
	if(denom!=1){
		if(num1!=0){
			if(i!=0)
				cout<<" ";
			cout<<num1;
			cout<<"/"<<denom;
		}
	}
	if(num<0)
		cout<<")";
}



int main(){
	long long num1,num2,denom1,denom2;
	scanf("%lld/%lld %lld/%lld",&num1,&denom1,&num2,&denom2);
	reduction(num1,denom1);
	reduction(num2,denom2);
	
  long long denom=denom1*denom2;
  long long num=num1*denom2+num2*denom1;
  reduction(num,denom);
	output(num1,denom1);
	cout<<" + ";
	output(num2,denom2);
	cout<<" = ";
  output(num,denom);
	cout<<endl;
	
	num=num1*denom2-num2*denom1;
	denom=denom1*denom2;
	reduction(num,denom);
	output(num1,denom1);
	cout<<" - ";
	output(num2,denom2);
	cout<<" = ";
	output(num,denom);
	cout<<endl;
	
	num=num1*num2;
	denom=denom1*denom2;
	reduction(num,denom);
	output(num1,denom1);
	cout<<" * ";
	output(num2,denom2);
	cout<<" = ";
	output(num,denom);
	cout<<endl;
	

	output(num1,denom1);
	cout<<" / ";
	output(num2,denom2);
	cout<<" = ";
	num=num1*denom2;
	denom=denom1*num2;
	if(denom==0)
		cout<<"Inf"<<endl;
	else{
		reduction(num,denom);
		output(num,denom);
		cout<<endl;
	}
	return 0;
}