#include<stdio.h>

int main(){
	float Max, Min;
	int dem, demMax, demMin;
	float a[20];
	
	printf("Nhap day so:\n");
	for(int i=0; i<20; i++){
		scanf("%f",&a[i]);
	}
	
	Max = Min = a[0];
	for(int i=0; i<20; i++){
		if(Max<a[i]){
			Max=a[i];
		}
		if(Min>a[i]){
			Min=a[i];
		}
	}
	
	for(int i=0; i<20; i++){
		if(a[i]==Max){
			demMax++;
		}
		if(a[i]==Min){
			demMin++;
		}
	}
	printf("Gia tri Max va Min la: Max = %.2f; Min = %.2f", Max,Min);
	printf("\nSo lan xuat hien cua gia tri Max va Min lan luot la %d va %d", demMax,demMin);	
}
