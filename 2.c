#include<stdio.h>
int calculateTotal(int data[],int size){
	int sum,i=0;
	for(i;i<size;i++){
		sum+=data[i];
	}
	return sum;
}
float applyDiscount(int Total){
	if(Total>5000.0){
		return 0.9*Total;
	}
	return (float)Total;
}
float printBill(float Famount){
	printf("Final amount to be paid is $%.0f",Famount);
}
int main(){
	int i,size,Total;
	printf("Enter number of items you bought\n");
	scanf("%d",&size);
	int prices[size];
	for(i=0;i<size;i++){
		printf("Enter price of item no %d\n",i+1);
		scanf("%d",&prices[i]);
	}
	Total=calculateTotal(prices,size);
	Total=applyDiscount(Total);
	printBill(Total);
}


