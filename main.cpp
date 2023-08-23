#include <iostream>
#include <vector>

void counting_sort(std::vector<int>& vec){
	int temp[] = {0,0,0,0,0,0,0,0,0,0};
	for (int i = 1; i < 11; i++){
		for (auto in : vec){
			if (in == i){
				temp[i-1]++;
			}
		}
	}
	vec.clear();
	for (int i = 1; i < 11; i++){
		while (temp[i-1] > 0){
			vec.push_back(i);
			temp[i-1]--;
		}
	}
}

int main(){

	std::vector<int> vec;

	for (int i = 0; i < 20; ++i){
		vec.push_back(rand() % 8 + 1);
	}

	std::cout << "Unsorted vector: " << std::endl;
	for (auto in : vec){
		std::cout << in << " ";
	}
	std::cout << std::endl;

	counting_sort(vec);

	std::cout << "Sorted vector: " << std::endl;
	for (auto in : vec){
		std::cout << in << " ";
	}
	std::cout << std::endl;

	return 0;
}