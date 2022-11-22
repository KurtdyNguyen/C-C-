#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
	int Ha1, Ha2;
	char Hoten[50], Cccd[12], Sdt[15];
	float Nhietdo;
}BN;

int n=0;
BN b[200];

void NhapThongTin(BN b[]);
void DanhSach(BN b[]);
void DieuKien(BN b[]);
void DanhSachDuDK(BN b[]);
void TimKiem(BN b[]);
int KiemTraNhietDo(float Nhietdo);
int KiemTraHuyetAp(int Ha1, int Ha2);

int main(){
	int c;
	
	printf("\t\t-------------------------------------------------------------------");
	printf("\n\n\t\t\t\tQUAN LY DANH SACH TIEM CHUNG");
	printf("\n\n\t\t-------------------------------------------------------------------");
	printf("\n\t\t\t\t\tDanh sach viec lam\n\n");
	printf("\n\t\t\t1.Nhap thong tin");
	printf("\n\t\t\t2.Danh sach nguoi tiem");
	printf("\n\t\t\t3.Kiem tra dieu kien tiem");
	printf("\n\t\t\t4.Danh sach du dieu kien tiem");
	printf("\n\t\t\t5.Tim kiem thong tin");
	printf("\n\t\t\t6.Thoat\n");
	printf("\t\tChon cong viec can lam: ");
	scanf("%d",&c);
	while(c<1 || c>6){
		printf("\n\t\t\tKhong hop le. Moi nhap lai: ");
		scanf("%d",&c);
	}
	switch(c){
		case 1:{
			system("cls");
			NhapThongTin(b);
		}
		case 2:{
			system("cls");
			DanhSach(b);
		}
		case 3:{
			system("cls");
			DieuKien(b);
		}
		case 4:{
			system("cls");
			DanhSachDuDK(b);
		}
		case 5:{
			system("cls");
			TimKiem(b);
		}
		case 6:{
			system("cls");
			printf("\n\t\t\tCam on ban da su dung chuong trinh nay");
			printf("\n\t\t\tXin chao va hen gap lai!");
			exit(0);
		}
	}
}

void NhapThongTin(BN b[]){
	printf("\n\tNhap thong tin nguoi tiem. De thoat ra menu, nhap khoang trang va nhan Enter.\n\n"); getchar();
	do{
		printf("\t\t\tHo va ten cua nguoi tiem thu %d: ",n+1); gets(b[n].Hoten);
		if(strlen(b[n].Hoten)==0){
			system("cls");
			printf("\t\tKet thuc qua trinh nhap thong tin va tro ve menu.\n");
			main();
		}	
		printf("\t\t\t\tCCCD: "); gets(b[n].Cccd);
		printf("\t\t\t\tSDT: "); gets(b[n].Sdt);
		printf("\t\t\t\tNhiet do: "); scanf("%f",&b[n].Nhietdo);
		printf("\t\t\t\tHuyet ap tam thu: "); scanf("%d",&b[n].Ha1);
		printf("\t\t\t\tHuyet ap tam truong: "); scanf("%d",&b[n].Ha2);
		fflush(stdin);
		n++;
	}while(1);
};

void DanhSach(BN b[]){
	printf("\n\t\t\t\tDanh sach\n\n");
	printf("\tSTT\tHo Ten\t\t\tCCCD\t\t\tSDT");
	printf("\n\t--------------------------------------------------------------------\n");
	for(int i=0; i<n; i++){
		printf("\t%d\t%15s\t\t%10s\t%10s\n",i+1,b[i].Hoten,b[i].Cccd,b[i].Sdt);
	}
	printf("\n\n\t\t\tNhan phim bat ki de tro ve menu.");
	getchar(); getchar();
	system("cls");
	main();
};

void DieuKien(BN b[]){
	char t[15];
	
	printf("\n\t\tNhap SDT cua nguoi can kiem tra dieu kien: "); getchar(); gets(t); fflush(stdin);
	for(int i=0; i<n; i++){
		if(strcmp(b[i].Sdt, t)==0){
			if(KiemTraNhietDo(b[i].Nhietdo)==1 && KiemTraHuyetAp(b[i].Ha1, b[i].Ha2)==1){
				printf("\n\t\t\tDu dieu kien tiem!");
			}else{
				printf("\n\t\t\tKhong du dieu kien tiem!");
			}
			printf("\n\n\t\tNhan phim bat ki de tro ve menu.");
			getchar();
			system("cls");
			main();			
		}
	}
	printf("\n\t\tNguoi tiem can tim kiem khong co trong danh sach. Nhan phim bat ki de tro ve menu.");
	getchar();
	system("cls");
	main();
};

void DanhSachDuDK(BN b[]){
	int STT=0;
	printf("\n\t\t\t\tDanh sach du dieu kien tiem\n\n");
	printf("\tSTT\tHo Ten\t\t\tCCCD\t\t\tSDT");
	printf("\n\t--------------------------------------------------------------------\n");
	for(int i=0; i<n; i++){
		if(KiemTraNhietDo(b[i].Nhietdo)==1 && KiemTraHuyetAp(b[i].Ha1, b[i].Ha2)==1){
			printf("\t%d\t%15s\t\t%10s\t%10s\n",STT+1,b[i].Hoten,b[i].Cccd,b[i].Sdt);
			STT++;
		}
	}
	printf("\n\n\t\t\tNhan phim bat ki de tro ve menu.");
	getchar(); getchar();
	system("cls");
	main();
};

void TimKiem(BN b[]){
	char t[15];
	
	printf("\n\t\tNhap SDT cua nguoi can tim kiem: "); getchar(); gets(t); fflush(stdin);
	for(int i=0; i<n; i++){
		if(strcmp(b[i].Sdt, t)==0){			
			printf("\t\tHo Ten\t\tCCCD\t\tSDT\t\tNhiet do\tHA tam thu\tHa tam truong");
			printf("\n\t--------------------------------------------------------------------\n");
			printf("\t\t%8s\t%s\t%s\t\t%.1f\t%10d\t%10d\n",b[i].Hoten,b[i].Cccd,b[i].Sdt,b[i].Nhietdo,b[i].Ha1,b[i].Ha2);
			printf("\n\n\t\tNhan phim bat ki de tro ve menu.");
			getchar();
			system("cls");
			main();			
		}
	}
	printf("\n\t\tKhong tim thay SDT trong danh sach. Nhan phim bat ki de tro ve menu.");
	getchar();
	system("cls");
	main();
};

int KiemTraNhietDo(float Nhietdo){
	if(Nhietdo>=36.8 && Nhietdo<=38){
		return 1;
	} else{
		return 0;
	}
};

int KiemTraHuyetAp(int Ha1, int Ha2){
	if(Ha1>=100 && Ha1<=130){
		if(Ha2>=79 && Ha2<=89){
			return 1;
		}
	}else {
		return 0;
	}
};
