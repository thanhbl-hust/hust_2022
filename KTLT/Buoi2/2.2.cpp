#include<bits/stdc++.h>

using namespace std;
//Bui Lam Thanh 20204606

void rotate(int &a, int &b, int &c){
	int tmp = a;
	a = b;
	b = c;
	c = tmp;
}	


int main(){
	
	
	int a, b, c;
	cin >> a >> b >> c;
	
	cout << "Before: " << a << ", " << b << ", " << c << endl;
	
	rotate(a, b, c);
	
	cout << "After: " << a << ", " << b << ", " << c << endl;
	
	
    return 0;
}