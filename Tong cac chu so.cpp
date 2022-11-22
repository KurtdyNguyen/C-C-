#include <iostream>
using namespace std;

int n, S=0, r;

int main() {
  cout << "\t\t\tChuong trinh tinh tong cac chu so cua so da nhap vao\n\n" << "\tNhap con so mong muon: ";
  cin >> n;
  while (n>0) {
  	r = n%10;
  	S+=r;
  	n = (n - r)/10;
  }
  cout << "\t==> Tong cac chu so cua so da nhap vao la: " << S;
  return 0;
}
