#include<stdio.h>
float simpleinterest(int p,float r,int y){
	return p*r*y;
}
int updatebalance(int currentbal,int interest){
	return currentbal+interest;
}
int main(){
	int principal=2200,year=3;
	float rate=0.1,interest,newbal;
	interest=simpleinterest(principal,rate,year);
	printf("Interest in %d years will be equal to %.0f\n",year,interest);
	newbal=updatebalance(principal,interest);
	printf("Balance after %d years will be equal to %.0f",year,newbal);
}

