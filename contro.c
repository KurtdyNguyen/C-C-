#include <stdio.h>
#include <stdlib.h>

/*
struct _xyz{
	int m;
	int n;
};

typedef struct _xyz xyz;
*/

typedef struct _xyz{
	int m;
	int n;
} xyz;

int *f(){
	int list[5];
	int a;
	
	int *pa=(int *) malloc(sizeof(int));
	*pa = -100;
	
	//free(pa);
	return pa;
}

int main(){
	int a; // may tinh se cap phat 1 vung nho bao gom 4 byte (hoac la sizeof(int) byte)
		   // dia chi byte dau tien trong RAM = dia chi cua bien a
	int *p;// con tro p luu gia tri = dia chi cua mot bien so nguyen int
	float *pf;
	double *pd;//....
	
	p = &a; //p se luu dia chi cua bien a
	a = 20;
	printf("a=%d\n",a);
	*p = 35;
	printf("a=%d\n",a);
	
	int list[5];//may tinh se cap phat 1 vung nho gom 4*5=20 byte (hoac la sizeof(int)*5 byte)
				//lien tiep nhau trong RAM
				//dia chi cua byte dau tien = dia chi cua mang list
				//vi du goi dia chi nay la alpha
				//---> coi list la mot con tro chua dia chi = alpha
				//list la con tro tro toi phan tu list[0] (4 byte dau tien trong 20 byte vua
				// duoc cap phat
	list[0] = 1;
	printf("list[0]=%d\n",list[0]);
	*list = *list + 1;
	printf("list[0]=%d\n",*list);
				//(list+i) la mot con tro tro toi phan tu thu i+1 trong day
				// ta co the truy xuat tung phan tu trong day qua con tro (list +i)
				// (list+i) se luu dia chi = alpha + i*4 (hoac la alpha + i*sizeof(int))
	list[2] = 12;
	printf("list[2]=%d\n",list[2]);
	*(list+2) = *(list+2) + 1;
	printf("list[2]=%d\n",*(list+2));
	
	int i;
	for (i=0; i < 5; i++){
		list[i] = i;
		printf("Noi dung con tro list + %d: %8p va noi dung cua bo nho bi tro toi %d\n", i,list+i, *(list+i));
	}

	//struct _xyz *pxyz = (struct _xyz*)malloc(sizeof(struct _xyz));
	xyz *pxyz = (xyz*)malloc(sizeof(xyz));
	//may tinh cap phat 1 vung nho co kich thuoc la 8 byte (= sizeof(int) + sizeof(int))
	//con tro pxyz luu dia chi cua byte dau tien cua 8 byte
	//con tro pxyz tro toi vung nho vua duoc cap phat nay
	pxyz->m=2;
	pxyz->n=230;
	printf("pxyz->m=%d\n",pxyz->m);
	printf("pxyz->n=%d\n",pxyz->n);
	
	int *pa=(int *) malloc(sizeof(int));
	*pa = 1290;
	printf("%d\n",*pa);
	printf("%d\n",*pa+1);
	
	int *parray=(int *) malloc(5*sizeof(int));//realloc
	*(parray+2) = 14290;
	printf("%d\n",*(parray+2));
	printf("%d\n",*(parray+2)+1);
	
	
	int *pint=f();
	*(pint) = *(pint) + 100;
	printf("%d\n",*(pint));
	free(pint);
	
	int daysx[]={1,3,3,7,12,14,17,19,22,30};

	for(i=8;i>-1;i--){
		if(daysx[i] > 8)
			daysx[i+1]=daysx[i];
		else break;
	}
	
	daysx[i+1] = 8;
	printf("\n");
	for(i=0;i<10;i++){
		printf("%d ",daysx[i]);
	}
	
	for(i=0;i<10;i++){
		if(daysx[i] > 8)
			daysx[i-1]=daysx[i];
	}
	
	printf("\n");
	for(i=0;i<9;i++){
		printf("%d ",daysx[i]);
	}
	
	return 1;
}
