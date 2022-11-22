#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char hoten[30];
	struct {
		int Toan, Ly, Hoa, Tong;
	} diem;
} sinhvien;

int n=0;

int NhapThongTin(sinhvien a[100]);
void XetDiemChuan(int chuan, sinhvien a[100]);
void DiemCaoNhat(sinhvien a[100]);

int main(){
	sinhvien a[100];
	int chuan;
	
	NhapThongTin(a);
	
	printf("\n\n\t\tDiem chuan la: "); scanf("%d",&chuan);
	XetDiemChuan(chuan, a);
	DiemCaoNhat(a);
}

int NhapThongTin(sinhvien a[100]){
	
	printf("\t\t----------------------------------------\t\t\n\n");
	do{
		printf("\t\t\tNhap ho ten cua sinh vien thu %d: ",n+1);
		gets(a[n].hoten);
		if (strlen(a[n].hoten)==0){
			printf("\t\t\t******\tQua trinh nhap ket thuc tai day\t******");
			break;
		}
		printf("\t\t\tNhap so diem Toan, Ly, Hoa cua sinh vien nay:"); scanf("%d %d %d",&a[n].diem.Toan,&a[n].diem.Ly,&a[n].diem.Hoa);
		fflush(stdin);
		a[n].diem.Tong = a[n].diem.Toan + a[n].diem.Ly + a[n].diem.Hoa;
		n++;
	}while(1);
	return n;
}

void XetDiemChuan(int chuan, sinhvien a[100]){
	for(int i=0; i<n; i++){
		if(a[i].diem.Tong>=chuan){
			printf("%s\n",a[i].hoten);
		}
	}
}

void DiemCaoNhat(sinhvien a[100]){ 
	for (int i=0; i<n; i++){
		
	}
}
