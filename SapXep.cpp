#include<stdio.h>
#include<math.h>

int main()
{
    int arr[1000];
    int i, x, n = 0, DC, tong = 0, dem = 0, DemSoDC = 0;
 	// nhap gia tri phan tu
    for (i = 0; i < 1000; i++){
    	printf("Nhap gia tri phan tu arr[%d]:",i); scanf("%d",&arr[i]);
    	n++;
    	if (arr[i] < 0){
    		n--;
    		break;
		}
	}
  	// ham sap xep
  	 for(i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if (arr[i] < arr[j]){
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
            }
        }
    }
    // in mang duoc sap xep
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
     
    printf("Nhap so doi chieu: "); scanf("%d",&DC);
    //ghi ra vi tri cac gia tri bang so doi chieu
    for (i = 0; i < n; i++){
		if(arr[i]==DC){
			DemSoDC++;
			printf("arr[%d] co gia tri tuong ung voi so doi chieu\n",i);
			}
	}
	if (DemSoDC == 0){
		printf("Day so khong ton tai phan tu co gia tri bang so doi chieu");
		return false;
	}
	//tim va xoa cac so duoc doi chieu
	for (int a = 0; a < DemSoDC; a++){ //dua vao so lan xuat hien cua so doi chieu ma code tim va xoa so doi chieu se chay bay nhieu lan
    	for (i = 0; i < n; i++){
			if(arr[i]==DC){
				if (i<n){
					n = n-1;	
				}				
				for (int j = i; j < n; j++){
					arr[j] = arr[j+1];
				}
			}
		}
	}
	
	//in ra day da luoc bo so doi chieu
	for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    // tinh trung binh cua y thu 4
    for (i = 0; i < n; i++){
		if(arr[i]%21==0){
			tong+=arr[i];
			dem++;
		}
 	}
 	//dua ra ket luan cho cac so chia het cho 3 va 7
 	if (dem == 0){
 		printf("Day so khong co phan tu chia het cho 3 va 7");
	}
	else {
		float TB = (float)tong/(float)dem; //doi gia tri nguyen sang thuc de tinh toan ra gia tri thuc cua TB
		printf("Gia tri trung binh cua cac phan tu chia het cho 3 va 7 la: %.2f",TB);
	}
	
	//in ra phan tu duong o cuoi mang
		printf("\nGia tri cua phan tu duong o cuoi mang la %d",arr[n-1]);
    return 0; 
}
