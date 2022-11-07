#include<bits/stdc++.h>

using namespace std;

int main(){
	
	cout << "Ho va ten: Bui Lam Thanh" << endl;
	cout << "MSSV: 20204606" << endl;
    cout << "Phan 1: Thuc hanh ve con tro" << endl;
	cout << "----------1.3----------" << endl;
	
	int x, y, z;
	cin >> x >> y >> z;
	cout << "Before:" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	
	int* ptr;
	
	ptr = &x;
	*ptr += 100;
	
	ptr = &y;
	*ptr += 100;
	
	ptr = &z;
	*ptr += 100;
	
	cout << "After:" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	
	return 0;
}