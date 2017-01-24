#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student{
	string name;
	string id;
	int score;
};

int main(){
	int n;
	cin>>n;
	vector<Student> stu(n);
	for(int i=0;i<n;++i){
		cin>>stu[i].name>>stu[i].id>>stu[i].score;
	}
	sort(stu.begin(),stu.end(),[](Student a,Student b){return a.score>b.score;});
	cout<<stu[0].name<<" "<<stu[0].id<<endl;
	cout<<stu[n-1].name<<" "<<stu[n-1].id<<endl;
	return 0;
}