#include<stdio.h>
int main(){
    int i, n, t1 = 0, t2 = 1;
    int LienSau = t1 + t2;
    
    printf("Nhap so dau phan so: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        t1 = t2;
        t2 = LienSau;
        LienSau = t1 + t2;
    }
	
	float S = (float)(LienSau-t1)/(float)LienSau;
	printf("Gia tri cua S(n) la %d/%d hay %.2f",LienSau-t1,LienSau,S);
    return 0;
}
