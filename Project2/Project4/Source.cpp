#include <iostream>

int main()
 ask user 5 whole numbers (2 4 6 8 10) output avg of numbers
{
	int ans;
	int input1;
	int input2;
	int input3;
	int input4;
	int input5;
	

	std::cin >> input1>> input2>> input3>> input4>> input5;
	ans = (input1 + input2 + input3 + input4 + input5) / 5;
	std::cout << ans<<std::endl;
	system("pause");
	return 0;

}