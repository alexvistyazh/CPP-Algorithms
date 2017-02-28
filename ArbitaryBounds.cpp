#include <bits/stdc++.h>

using namespace std;

const int N = 5000;

const int FROM = -N;
const int TO = N;

int& getArr(int idx) {
	static int arr[TO - FROM + 1] = {};
	return arr[idx - FROM];
}

int main() {
	getArr(10) = -5;
	getArr(11) = 100;
	
	cout << getArr(10) + getArr(11) << endl;
}
