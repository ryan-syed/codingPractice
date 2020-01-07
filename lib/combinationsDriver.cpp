#include "combinations.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
	int more_nums[] = {1, 2, 3, 4, 5, 6, 7};
	get_combinations(more_nums, sizeof(more_nums) / sizeof(int), 3);
	
	return 0;
}