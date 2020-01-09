#include <iostream>
#include <vector>

using namespace std;

// coins of 3 & 5 available
// show that any number above 8 can be formed with 3 & 5 and give the coins required


void display_change_required(vector<int> &change) {
	int sum = 0;
	for(auto coin: change) {
		cout << coin << " ";
		sum += coin;
	}
	cout << endl; 

	cout << "The total value of change is: " << sum << endl;
}

void get_change_for_value(int value, vector<int> &change) {
	if(value < 8)
		return;

	if(value == 8) {
		change.push_back(3);
		change.push_back(5);
	}
	else if(value == 9)
	{
		change.push_back(3);
		change.push_back(3);
		change.push_back(3);
	}
	else if(value == 10)
	{
		change.push_back(5);
		change.push_back(5);
	}
	else {
		change.push_back(3);
		get_change_for_value(value - 3, change);
	}
}

int main() {
	int value = 37;
	vector<int> change;

	cout << "The total value of change required is: " << value << endl;

	get_change_for_value(value, change);
	display_change_required(change);

	return 0;
}