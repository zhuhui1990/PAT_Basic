#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> row(10);
	int min=0;
	for(int i=0;i<10;++i){
		cin>>row[i];
	}
	for(int i=1;i<10;++i){
		if(row[i]>0){
			min=i;
			--row[i];
			break;
		}
	}
	if(min==0){
		cout<<0;
		return 0;
	}
	cout<<min;
	for(int i=0;i<10;++i){
		for(int j=0;j<row[i];++j){
			cout<<i;
		}
	}
	cout<<endl;
	return 0;
}