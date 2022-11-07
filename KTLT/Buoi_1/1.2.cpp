#include<bits/stdc++.h>

using namespace std;

int main(){
	
	cout << "Ho va ten: Bui Lam Thanh" << endl;
	cout << "MSSV: 20204606" << endl;
    cout << "Phan 1: Thuc hanh ve con tro" << endl;
	cout << "----------1.2----------" << endl;
	
	int a[7]= {13, -355, 235, 47, 67, 943, 1222};
	
	//value of first five elements;
	for(int i = 0; i < 5; i++){
		cout << "a[" << i + 1 << "]: " << a[i] << endl;
	}
	//address 
	for(int i = 0; i < 5; i++){
		cout << "Address of a[" << i + 1 << "]: " << &(a[i]) << endl;
	}
	return 0;
}