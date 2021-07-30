#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

/*
// 알고리즘 불러와서 구현
bool compare(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main() {
	int N;
	vector<string> v;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string word;
		cin >> word;
		if (find(v.begin(), v.end(), word) == v.end())
			v.push_back(word);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';

	return 0;
}
*/

/*
// 버블 정렬 이용하여 알고리즘 직접 구현
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	string word;
	cin >> N;
	vector<string> v;

	for (int i = 0; i < N; i++) {
		cin >> word;
		v.push_back(word);
	}

	for (int i = N - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (v[j] == v[j + 1])
				v.erase(v.begin() + j);

			else {
				if (v[j].length() > v[j + 1].length()) {
					string tmp = v[j];
					v[j] = v[j + 1];
					v[j + 1] = tmp;
				}

				else if (v[j].length() == v[j + 1].length()) {
					if (v[j] > v[j + 1]) {
						string tmp1 = v[j];
						v[j] = v[j + 1];
						v[j + 1] = tmp1;
					}
				}
			}
		}
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';

	return 0;
}
*/

/*
int main() {
	int N, x, y;
	cin >> N;
	vector<pair<int, int>> v;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back(pair<int, int>(x, y));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
		cout << v[i].first << " " << v[i].second << '\n';
	return 0;
}
*/

/*
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int arr[10001] = { 0 };
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		arr[num - 1]++;
	}

	for (int i = 0; i < 10001; i++) {
		if (arr[i] != 0) {
			if (arr[i] != 1)
				for (int j = 0; j < arr[i]; j++)
					cout << (i + 1) << '\n';
			else
				cout << i + 1 << '\n';
		}	
	}
	return 0;
}
*/

/*
int main() {

	int N;
	cin >> N;

	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr+N); // [arr, arr+N) default(오름차순)로 정렬

	for (int i = 0; i < N; i++)
		cout << arr[i] << '\n';

	delete[] arr;
	return 0;
}
*/