#include<iostream>
using namespace std;
int fibonacci(int a){
	int n, n1 = 0,n2 = 1;
	cout << "1 | ";
	for(int i = 1; i < a; i++){
		n = n1 + n2;
		if (i < a-1){
			cout << n << " | ";
		}
		n1 = n2;
		n2 = n;
	}
	return n;
}


int main(){
	system("cls"); // for windows
	// system("clear"); // for linux or mac
	int a;
	cout << "Masukan deret fibonaci ke : ";
	cin >> a;
	cout << fibonacci(a);
	cin.get();
	return 0;
}


