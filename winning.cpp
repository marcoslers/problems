#include<iostream>
using namespace std;
int main(){
	int t,n;
	long long int aux,val1,val2;
	cin>>t;

	for(int i=0;i<t;i++){
		cin>>n;
		val1=0;
		val2=0;
		for(int j=0;j<n;j++){
			cin>>aux;
			if(j<3){
				if(j==0)val1+=aux;
				else val2+=aux;
			}else{
				if((j%2)!=0) val1+=aux;
				else val2+=aux;	
			}
		}
		if(val1>val2)cout<<"first"<<endl;
		else if(val2>val1)cout<<"second"<<endl;
		else cout<<"draw"<<endl;
	}

}