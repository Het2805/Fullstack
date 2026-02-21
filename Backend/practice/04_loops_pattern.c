#include<stdio.h>

void main(){
	int r,c;
	char a;
	for(r=1;r<=5;r++){
		for(c=1;c<=r;c++){
			printf("%c",a);
		}
		printf("\n");
	}
	getch();
}
