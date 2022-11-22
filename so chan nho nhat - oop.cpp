#include<iostream>
using namespace std;
#define MAX 100

int n, j=0; //n la so cac phan tu, j la so cac phan tu chan

class so{
	public:
		int a[MAX], b[MAX]; //a la day so, b la day so chan
		
		void nhap(){
			cout<<"\t\tMoi nhap so luong phan tu trong day so(nhieu nhat 100): "; cin>>n;
			while(n<=0 || n>MAX){
				cout<<"\n\t\t\tSo luong nhap vao khong hop le. Moi nhap lai: "; cin>>n;
			}
			for(int i=0; i<n; i++){
				cout<<"\n\t\tNhap so nguyen thu "<<i+1<<": "; cin>>a[i];
			}
		}
		
		void kiemtrachanle(int a[]){			
			for(int i=0; i<n; i++){
				if(a[i]%2==0){
					b[j]=a[i];
					j++;
				}
			}
			if(j==0){
				cout<<"\n\t\tMang khong co so chan";
			}else{
				cout<<"\n\t\tNhung phan tu chan tu day so da nhap la:";
				for(int i=0; i<j; i++){
					cout<<" "<<b[i];
				}
			}
		}
		
		int timsobenhat(int b[]){
			int sobenhat;
			sobenhat=b[0];
			for(int i=0; i<j; i++){
				if(b[i]<sobenhat){
					sobenhat=b[i];
				}
			}
			return sobenhat;
		}
};

int main(){
	so so;
	cout<<"\n\t\t\tChuong trinh tim so chan nho nhat\n\t\t\t\t***************\n\n";
	so.nhap();
	so.kiemtrachanle(so.a);
	if(j!=0){
		cout<<"\n\t\tSo chan be nhat trong day so la "<<so.timsobenhat(so.b);	
	}
	return 0;
}
