#include <iostream>
using namespace std;

int main() {
	int N, x;
	cin >> N;

	int** mat = new int*[N];
	for (int i = 0; i < N; i++)
		mat[i] = new int[2];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> x;
			mat[i][j] = x;
		}
	}

	int* rnk = new int[N];


	for (int i = 0; i < N; i++) {
		int rank = 1;
		for (int j = 0; j < N; j++) {
			if (mat[i][0] < mat[j][0] && mat[i][1] < mat[j][1])
				rank += 1;
		}
		rnk[i] = rank;
	}

	for (int i = 0; i < N; i++)
		cout << rnk[i] << '\n';

	for (int i = 0; i < N; i++)
		delete[] mat[i];
	delete[] mat;

	delete[] rnk;

	return 0;
}

/*
int main() {
	int N;
	cin >> N;

	int sum;
	int part;

	for (int i = 1; i < N; i++) {
		sum = i;
		part = i;

		while (part) {
			sum += part % 10;
			part /= 10;
		}

		if (sum == N) {
			cout << i;
			return 0;
		}

	}
	cout << "0";
	return 0;
}
*/

/*
int blackJ(int arr[], int n, int m) {
	int max = 0;
	int sum;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = arr[i] + arr[j] + arr[k];
				if (max <= sum && m >= sum)
					max = sum;
			}
		}
	}
	return max;
}

int main() {
	int N, M;
	cin >> N;
	int* arr = new int [N];
	cin >> M;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cout << blackJ(arr, N, M);

	delete[] arr;

	return 0;
}
*/