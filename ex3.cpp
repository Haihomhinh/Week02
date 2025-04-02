#include<iostream>

using namespace std;

int rotateArray(int a[], int n);

int main() {
	
	int a[9] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };
	int rotatedTimes = rotateArray(a, 9);
	cout << rotatedTimes << endl;

	system("pause");
	return 0;
}

// O(log(n)
int rotateArray(int a[], int n ) {
	if (n <= 1) return 0;

	int left = 0; int right = n - 1;
	
	if (a[left] < a[right]) return 0;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (a[mid] > a[mid + 1]) {
			return mid + 1;
		}
		if (a[mid] < a[mid - 1]) {
			return mid;
		}
		else {
			if (a[mid] < a[left]) {
				right = mid - 1;
			}
			if (a[mid] > a[left]) {
				left = mid + 1;
			}
		}
	}
}