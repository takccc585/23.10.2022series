#include <iostream>
using namespace std;
int main() {
	//1
	/*int c;
	int sum = 0;
	for (int i = 1; i <= 10;i++) {
		cin >> c;
		sum = sum + c;
	}
	cout << sum;*/
	//2
	/*int c;
	int sum = 1;
	for (int i = 1; i <= 10; i++) {
		cin >> c;
		sum = sum * c;
	}
	cout << sum;*/
	//3
	/*float c;
	float sum = 0;
	float a = 0;
	for (int i = 1; i <= 10; i++) {
		cin >> c;
		sum = sum + c;
		a++;
	}
	sum = sum / a;
	cout << sum;*/
	//4
	/*float c,n;
	cin >> n;
	float sum = 0;
	float proizv = 1;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		sum = sum + c;
		proizv = proizv * c;
	}
	cout << sum<<endl;
	cout << proizv;*/
	//5
	/*float c;
	int n;
	cin >> n;
	float sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		sum = sum + c;
		cout <<(int) c<<endl;
	}
	cout << sum << endl;*/
	//6
	/*float c;
	int n;
	cin >> n;
	float sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		sum = sum + c;
		cout << c-(int)c << endl;
	}
	cout << sum << endl;*/
	//7
	/*float c;
	int n;
	cin >> n;
	float sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		if (c - (int)c <= 0.5) {
			cout << (int)c << endl;
		}
		else {
			cout << (int)c+1 << endl;
		}
		sum = sum + c;
	}
	cout << sum << endl;*/
	//8
	/*int n,c;
	cin >> n;
	int k = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		if (c%2==0) {
			cout << c << endl;
			k++;
		}
	}
	cout << k << endl;*/
	return 0;
}