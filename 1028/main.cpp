#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

struct Person{
	string name;
	long birthday;
	inline bool operator <(const Person& rhs) const{
		return birthday<rhs.birthday;
	}
};



int main(){
	int n;
	cin>>n;
	int year,month,day;
	const long early=1814*400+9*40+6;
	const long late=2014*400+9*40+6;
	vector<Person> people;
	string temp;
	Person p1;
	for(int i=0;i<n;++i){
		cin>>temp;
		scanf("%4d/%2d/%2d",&year,&month,&day);
		long date=year*400+month*40+day;
		if(date<=late && date>=early){
			p1.name=temp;
			p1.birthday=date;
			people.push_back(p1);
		}
	}
	if(people.size()==0){
		cout<<0<<endl;
		return 0;
	}
	sort(people.begin(),people.end());
	cout<<people.size()<<" "<<people[0].name<<" "<<people[people.size()-1].name<<endl;
	return 0;
}