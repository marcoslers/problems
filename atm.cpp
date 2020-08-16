#include<iostream>
using namespace std;
int main(){
	int x;
	float y;
	
	cin>>x>>y;

	if((x%5)==0){
		float withdraw=x+0.5;
		if(withdraw>y)printf("%.2f\n",y);
		else printf("%.2f\n",y-withdraw);
	}else printf("%.2f\n",y);
	
}