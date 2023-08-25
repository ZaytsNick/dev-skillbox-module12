#include <iostream>
#include <string>
int main()
{
    float enter[15];
    for (int i = 0; i < 15; ++i)
    {
        std::cout << "\nEnter fractional number" << i + 1 << ": ";
        std::cin >> enter[i];
    }
    std::cout<<"\n\n\n\n";
    for (int j = 0; j < 15; ++j)
    {
            int difference(j);
        for(int x=j;x<15;++x)
        {
            if(enter[j]-enter[x]<=enter[j]-enter[difference])
            {
                difference=x;
            }
        }
        std::swap(enter[j],enter[difference]);
        std::cout<<enter[j]<<" ";
    }
}