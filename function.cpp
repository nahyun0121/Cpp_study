#include <iostream>
#include <vector>
using namespace std;

int function(int X) {
	int first = X / 100;
	int second = (X - first * 100) / 10;
	int third = (X - first * 100) % 10;
	
	if ((third - second) == (second - first))
		return true;
	else if (first == 0)
		return true;
	else if ((third - second) != (second - first))
		return false;
}

int main() {
	int N;
	int num = 0;
	cin >> N;
	if (N >= 1 && N <= 1000) {
		for (int i = 1; i <= N; i++) {
			if (function(i) == true)
				num += 1;
		}
	}
	cout << num;

	return 0;
}


/*
int arr[10001];

int self_num(int n) {
	int sum = n;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(void) {
	for (int i = 1; i <= 10000; i++) {
		int idx = self_num(i);

		if (idx <= 10000) {
			arr[idx] = true;
		}
	}

	for (int i = 1; i <= 10000; i++) {
		if (!arr[i])
			cout << i << endl;
	}
	return 0;
}
*/


/*
long long sum(vector<int> &a) {
	long long sum = 0;
	for (int i = 0; i < a.size(); i++)
		sum += a[i];
	return sum;
}
*/
