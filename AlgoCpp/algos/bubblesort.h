#pragma once
#include <vector>

void bubblesort(std::vector<int> &list, int array_length) {

	//Bubble sort compares two members, A and B. If A > B, the members are swapped. Continue until the list is sorted.

	for (int i = 0; i < array_length; i++) {
		//Max index for any array is array_length - 1.
		int stop_index = array_length - i - 1;

		for (int j = 0; j < stop_index; j++) {
			if (list[j] > list[j + 1]) {
				int tmp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tmp;
			}

		}

	}
}

