#include <iostream>
#include <string>
int main()
{
    std::string tenants[10];
    int number_apartment;
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Enter the surname of the tenant from apartment " << i + 1 << ": ";
        std::cin >> tenants[i];
    }

    for (int j = 0; j < 3; ++j)
    {
        std::cout <<"\n Enter number apartment :";
        std::cin >> number_apartment;
        if (number_apartment > 0 && number_apartment < 11)
        {
            std::cout << "\nIn apartment number " << number_apartment << " resides " << tenants[number_apartment - 1];
        }
        else
        {
            std::cout << "You entered an invalid apartment number " << std::endl;
            j--;
        }
    }
}