#include<bits/stdc++.h>

using namespace std;

int countEven(int* arr, int length){
	//length is size of array;
	int count = 0;
	for(int i = 0; i < length; i++){
		if(arr[i] % 2 == 0){
			count += 1;
		}
	}
	return count;
}

int main(){
	
	cout << "Ho va ten: Bui Lam Thanh" << endl;
	cout << "MSSV: 20204606" << endl;
	cout << "Phan 2: Con tro va mang" << endl;
	cout << "----------1.4----------" << endl;
	
	
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << countEven(arr, 10) << endl;
	
	return 0;
}