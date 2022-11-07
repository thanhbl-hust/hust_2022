#include<bits/stdc++.h>

using namespace std;


int main(){
	
	cout << "Ho va ten: Bui Lam Thanh" << endl;
	cout << "MSSV: 20204606" << endl;
	cout << "Phan 3: Cap phat dong" << endl;
	cout << "----------1.7----------" << endl;
	
	int* a;
	int length; cin >> length; //length of array (a);
	a = new int[length];
	for(int i = 0; i < length; i++){
		cin >> *(a + i);
	}
	
	cout << "Array before sorted: " << endl;
	for(int i = 0; i < length; i++){
		cout << *(a + i) << " ";
	}
	
	cout << endl;
	
	//bubble sort;
	for(int i = 0; i < length - 1; i++){
		for(int j = 0; j < length - 1 - i; j++){
			if(*(a + j) > *(a + j + 1)){
				int tmp = *(a + j);
				*(a + j) = *(a + j + 1);
				*(a + j + 1) = tmp;
			}
		}
	}
	
	
	cout << "Array after sorted: " << endl;
	for(int i = 0; i < length; i++){
		cout << *(a + i) << " ";
	}
	
	return 0;
}