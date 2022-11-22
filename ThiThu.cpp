#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
	char HoTen[30], id[12], QueQuan[30];
	float gpa;
} sinhvien;

int n = 0, SL = 0;
sinhvien a[200];
float TB, Tong=0;

void NhapThongTin(sinhvien a[]);
void InThongTin(sinhvien a[]);
void TimKiemTheoMSSV(sinhvien a[]);
void TimKiemTheoQQvaDiem(sinhvien a[]);
void SapXep(sinhvien a[]);

int main(){ //ham menu o day
	int c;
	
	printf("\t\t----------------------------------------------------------\t\t\n\n");
	printf("\t\t\t\tCHUONG TRINH QUAN LY\t\t\t\t\n");
	printf("\t\t\t\tTHONG TIN SINH VIEN\t\t\t\t\n\n");
	printf("\t\t----------------------------------------------------------\t\t\n\n");
	printf("\t\t\t1. Nhap thong tin sinh vien\n");
	printf("\t\t\t2. In ra thong tin sinh vien\n");
	printf("\t\t\t3. Tim kiem theo MSSV\n");
	printf("\t\t\t4. Tim kiem theo que quan va GPA\n");
	printf("\t\t\t5. Sap xep danh sach\n");
	printf("\t\t\t6. Thoat\n");
	printf("\t\t***********************************************************\n");
	printf("\t\t\tNhap cong viec can lam: "); scanf("%d",&c);
	while(c<1 || c>6){
		printf("\n\t\t\tCong viec khong ton tai. Moi nhap lai: ");
		scanf("%d",&c);
	}
	switch(c){
		case 1:{
			system("cls");
			NhapThongTin(a);
		}
		case 2:{
			system("cls");
			InThongTin(a);
		}
		case 3:{
			system("cls");
			TimKiemTheoMSSV(a);
		}
		case 4:{
			system("cls");
			TimKiemTheoQQvaDiem(a);
		}
		case 5:{
			system("cls");
			SapXep(a);
		}
		case 6:{
			system("cls");
			printf("\n\t\t\tCam on ban da su dung phan mem nay");
			printf("\n\t\t\tTam biet va hen gap lai");
			exit(0);
		}
	}
}

void NhapThongTin(sinhvien a[]){
	int s;
	
	printf("\n\n\tNhap so luong sinh vien can nhap: "); scanf("%d",&s); 
	while(s<=0){
		printf("\n\t\tKhong hop le. Moi nhap lai!"); scanf("%d",&s);
	}
	SL += s;
	
	printf("\t\t\t**************************\n");
	getchar();
	do{
		printf("\t\t\tHo va ten cua sinh vien so %d: ",n+1); gets(b[n].Hoten);	
		printf("\t\t\t\tMSSV cua sinh vien: "); gets(a[n].id);
		printf("\t\t\t\tQue quan cua sinh vien: "); gets(a[n].QueQuan);
		printf("\t\t\t\tGPA cua sinh vien(0.0 ~ 4.0): "); scanf("%f",&a[n].gpa);
		while(a[n].gpa<0 || a[n].gpa>4){
			printf("\t\t\t\tKhong hop le. Moi nhap lai: "); scanf("%f",&a[n].gpa);
		}
		fflush(stdin);
		Tong+=a[n].gpa;
		n++;
		TB = Tong/(float)n;
	}while(n<SL);
	system("cls");
	printf("\n\t\tKet thuc qua trinh nhap thong tin. Tro ve menu chinh.");
	printf("\n\n\t\t\t\t*********\n\n");
	main();
}

void InThongTin(sinhvien a[]){
	printf("\n\t\t*********Thong tin sinh vien da nhap*********\n\n");
	printf("\tSTT\tHo va ten\t\tMSSV\t\tQue quan\t\tGPA\n\n");
	for (int i=0; i<n; i++){
		printf("\t%d\t%12s %15s %20s %18.1f\n",i+1,a[i].HoTen,a[i].id,a[i].QueQuan,a[i].gpa);
	}
	printf("\n\n\t\t***********************************\n");
	printf("\t\t\tNhan phim bat ky de tro ve menu\n\n\n");
	getchar(); getchar(); system("cls");
	main();
}

