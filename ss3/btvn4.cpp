#include<stdio.h>
int main(){
	int number1,number2,number3;
	printf("nhap number1:");
	scanf("%d",&number1);
	printf("nhap number2:");
	scanf("%d",&number2);
	printf("nhap number3:");
	scanf("%d",&number3);
	int max=number1;
	int min=number1;
	if (max<number2){
	max=number2;
	}
	if (max<number3){
	max=number3;
	}
	if (min>number2){
	min=number2;
	}
	if (min>number2){
	min=number3;
	}
	printf("max = %d\n",max);
	printf("min = %d\n",min);
} 
