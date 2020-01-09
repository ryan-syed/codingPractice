#include <iostream>
#include <vector>

using namespace std;

// solution: 
// base case + 
// generic case

void hanoi(int n, char from_rod, char aux_rod, char to_rod) {
	if(n == 1) {
		cout << "Move disk 1 from " << from_rod << " to " << to_rod << endl;
		return;
	}

	hanoi(n - 1, from_rod, to_rod, aux_rod);
	cout << "Move disk " << n << " from " << from_rod << " to " << to_rod << endl;
	hanoi(n - 1, aux_rod, from_rod, to_rod);
}


int main() {
	hanoi(3, 'A', 'B', 'C');
	return 0;
}