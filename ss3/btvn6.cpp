#include<stdio.h>
int main() {
	int year;
	printf ("nhap nam sinh :");
	scanf ("%d",&year);
	int age = 2023 - year ;
	printf ("tuoi cua ban la %d\n", age);
	if ( age % 2 ==0 ) printf ("nam sinh cua ban la chan");
	 else printf ("nam sinh cua ban la le");
return 0;
}
