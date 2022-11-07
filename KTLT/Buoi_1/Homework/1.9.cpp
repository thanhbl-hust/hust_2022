#include<bits/stdc++.h>

using namespace std;

int main(){
	
	cout << "Ho va ten: Bui Lam Thanh" << endl;
	cout << "MSSV: 20204606" << endl;
	cout << "Bai tap ve nha" << endl;
	cout << "----------1.9----------" << endl;
	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i]; 
		//nhap mang;
	}
	
	
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			for(int k = i; k <= j; k++){
				cout << a[k] << " ";
			}
			cout << endl;
		}
	}
	
	
	return 0;
}