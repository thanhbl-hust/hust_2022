#include<bits/stdc++.h>

using namespace std;

double* maxValue(double* a, int length){
	//Bui Lam Thanh 20204606;
	double* max;
	max = a; //max = a[0], dia chi co so cua a;
	if(a == NULL) return NULL;
	for(int i = 1; i < length; i++){ //di tim gia tri max;
		if(a[i] > *max){
			max = &(a[i]);
		}
	}
	return max;
}

int main(){
	double arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << *maxValue(arr, 10) << endl;
	return 0;
}