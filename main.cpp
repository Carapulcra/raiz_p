#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

long long exp_mod(long long p, long long g, long long x){
	long long aux = pow(g,x);
	return aux%p;
}

int main() {
	long long p,x,g,y;
	cin >> p;
	for(g = 2; g < p; g++){
		for(x = 1; x < p-1; x++){
			if(exp_mod(p,g,x) == 1) break;
		}
	if(x == p-1) break;
	}
	int gmin = g;
	cout << gmin << endl;
	vector<long long> Y;
	for(x = 1; x < p; x++){
		y = exp_mod(p,gmin,x);
		Y.push_back(y);
		cout << gmin <<"^"<< x <<" mod " << p << " = " << y << endl;
	}
	cout << "¿" << gmin << " es raíz primitiva?" << endl;
	if(Y.size() == p-1) cout << "SÍ";
	else cout << "NO";
} 