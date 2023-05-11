#include <iostream>
using namespace std;

int main() {
	int na[21];
	int n;
	int lowerbound = 0;
	int upperbound = n - 1;
	int mid;

	cout << "masukan elemen yang dicari";
	cin >> n;

	while (lowerbound <= upperbound) {
		mid = (lowerbound + upperbound) / 2

		if (na[mid] == desired element) {
			cout << "found" << mid << endl;
			return 0;
		} else if ([mid] < desired element) {
			lowerbound = mid + 1;
		} else {
			upperbound = mid - 1;
		}
	}

}
