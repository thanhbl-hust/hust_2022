#include<bits/stdc++.h>

using namespace std;
//Bui Lam Thanh 20204606

int get_value(int x, int a = 2, int b = 1, int c = 0){
	//S = a*x2 + b*x + c;
	int value = a * x * x + b * x + c;
	return value;
}

int main(){
	
	int x;
	cin >> x;
	int a = 2;
	int b = 1;
	int c = 0;
	
	cin >> a >> b >> c;
	
	cout << "a=2, b=1, c=0: " << get_value(x) << endl;
	cout << "a=" << a << ", b=1, c=0: " << get_value(x, a) << endl;
	cout << "a=" << a << ", b=" << b << ", c=0: " << get_value(x, a, b) << endl;
	cout << "a=" << a << ", b=" << b << ", c=" << c << ": " << get_value(x, a, b, c) << endl;
	
    return 0;
}