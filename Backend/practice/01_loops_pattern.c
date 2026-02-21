#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,k;
	for(r=1;r<=5;r++){
		for(c=5;c>=6-r;c--){
			printf(" ");
		}
			for(k=0;k<=5-r;k++){
				printf("*");
			}
		printf("\n");
	}
	getch();
}
