#include <iostream>
using namespace std;

int mod(int a, int n){
	if(a>0){
		int q = a/n;
		int r = a-(q*n);
		return r;
	}
	else if(a<0){
		int q = a/n - 1;
		int r = a - (q*n);
		return r;
	}
	else return 0;
}

int inversa(int a, int n){
	int aori = a;
	int nori = n;
	int x0=1,y0=0,x=0,y=1;
  while(n>0){
  int aux=x;
  int q=a/n;
  int r=a%n;
  x=x0-q*x;
  x0=aux;
  aux=y;
  y=y0-q*y;
  y0=aux;
  a=n;
  n=r;
  }
	if(a==1){
		return mod(x0,nori);
	}
	else{
		cout << aori << " no tiene i.m. en módulo " << nori << endl;
		return 0;
	}
}

int main() {
  cout << inversa(15,46);
} 