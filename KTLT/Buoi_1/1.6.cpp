#include<bits/stdc++.h>

using namespace std;

void usingindex_reverse(int a[], int length){
	int st = 0;
	int over = length - 1;
	while(st < over){
		int tmp = a[st];
		a[st] = a[over];
		a[over] = tmp;
		st += 1;
		over -= 1;
	}
}

void usingpointer_reverse(int* a, int length){
	int st = 0;
	int over = length - 1;
    for(int i = 0; i <= length / 2; i++){
        int tmp = *(a + i);
        *(a + i) = *(a + over - i);
        *(a + over - i) = tmp;
    }
}

int main(){
	
	cout << "Ho va ten: Bui Lam Thanh" << endl;
	cout << "MSSV: 20204606" << endl;
	cout << "Phan 2: Con tro va mang" << endl;
	cout << "----------1.6----------" << endl;
	
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//usingindex_reverse(a, 10);
	usingpointer_reverse(a, 10);
	
	for(int i = 0; i < 10; i++){
		cout << a[i] << " ";
	}
	
	return 0;
}