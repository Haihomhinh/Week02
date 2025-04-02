// two pointers
#include<iostream>
using namespace std;

bool check(int* a, int n, int target) {
	int i = 0;
	int j = n - 1;
	while (i < j) {
		if (a[i] + a[j] == target) {
			return true;
		}
		else if (a[i] + a[j] < target) {
			i++;
		}
		else {
			j--;
		}
	}
	return false;
}
int main() {
	int target, n;
	cout << "Enter target and n: ";
	cin >> target >> n;

	int* a = new int[n];
	cout << "Enter ascendening array: ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	if (check(a, n, target)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	delete[]a;
	system("pause");
	return 0;
}