#include <iostream>
#include <cstdlib>
#include "../lib/permutations.h"
#include "../lib/combinations.h"

using namespace std;

void display_solution(vector<int> solution) {
	for(auto val: solution)
		cout << val << " ";
	cout << endl;
}

/*bool is_solution(vector<int> input, int n) {
	vector<int> rowPos;

	for(int i = 0; i < n; i++) {
		rowPos.push_back(i);
	}

	vector<vector<int>> combinations = get_combinations(rowPos, 2);

	for(auto comb: combinations) {
		int i1 = comb[0];
		int i2 = comb[1];

		if(abs(i1 - i2) == abs(input[i1] - input[i2]))
			return false;
	}
	return true;
}*/

bool can_be_a_solution(vector<int> input) {
	int lastIndex = input.size() - 1;

	for(int i = 0; i < lastIndex; i++) {
		if(abs(lastIndex - i) == abs(input[lastIndex] - input[i]))
			return false;
	}
	return true;
}

void nqueen_backtrack(vector<int> boardPosFilled, vector<int> boardPosRem, int n) {
	if(boardPosRem.empty()) {
		if(can_be_a_solution(boardPosFilled))
			display_solution(boardPosFilled);
	}

	for(int i = 0; i < boardPosRem.size(); i++) {
		boardPosFilled.push_back(boardPosRem[i]);
		boardPosRem.erase(boardPosRem.begin() + i);

		if(can_be_a_solution(boardPosFilled))
			nqueen_backtrack(boardPosFilled, boardPosRem, n);
		boardPosRem.insert(boardPosRem.begin() + i, boardPosFilled.back());
		boardPosFilled.pop_back();
	}
}

int main() {
	int n = 8;
	vector<int> boardPosRem;

	for(int i = 0; i < n; i++) {
		boardPosRem.push_back(i);
	}

	vector<int> boardPosFilled;

	nqueen_backtrack(boardPosFilled, boardPosRem, n);
}





