#include <iostream>
using namespace std;

/*
int main() {
	int A, B;
	while (cin >> A >> B) {
		cout << A + B << endl;
	}

	return 0;
}
*/

/*
int main() {
	int A, B;
	while (true) {
		cin >> A >> B;
		if (!(A == 0 && B == 0))
			cout << A + B << endl;
		else
			break;
	}
	return 0;
}
*/


/*
int main() {
	int N;
	int length = 0;
	cin >> N;
	int init = N;
	while (1) {
		N = (((N / 10) + (N % 10)) % 10) + ((N % 10) * 10);
		length++;
		if (N == init)
			break;
	}
	cout << length;
	return 0;
}
*/