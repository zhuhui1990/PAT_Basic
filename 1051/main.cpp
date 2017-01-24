#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	double r1,p1,r2,p2;
	double r,p;
	double real,imag;
	cin>>r1>>p1>>r2>>p2;
	r=r1*r2;
	p=p1+p2;
	real=r*cos(p);
	imag=r*sin(p);
	if(real<0.01 && real>-0.01)
		real=0.;
	if(imag<0.01 && imag>-0.01)
		imag=0.;
	cout<<setprecision(2)<<fixed;
	cout<<real;
	if(imag>=0)
		cout<<"+";
	cout<<imag<<"i"<<endl;
}