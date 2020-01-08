#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../lib/permutations.h"
#include "../lib/combinations.h"

using namespace std;

void display_solution(vector<int> solution) {
	for(auto val: solution)
		cout << val << " ";
	cout << endl;
}

bool is_solution(vector<int> input, vector<int> rowPos) {
	vector<vector<int>> combinations = get_combinations(rowPos, 2);

	for(auto comb: combinations) {
		int i1 = comb[0];
		int i2 = comb[1];

		if(abs(i1 - i2) == abs(input[i1] - input[i2]))
			return false;
	}
	return true;
}


int main() {
	vector<int> columnPos;

	int n = 6; // regular chessboard

	for(int i = 0; i < n; i++) {
		columnPos.push_back(i);
	}


	clock_t begin = clock();

	vector<vector<int>> permutations = get_permutations(columnPos);
	cout << "all permutations found" << endl;
	for(auto perm: permutations) {
		if(is_solution(perm, columnPos)) {
			display_solution(perm);
			break;
		}
	}

	clock_t end = clock();

	double time_elapsed = (end - begin) / CLOCKS_PER_SEC;
	cout << "Total time taken: " << time_elapsed;

	return 0;
}