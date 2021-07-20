#include <iostream>
#include <cmath>

using namespace std;

/*
int main() {
	int n, max, m, M, cnt;

	while (1) {
		cin >> n;

		if (!n)
			break;
		
		m = n + 1;
		M = 2 * n;
		cnt = 0;

		for (int i = m; i <= M; i++) {
			max = sqrt(i);
			//2또는 3일 경우
			if (max == 1 && i != 1) {
				cnt++;
				continue;
			}
			if (i % 2) {
				for (int j = 2; j <= max; j++) {
					if (!(i % j))
						break;
					if (j == max) {
						cnt++;
					}
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
*/

/*
int main() {
	int N;
	cin >> N;
	int num = N;

	if (N == 1)
		return 0;

	else if (N > 1 && N <= 10000000) {
		for (int i = 2; i < N; i++) {
			while (N % i == 0) {
				N = N / i;
				if (N == 1)
					cout << i;
				else
					cout << i << endl;
			}
		}
		if (N == 1)
			return 0;
		else {
			cout << N;
			return 0;
		}
	}
}
*/

/*
//소수찾기_2
int main() {
	int N;
	cin >> N;
	int count = 0;

	for (int i = 0; i < N; i++) {
		int num, max;
		cin >> num;

		if (num >= 1 && num <= 10000) {
			max = sqrt(num);

			if (max == 1 && num != 1) {
				count += 1;
				continue;
			}

			if (num % 2) {
				for (int j = 2; j <= max; j++) {
					if (num % j == 0)
						break;
					if (j == max)
						count += 1;
				}
			}
		}
	}
	cout << count;
	return 0;
}
*/

/*
//소수찾기_1
int main() {
	int N;
	cin >> N;
	int result = 0;

	for (int i = 0; i < N; i++) {
		int count = 0;
		int num;
		cin >> num;

		if (num == 1)
			result += 1;
		else if (num == 2)
			result = result;
		else if (num > 2 && num <= 1000) {
			for (int j = 2; j < num; j++) {
				if (num % j == 0)
					count = 1;
			}

		}
		result += count;
	}
	cout << N - result;

	return 0;
}
*/