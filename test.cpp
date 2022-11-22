#include<iostream>

using namespace std;

int main(){
    int n, x=0;
    do{
        cin >> n;
    }while(1<=n && n>=100);
    
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            x++;
        };
    }
	cout << x+1;
	return 0;
}