#include<iostream>
using namespace std;

bool returnWeight(int a[], int n, int days, int capacity);
int FindMinimum(int a[], int n, int days);

int main() {
	int n,days;
	cout << "Enter n and days: ";
	cin >> n >> days;

	int a[100];
	cout << "Enter array: ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout <<"Minimum capacity: "<< FindMinimum(a, n, days) << endl;

	system("pause");
	return 0;
}
//1 2 3 4 5 6 7 8 9 10        5
//  32

bool returnWeight (int a[],int n,int days,int capacity){

	int countDays = 1;
	int currentweight = 0;
	for (int i = 0; i < n; i++) {
		if (currentweight + a[i] > capacity) {
			countDays++;
			currentweight = 0;
		}
		currentweight += a[i];
	}

	return countDays <= days;
}

int FindMinimum(int a[], int n, int days) {
	int left = a[n - 1];
	int right = 0;
	for (int i = 0; i < n; i++) {
		right += a[i];
	}

	while (left < right) {
		int mid = (left + right) / 2;
		if (returnWeight(a, n, days, mid)) {
			right = mid;
		}
		else {
			left = mid + 1;
		}
	}
	return right;
}

