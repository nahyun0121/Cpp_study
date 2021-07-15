#include <iostream>
using namespace std;

/*
int main() {
	int X;
	cin >> X;

	int i = 1;
	while (X > i) {
		X -= i;
		i++;
	}

	if (i % 2 == 1) {
		cout << i - X + 1 << "/" << X;
	}
	else
		cout << X << "/" << i - X + 1;

	return 0;
}
*/

/*
int main() {
	int N;
	cin >> N;

	if (N == 1) cout << 1;
	else {
		int i = 0;
		for (int sum = 2; sum <= N; i++)
			sum += 6 * i;
		cout << i;
	}

	return 0;
}
*/

/*
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	int break_even_point = A / (C - B);

	if (C <= B) {
		cout << -1;
	}

	else
		cout << break_even_point + 1;

	return 0;
}
*/