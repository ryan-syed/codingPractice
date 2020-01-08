#ifndef PERMUTATIONS_H
#define PERMUTATIONS_H

#include <vector>

void print_permutations(std::vector<int> input);
void print_permutations(std::vector<int> input, std::vector<int> perm);

std::vector<std::vector<int>> get_permutations(std::vector<int> input);
std::vector<std::vector<int>> get_permutations(std::vector<int> input, std::vector<int> perm);

#endif