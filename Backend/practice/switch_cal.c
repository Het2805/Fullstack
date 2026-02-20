#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	int operation;
	printf("\nEnter value of A :");
	scanf("%f",&a);
	printf("\nEnter value of B :");
	scanf("%f",&b);
	printf("\n A: %.2f",a);
	printf("\n B: %.2f",b);
	printf("\npress \n 1.add \n 2.sub\n 3.mull \n 4.div ");
	scanf("\n%d",&operation);
	switch(operation){
		case 1:
			printf("\naddition :  %.2f",a+b);
			break;
		case 2:
			printf("\nsubtraction : %.2f",a-b);
			break;
		case 3:
			printf("\nmultiplication : %.2f",a*b);
			break;
		case 4:
			printf("\ndivision : %.2f",a/b);
			break;		
		default :
			printf("\n Invalid choice");
	}
	getch();
}
