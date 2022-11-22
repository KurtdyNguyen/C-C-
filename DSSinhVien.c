#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct SV{
	int stt;
	char ten[100];
	float d1, d2, d3;
	struct SV *next;
}*head;

void nhap(int stt, char* ten, float d1, float d2, float d3);

int main(){
    head = NULL;
    int c, n, i;
    int stt;
    char ten[100];
    float d1, d2, d3;

    printf("\n\n\n\t\t\tTrinh quan ly danh sach sinh vien\n\n\t\t*****************************************************");
    printf("\n\n\t\t1. Nhap thong tin sinh vien\n\t\t2. In ra danh sach sinh vien co diem trung binh >=5\n\t\t3. In ra danh sach sinh vien theo thu tu giam dan cua tong diem 3 mon\n\t\t4. Thoat");
    do{
        printf("\nNhap cong viec can thuc hien: ");
        scanf("%d",&c);
        switch(c){
            case 1:
                printf("\n\n\t\tNhap so luong sinh vien: "); scanf("%d", n);
                for(i=0; i<n; i++){
                    printf("\n\t\tNhap ho va ten: "); fgets(ten, sizeof(ten), stdin);
                    printf("\n\t\tNhap diem mon thu nhat: "); scanf("%f",&d1);
                    printf("\n\t\tNhap diem mon thu hai: "); scanf("%f",&d2);
                    printf("\n\t\tNhap diem mon thu ba: "); scanf("%f",&d3);
                    nhap(i+1, ten, d1, d2, d3);                                  
                };
                break;
            case 2:
                printf("xuat1()");
                break;
            case 3:
                printf("xuat2()");
                break;
            case 4:
                printf("Cam on ban da su dung chuong trinh!");
                getch();
                exit(0);
        }    
    } while(c<1 && c>4);
    
    return 0;
}

void nhap(int stt, char* ten, float d1, float d2, float d3){
    struct SV * sv = (struct SV*) malloc(sizeof(struct SV));
    sv->stt = stt;
    strcpy(sv->ten, ten);
    sv->d1 = d1;
    sv->d1 = d2;
    sv->d1 = d3;
    sv->next = NULL;
    if(head=NULL){
        head=sv;
    } else{
        sv->next = head;
        head = sv;
    }
}