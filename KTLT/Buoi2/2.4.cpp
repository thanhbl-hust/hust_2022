#include<bits/stdc++.h>

using namespace std;
//Bui Lam Thanh 20204606

int cube_int(int x){
	return x*x*x;
}

double cube_double(double x){
	return x*x*x;
}

int main(){
	
	int n;
	double f;
	cin >> n >> f;
	cout << "Int: " << cube_int(n) << endl;
	cout << "Double: "<< fixed << setprecision(2) << cube_double(f) << endl;
	
    return 0;
}