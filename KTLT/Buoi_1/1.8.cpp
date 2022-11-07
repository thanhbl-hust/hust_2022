#include<bits/stdc++.h>

using namespace std;

void allocationMemory(int ***matrix, int m, int n){
    *matrix = new int *[m];
    for(int i = 0; i < m; i++){
        (*matrix)[i] = new int[n];
    }
}

void take_input(int **matrix, int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << "Matrix[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matrix[i][j];
		}
	}
}

void show(int **matrix, int m, int n){
	cout << "Our matrix: " << endl;
	for(int i = 0; i < m ; i++){
		for(int j = 0; j < n; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int getEven(int **matrix, int m, int n){
	int sum = 0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(matrix[i][j] % 2 == 0){
				sum += matrix[i][j];
			}
		}
	}
	return sum;
}

void freeMemory(int **matrix, int m, int n) {
    for (int i = 0; i < m; i++){
    	delete []matrix[i];
	}
    delete []matrix;
}
int main(){
	
	cout << "Ho va ten: Bui Lam Thanh" << endl;
	cout << "MSSV: 20204606" << endl;
	cout << "Phan 3: Cap phat dong" << endl;
	cout << "----------1.8----------" << endl;
	
	int m, n, **matrix;
	cout << "Row of matrix: "; cin >> m; //Row of matrix;
	
	cout << "Column of matrix: "; cin >> n; //Column of matrix;
	
	allocationMemory(&matrix, m, n); //cap phat bo nho cho matrix;
	take_input(matrix, m, n); //take input;
	show(matrix, m, n);       //show matrix;
	
	cout << "Sum of all even elements in matrix: " << getEven(matrix, m, n) << endl; //show sum;
	freeMemory(matrix, m, n);
	return 0;
}