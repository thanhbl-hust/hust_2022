#include<bits/stdc++.h>

using namespace std;

void take_input(int **matrix, int n){       ///take input
	for(int i = 0; i < n; i++){
		cout << "Row " << i + 1 << ": ";
		for(int j = 0; j < n; j++){
			cin >> matrix[i][j];
		}
	}
}

void sum2matrixs(int **mt1, int **mt2, int n){ ///sum function;
	cout << "Sum of 2 matrixs: " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << mt1[i][j] + mt2[i][j] << " ";
		}
		cout << endl;
	}
}

void multi2matrixs(int **mt1, int **mt2, int n){ ///multi function;
	cout << "Multi of 2 matrixs: " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int prod = 0;
			for(int k = 0; k < n; k++){
				prod += mt1[i][k] * mt2[k][j];
			}
			cout << prod << " ";
		}
		cout << endl;
	}
}

int main(){
	
	cout << "Ho va ten: Bui Lam Thanh" << endl;
	cout << "MSSV: 20204606" << endl;
	cout << "Bai tap ve nha" << endl;
	cout << "----------1.10----------" << endl;
	
	//solution;
	
	cout << "Size of matrixs: ";
	int n; cin >> n;
	
	int **mt1 = new int* [n];
	int **mt2 = new int* [n];
	for(int i = 0; i < n; i++){
		mt1[i] = new int[n];
		mt2[i] = new int[n];
	}
	cout << "Matrix 1: " << endl;
	take_input(mt1, n);
	
	cout << "Matrix 2: " << endl;
	take_input(mt2, n);
	
	sum2matrixs(mt1, mt2, n);
	multi2matrixs(mt1, mt2, n);
	return 0;
}