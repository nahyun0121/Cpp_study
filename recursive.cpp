#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int from, int tmp, int to) {
	if (n == 1) {
		cout << from << " " << to << '\n';
	}
	else {
		hanoi(n - 1, from, to, tmp);
		cout << from << " " << to << '\n';
		hanoi(n - 1, tmp, from, to);
	}
}

int main() {

	int N;
	cin >> N;

	cout << (int)pow(2, N) - 1 << '\n';
	hanoi(N, 1, 2, 3);
		
	return 0;
}

/*
// 최댓값 찾기
int findMax(int arr[], int n) {
	if (n == 0)
		return arr[0];
	int max = findMax(arr, n - 1);
	// <삼항연산자>
	// '(조건)' ? '참일 때 값 : 거짓일 때 값'
	arr[n] = (max < arr[n]) ? arr[n] : max;
	return arr[n];
}

int main() {
	int arr[4] = { 2, 5, 3, 1 };
	cout << findMax(arr, 3);

	return 0;
	
}
*/

/*
void star(int i, int j, int n) {
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1) {
		cout << " ";
	}
	else if (n == 1) {
		cout << "*";
	}
	else {
		star(i, j, n / 3);
	}
}


int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			star(i, j, N);
		}
		cout << endl;
	}

	return 0;
}
*/

/*
int Fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n >= 2) {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

int main() {
	int n;
	cin >> n;

	if (n >= 0 && n <= 20) {
		cout << Fibonacci(n);
	}

	return 0;
}
*/

/*
int factorial(int n) {
	if (n == 1 || n == 0)
		return 1;

	return n * factorial(n - 1);
}

int main() {
	int N;
	cin >> N;

	if (N >= 0 && N <= 12) {
		cout << factorial(N);
	}

	return 0;
}
*/