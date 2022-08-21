#include <iostream>
#include <array>

void bubble(std::array<int,5>& a)
{
    for(int step = 0; step<a.size(); step++)
    {
        for(int i = 0; i<a.size()-step; i++)
        {
            if(a[i]>a[i+1])
            {
                int temp = a[i];
                std::cout<<i<<" "<<step<<std::endl;
                a[i] = a[i+1];

                a[i+1] = temp;
            }
        }
        std::cout<<"outside"<<std::endl;

    }
}

int main()
{
    std::array<int,5> a= {4,-2,-3,1,9};
    bubble(a);
    for(int i = 0;i<a.size();i++)
        std::cout<<a[i]<<std::endl;
}
