#include<stdio.h>

int main(){
    int n;
    int sotachra;
    int s = 0;
    
    while(n<=0){
    	printf("Nhap n(n>0): ");
    	scanf("%d",&n);
	}
    while(n!=0){
        sotachra = n % 10;
        s += sotachra;
        n /= 10;
    }    
    printf("%d",s);
}
