#include<bits/stdc++.h>

using namespace std;

double* maxValue(double* a, int length){
	double* max;
	max = a; //max = a[0], dia chi co so cua a;
	if(a == NULL) return NULL;
	for(int i = 1; i < length; i++){
		if(a[i] > *max){
			max = &(a[i]);
		}
	}
	return max;
}

int main(){
	
	cout << "Ho va ten: Bui Lam Thanh" << endl;
	cout << "MSSV: 20204606" << endl;
	cout << "Phan 2: Con tro va mang" << endl;
	cout << "----------1.5----------" << endl;
	
	double arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << *maxValue(arr, 10) << endl;
	return 0;
}