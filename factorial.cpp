#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t,n,zN;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		zN=0;
		for(int j=1;j<=13;j++)zN+=(n/pow(5,j));

		cout<<zN<<endl;
	}
}