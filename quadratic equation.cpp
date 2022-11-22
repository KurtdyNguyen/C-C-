#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	float a, b, c;
	float x1, x2;
	printf("Quadratic equation solver\nPlease enter the value of a, b, c respectively:");
	scanf("%f %f %f", &a, &b, &c);
	if (a==0){
		x1 = x2 = -b/c;
		printf("The equation has one solution: x = %.2f", x1);
		exit(0);
	}
	float d = b*b - 4*a*c;
	if(d<0){
		printf("The equation has no solutions.");
	}
	else if(d==0){
		x1 = x2 = -b/(2*a);
		printf("The equation has one double solution: x = %.2f", x1);
	}
	else {
		x1 = (-b + sqrt(d))/(2*a);
		x1 = (-b - sqrt(d))/(2*a);
		printf("The equation has two solutions: x1 = %.2f and x2 = %.2f", x1, x2);
	}
}
