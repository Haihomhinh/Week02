#include<iostream>
using namespace std;

int linearSeachSentinel(int a[], int n, int key);

int main() {
	int n, key;
	cin >> n >> key;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << linearSeachSentinel(a, n, key) << endl;
	system("pause");
	return 0;
}
int linearSeachSentinel(int a[], int n, int key) {
		a[n] = key;
		int i = 0;
		while (a[i] != key) {
			i++;
		}
		if (i < n) {
			return i;
		}
		else {
			return -1;	
		}
}