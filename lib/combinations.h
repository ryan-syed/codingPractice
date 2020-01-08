#ifndef COMBINATIONS_H
#define COMBINATIONS_H

#include <vector>

void print_combinations(std::vector<int> input, int r);
void print_combinations(std::vector<int> input, std::vector<int> &data, int start, int end, int index, int r);

std::vector<std::vector<int>> get_combinations(std::vector<int> input, int r);
std::vector<std::vector<int>> get_combinations(std::vector<int> input, std::vector<int> comb, int start, int end, int index, int r);

#endif