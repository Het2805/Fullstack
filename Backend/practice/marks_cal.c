#include<stdio.h>
#include<conio.h>

int main()
{
	float physics, maths, chemistry, total, avg;
	
	printf("\nEnter Marks obtained in physics: ");
	scanf("%f",&physics);
	printf("\nEnter Marks obtained in maths: ");
	scanf("%f",&maths);
	printf("\nMarks obtained in chemistry: ");
	scanf("%f",&chemistry);
	printf("\nMarks obtained in physics: %.2f",physics);
	printf("\nMarks obtained in maths: %.2f",maths);
	printf("\nMarks obtained in chemistry: %.2f",chemistry);
	total = physics+chemistry+maths;
	printf("\ntotal marks obtained : %.2f",total);
	avg = total/300*100;
	printf("\n average marks obtained : %.2f",avg);
	
	if(avg>100 || avg<0){
	printf("\n Marks are invalid: %.2f",avg);
	}
	else if(avg>=80 && avg<=100){
		printf("\nA grade %.2f",avg);
	}
	else if(avg>70 && avg<80){
		printf("\nB grade %.2f",avg);
	}
	else if(avg>50 && avg<70){
		printf("\nC grade %.2f",avg);
	}
	else if(avg>33 && avg<50){
		printf("\nD grade %.2f",avg);
	}
	else{
		printf("\nhello");
	}
	return 0;
}

