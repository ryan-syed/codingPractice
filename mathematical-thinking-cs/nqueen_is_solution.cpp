#include <iostream>
#include <vector>
#include "../lib/combinations.h"

using namespace std;

bool is_solution(vector<int> input, int n) {
	vector<int> rowPos;

	for(int i = 0; i < n; i++) {
		rowPos.push_back(i);
	}

	for(auto val: rowPos)
		cout << val << " ";
	cout << endl;

	vector<vector<int>> combinations = get_combinations(rowPos, 2);

	for(auto comb: combinations) {
		int i1 = comb[0];
		int i2 = comb[1];

		cout << i1 << " " << i2 << " " << input[i1] << " " << input[i2] << endl; 

		if(abs(i1 - i2) == abs(input[i1] - input[i2]))
			return false;
	}
	return true;
}

int main() {
	vector<int> input = {0, 2, 4, 6, 1, 3, 5, 7};

	if(is_solution(input, input.size()))
		cout << "valid solution";
	else
		cout << "invalid solution";

	return 0;
}

