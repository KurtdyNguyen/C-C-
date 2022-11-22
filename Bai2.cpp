#include<stdio.h>

int main(){
	int S1=0, S2=0, dem=0;
	int a[999];
	
	printf("Nhap day so cua ban:\n");
	for(int i=0; i<999; i++){
		scanf("%d",&a[i]);
		S1+=a[i];
		if(a[i]%21==0){
			S2+=a[i];
			dem++;
		}
		if(S1>210){
			break;
		}
	}
	float TB = (float)S2/(float)dem;
	printf("Gia tri trung binh cua cac phan tu chia het cho 3 va 7 la: %.2f",TB);
	return 0;
}
