#include<iostream>
using namespace std;

bool check(int element, int k);
int Find_K(int a[], int n, int k);

int main() {
	int n, k;
	cin >> n >> k;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << Find_K(a, n, k);
	system("pause");
	return 0;
}

bool check(int element, int k) {
	if (element == k) return true;
	return false;
}

int Find_K(int a[], int n, int k) {
	for (int i = 0; i < n; i++) {
		if (i < n && check(a[i], k)) {
			return i;
			break;
		}
	}
	return -1;
}