#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    string s1 = "( a + b)";
    string s2 = "( a + b) * {a + c} + [9 + b{";
    string s3 = "( a + b) * {a + c} + [9 + b]";
    string s4 = "{sk + [iaj + ka] = }";

    std::cout << "s1 is valid ?" << solution.ValidBracket(s1) << std::endl;
    std::cout << "s2 is valid ?" << solution.ValidBracket(s2) << std::endl;
    std::cout << "s3 is valid ?" << solution.ValidBracket(s3) << std::endl;
    std::cout << "s4 is valid ?" << solution.ValidBracket(s4) << std::endl;
    return EXIT_SUCCESS;
}