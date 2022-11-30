#include<bits/stdc++.h>

using namespace std;
//Bui Lam Thanh 20204606

float get_hypotenuse(float x, float y){
	return sqrt(x*x + y*y);
}

int main(){
	
	
	float x, y;
	cin >> x >> y;
	
	float z = get_hypotenuse(x, y);
	cout << "z = " << fixed << setprecision(2) << z << endl;
	
    return 0;
}