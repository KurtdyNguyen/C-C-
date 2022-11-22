#include<stdio.h>
#include<string.h>

main(){
   int i,j,n;
   char str[100][100],s[100];
   printf("Nhap so luong nhan khau :\n");
   scanf("%d",&n);
   printf("Nhap ho va ten:\n");
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   printf("\nDanh sach nhan khau sau khi da sap xep theo thu tu bang chu cai:\n");
   for(i=0;i<n;i++){
      printf("%s\n",str[i]);
   }
}
