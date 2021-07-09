#include <iostream>
using namespace std;

/*
int main() {
	int N;
	int arr[42] = { 0 };
	int num;
	int num2 = 0;

	for (int i = 0; i < 10; i++) {
		cin >> num;
		int result = num % 42;
		arr[result] += 1;
	}

	for (int j = 0; j < 42; j++) {
		if (arr[j] != 0)
			num2 += 1;
	}
	cout << num2;

	return 0;
}
*/

/*
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	int result = A * B * C;
	int arr[10] = { 0 };

	while (result != 0) {
		arr[result % 10] += 1;
		result /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;

	return 0;
}
*/

/*
int main() {
	int N;
	int min = 1000000;
	int max = -1000000;
	
	cin >> N;
	int *arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}

	cout << min << " " << max;

	delete arr;

	return 0;
}
*/