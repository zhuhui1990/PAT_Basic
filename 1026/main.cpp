#include <iostream>
#include <stdio.h>
using namespace std;

inline int round(const double& d){
	int c=int(d);
	int res;
	d-c>=0.5? res=c+1: res=c;
	return res;
}


int main(){
	int c1,c2;
	cin>>c1>>c2;
	double dtime=(c2-c1)/100.;
	int time=round(dtime);
	int sec=time%60;
	time /= 60;
	int min=time%60;
	time /= 60;
	int hour=time;
	printf("%02d:%02d:%02d\n",hour,min,sec);
	return 0;
}