void TimKiemTheoMSSV(sinhvien a[]){
	char ss[12];
	int c=0, x=0;
	
	printf("\n\t\t*********Tra cuu thong tin sinh vien qua MSSV*********\n\n");
	printf("\t\tMoi nhap MSSV can tra cuu: "); getchar(); gets(ss);
	for (int i=0; i<n; i++){
		if(strcmp(ss,a[i].id)==0){
			c=1;
		}
	}
	switch(c){
		case 0:{
			printf("\n\t\tMSSV khong ton tai. Nhan phim bat ky de tro ve menu ban dau.\n\n");
			getchar(); system("cls");
			main();
		}
		case 1:{
			printf("\tSTT\tHo va ten\t\tMSSV\t\tQue quan\t\tGPA\n\n");
			for (int i=0; i<n; i++){
				if(strcmp(ss,a[i].id)==0){
					printf("\t%d\t%12s %15s %20s %18.1f\n",x+1,a[i].HoTen,a[i].id,a[i].QueQuan,a[i].gpa);
					x++;
				}
			}
			printf("\n\n\t\tDay la danh sach sinh vien ung voi MSSV da nhap. Nhan phim bat ky de tro ve menu ban dau.\n\n");
			getchar(); system("cls");
			main();
		}
	}
}

void TimKiemTheoQQvaDiem(sinhvien a[]){
	char QQ[30];
	int c=0, x=0;
	
	printf("\n\n\t\tNhap que quan cua sinh vien can tra cuu: "); getchar(); gets(QQ);
	for(int i=0; i<n; i++){
		if(strcmp(QQ,a[i].QueQuan)==0){
			if(TB < a[i].gpa){
				c=1;
				break;
			}
		}
	}
	switch(c){
		case 0:{
			printf("\n\tKhong co sinh vien nao co cung que quan va co diem cao hon trung binh(%.1f diem).",TB);
			printf("\n\tNhan phim bat ky de tro ve menu ban dau.");
			getchar();
			system("cls"); main();
		}
		case 1:{
			printf("\n\n\tDanh sach sinh vien co cung que quan da nhap va co diem cao hon trung binh(%.1f diem)",TB);
			printf("\n\t\t\t************************************\n");
			printf("\tSTT\tHo va ten\t\tMSSV\t\tQue quan\t\tGPA\n\n");
			for(int i=0; i<n; i++){
				if(strcmp(QQ,a[i].QueQuan)==0){
					if(TB < a[i].gpa){
						printf("\t%d\t%12s %15s %20s %18.1f\n",x+1,a[i].HoTen,a[i].id,a[i].QueQuan,a[i].gpa);
						x++;	
					}
				}
			}
			printf("\n\t\tNhan phim bat ky de tro ve menu ban dau.");
			getchar();
			system("cls"); main();
		}
	}
	printf("%d %d",x,c);
}

void SapXep(sinhvien a[]){
	sinhvien b[200], x;
	int p;
	
	for(int i=0; i<n; i++){
		strcpy(b[i].HoTen,a[i].HoTen);
		strcpy(b[i].id,a[i].id);
		strcpy(b[i].QueQuan,a[i].QueQuan);
		b[i].gpa = a[i].gpa;		
	}
		
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(b[i].gpa < b[j].gpa){
				x=b[i];
				b[i]=b[j];
				b[j]=x;
			}
		}
	}	
	printf("\n\n\t\tDanh sach sinh vien theo thu tu GPA giam dan");
	printf("\n\t\t\t\t******\n\n");
	printf("\tSTT\tHo va ten\t\tMSSV\t\tQue quan\t\tGPA\n\n");
	for (int i=0; i<n; i++){
		printf("\t%d\t%12s %15s %20s %18.1f\n",i+1,b[i].HoTen,b[i].id,b[i].QueQuan,b[i].gpa);
	}
	printf("\n\t\tNhan phim bat ky de tro ve menu ban dau.");
	getchar(); getchar();
	system("cls"); main();
}
