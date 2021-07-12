#include <iostream>
#include <cmath>
using namespace std;
int erkar(int a, int l){
	int k=a/10;
	if (k<1){
		return l;
	}
	else{
		return erkar(k, l+1);
	}
}
int hak(int h, int m ,int g){
	int e = h % 10;
	int v = h/10;
	g += e * pow(10,m-1);
	if( m==0 ){
		return g;
	}else{	

		return hak(v,m-1,g);
	}
}
int main(){
	int tiv;
	cin >> tiv ;
	int j = erkar(tiv,1);
	cout << hak(tiv,j,0) << endl ;

}
