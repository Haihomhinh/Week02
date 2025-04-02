#include<iostream>

using namespace std;

int Min_Element(int a[], int n);
int Find_Subarray(int a[], int n, int target);


int main() {
	int target, n;
	cout << "Enter target and n: ";
	cin >> target >> n;

	int a[100];
	cout << "Enter ascendening array: ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "The min_length subarray is: " << Find_Subarray(a, n, target) << "\n";
	
	system("pause");
	return 0;
}

int Min_Element(int a[],int n) {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

int Find_Subarray(int a[], int n, int target) {
	int min_length[100] ;
	
	int left = 0;int right = 0;
	int sum = 0;

	int j = 0;

	while (right < n ) {
		if (sum >= target) {
			min_length[j] = right - left ;

			sum -= a[left];
			j++;
			left++;
		}
		else {
			sum += a[right];
			right++;
		}
	}
	while (sum >= target) {
		min_length[j] = right - left;

		sum -= a[left];
		j++;
		left++;
	}
	return Min_Element(min_length, j);
}