#include <iostream>
#include <array>


unsigned int boxVolume(const unsigned int a=1, const unsigned int b=1,
	                   const unsigned int c=1 ){
	return a * b * c;
}


int main() {
	int c{ 0 };
	int *int_ptr = new int(0);
	std::cout << c << std::endl;
	std::cout << int_ptr << std::endl;
	std::cout << *int_ptr << std::endl;
	delete int_ptr;
	system("PAUSE");

	const size_t size = 4;//must be constant for array to accept
	int nums[size]{0,3,1,2};
	for (int n : nums) {
		std::cout << n << std::endl;
	}
	system("PAUSE");

	std::array<double, size> dubz{1.0, 4.0, 2.5, 3.1};
	for (double x : dubz) {
		std::cout << x << std::endl;
	}
	std::cout << dubz.size() << std::endl;
	system("PAUSE");

	std::cout<< boxVolume() << std::endl;
	std::cout<< boxVolume(2) << std::endl;
	std::cout<< boxVolume(2,4) << std::endl;
	std::cout<< boxVolume(2,4,8) << std::endl;
	system("PAUSE");
	return 0;
}