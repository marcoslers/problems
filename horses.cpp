#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
int main(){
	int t,n,val;
	vector<int> vec;

	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>val;
			vec.push_back(val);
		}
		sort(vec.begin(),vec.begin()+n);
		int min=1000000000,aux;
		for(int i=1;i<n;i++){
			aux=vec[i]-vec[i-1];
			if(aux<min)	min=aux;
		}
		cout<<min<<endl;
		vec.clear();
	}
}	