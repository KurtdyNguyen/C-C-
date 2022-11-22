#include<iostream>
using namespace std;

class TaiSaoToiPhaiLamCaiNayHuHuHu{
	
	public:
		int S=0, n;
		int tinhtoan(int n){
			for (int i=1; i<=n; i++){
				S+=i;
			}
			return S;
		}
};

int main(){
	TaiSaoToiPhaiLamCaiNayHuHuHu DitMeCuocDoi;
	cout << "Nhap gia tri n: ";
	cin >> DitMeCuocDoi.n;
	cout << "Tong cua day so la: " << DitMeCuocDoi.tinhtoan(DitMeCuocDoi.n);
}
