#include<bits/stdc++.h>

using namespace std;
//ok;
int main(){
	
	//cout << "Ho va ten: Bui Lam Thanh" << endl;
	//cout << "MSSV: 20204606" << endl;
    //cout << "Phan 1: Thuc hanh ve con tro" << endl;
	//cout << "----------1.1----------" << endl;
	int a, b, c; //declare 3 numbers;
	
	cout << "a, b, c = ";
	
	cin >> a >> b >> c; //take input;
	int* ptr; //declare pointer;
	
	
	ptr = &a; 
	cout << "a = " << *ptr << endl;
	
	ptr = &b;
	cout << "b = " << *ptr << endl;
	
	ptr = &c;
	cout << "c = " << *ptr << endl;
	
	return 0;
}