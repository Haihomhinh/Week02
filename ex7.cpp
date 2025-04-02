#include<iostream>
#include<algorithm>

using namespace std;

bool Check(int a, int b, int c);
void Find_suit_array(int* a, int n);


int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n];
	cout << "Nhap chuoi " << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Find_suit_array(a, n);

	delete[] a;
	system("pause");
	return 0;
}

bool Check(int a, int b, int c) {
	return a + b + c == 0;
}

void Find_suit_array(int* a, int n) {
	sort(a, a + n);

	for (int i = 0; i < n-2; i++) {
		int left = i + 1;
		int right = n - 1;

		while ( left < right) {
			int sum = a[i] + a[left] + a[right];
			
			if (sum == 0) {
				cout << "[" << a[i] << ", " << a[left] << ", " << a[right] <<"]" << endl;
				left++;
				right--;
			}
			else if (sum < 0) {
				left++;
			}
			else {
				right--;
			}
		}
	}
}