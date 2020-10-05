#include<iostream>
#include<string>


inline void isUnique(std::string inputString)
{
    if(inputString.length()>128)
        std::cout << "Not UNIQUE";
    bool characters[128];
    for(int i =0;i<inputString.length();++i)
    {
        int value = inputString.at(i);
        if(characters[value]==true)
            std::cout << "NOT UNIQUE" << "\n";
        else
            characters[value] = true;

    }
}
int main()
{
    std::string inputString;
    std::getline(std::cin,inputString);
    isUnique(inputString);

}