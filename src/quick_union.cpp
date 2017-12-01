/*
 * quick_union.cpp
 *
 *  Created on: 1 Dec. 2017
 *      Author: elfqi
 */

#include <iostream>
using namespace std;


int main() {
	int p, q, i, j, n, m;
	cout << "Number of pairs: " << endl;

	cin >> n;
	cout >> "Number of items" << endl;
	cin >> m;
	cout >> "Input paris: " << endl;

	auto id = new int[m];
	for (i = 0; i < m; i++) {
		id[i] = i;
	}

	while (n--) {
		cin >> p >> q;
		for (i = p; i != id[i]; i = id[i]);
		for (j = q; j != id[j]; j = id[j]);

		cout << p << " & " << q << " is " << (i == j ? "connected": " not connected") << endl;

	}
}
