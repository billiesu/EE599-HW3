#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    vector<int> input = {3,7,11,3};
    int sum = 10;
    vector<int> res = solution.TwoSum(input, sum);
    solution.PrintVector(res);



    return EXIT_SUCCESS;
}