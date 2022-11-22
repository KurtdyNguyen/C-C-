#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXCHAR 1000

void MoFileA(void);
void MoFileB(void);
void TimKiem(void);
void TongHop(void);
void ThongKe(void); 

int main(){ //aka giao dien menu
	int choice;
	
	printf("\t\t----------------------------------------------\t\t\n\n");
	printf("\t\t\tDANH SACH QUA TANG CHO CAC EM NHO\t\t\t\n\n");
	printf("\t\t----------------------------------------------\t\t\n");
	printf("\tCong viec:\n");
	printf("\t\t1. Truy cap danh sach A\n");
	printf("\t\t2. Truy cap danh sach B\n");
	printf("\t\t3. Tim kiem cac truong hop bi trung lap o hai danh sach A va B\n");
	printf("\t\t4. Tong hop va sap xep cac em theo thu tu giam dan\n");
	printf("\t\t5. In ra danh sach ten va so luong do choi\n");
	printf("\tBan can lam gi? Nhap vao con so tuong ung.");
	scanf("%d",&choice);
	
	while(choice<1 || choice>5){
		printf("\tCong viec khong ton tai. Xin ban hay nhap dung theo danh sach tren!");
		scanf("%d",&choice);
	}
	
	switch(choice){
		case 1:{
			system("cls");
			MoFileA();
			break;
		}
		case 2:{
			system("cls");
			MoFileB();
			break;
		}
		case 3:{
			system("cls");
			printf("TimKiem(void)");
			break;
		}
		case 4:{
			system("cls");
			printf("TongHop(void)");
			break;
		}
		case 5:{
			system("cls");
			printf("ThongKe(void)");
			break;
		}
	}
	
   	return 0;	
}

void MoFileA(void){
	FILE *fp;
    char str[MAXCHAR];
 
    fp = fopen("A.txt", "r");
    while (fgets(str, MAXCHAR, fp) != NULL)
        printf("%s", str);
    fclose(fp);
}

void MoFileB(void){
	FILE *fp;
    char str[MAXCHAR];
 
    fp = fopen("B.txt", "r");
    while (fgets(str, MAXCHAR, fp) != NULL)
        printf("%s", str);
    fclose(fp);
}
