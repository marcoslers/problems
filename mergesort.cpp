#include<iostream>
using namespace std;

void merge(int *arr,int p,int q, int r){

	int a=q+1-p,b=r-q;

	int arrL[a];
	int arrR[b];

	for(int i=0;i<a;i++) arrL[i]=arr[p+i];

	for(int i=0;i<b;i++) arrR[i]=arr[q+1+i];

	int j=0,k=0;

	for(int i=0;i<(a+b);i++){
		
		if(j<a && k<b){
			if(arrL[j]<arrR[k]){
				arr[p]=	arrL[j];
				j++;
			}else if(arrL[j]>=arrR[k]){
				arr[p]=	arrR[k];
				k++;
			}
		}else{
			if(j==a){
				arr[p]=	arrR[k];
				k++;
			}else if(k==b){
				arr[p]=	arrL[j];
				j++;
			}
		}
		p++;
	}		

}

void mergesort(int *arr,int p,int r){
	
	if (r>p){

		int q=(r+p)/2;

		mergesort(arr,p,q);
		mergesort(arr,q+1,r);
		merge(arr,p,q,r);
	}
}

int main(){
	
	int t;
	cin>>t;
	int arr[t];
	
	for(int i=0;i<t;i++) cin>>arr[i];
	
	mergesort(arr,0,t-1);

	for(int i=0;i<t;i++) cout<<arr[i]<<endl;
}
