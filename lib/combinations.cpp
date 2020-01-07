#include "combinations.h"
#include <iostream>

using namespace std;

void display_combination(int data[], int len) {
	for(int j = 0; j < len; j++)
		cout << data[j] << " ";
	cout << endl;
}

void get_combinations(int input[], int len, int r) {
	int data[r] = {};
	get_combinations(input, data, 0, len, 0, r); 
}

void get_combinations(int input[], int data[], int start, int end, int index, int r) {
	for(int i = start; i < end; i++) {
		if(index == r) {
			display_combination(data, r);
			break;
		}
		
		data[index] = input[i];
		get_combinations(input, data, i + 1, end, index + 1, r);
	}
}