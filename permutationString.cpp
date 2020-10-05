#include<iostream>
#include<string>
#include<algorithm>

inline void checkPermutation(std::string inputString1,std::string inputString2)
{
    std::sort(inputString1.begin(), inputString1.end());
    std::sort(inputString2.begin(), inputString2.end());
    if(inputString1 == inputString2)
        std::cout << "Permutation";
    else
        std::cout << "Not permutation";

}


int main()
{
    std::string inputString1, inputString2;
    std::getline(std::cin,inputString1);
    std::getline(std::cin,inputString2);
    checkPermutation(inputString1,inputString2);
}