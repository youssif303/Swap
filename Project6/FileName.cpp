#include<iostream>
using namespace std;

#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
	int tempvalues = values.first;
	values.first = values.second;
	values.second = tempvalues;
	//swap(values.first, values.second);
	return values;
}

int main()
{
	std::pair<int, int> result = swap_values({ 2, 9 });
	cout << "first value after swapping: " << result.first << endl << "second values after swapping: " << result.second;
	return 0;
}