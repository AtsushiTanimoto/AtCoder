#include<bits/stdc++.h>

int main()
{
    int A,B,C,D;
    std::cin>>A>>B>>C>>D;

    if(A+B<C+D)
    {
        std::cout<<"Right"<<std::endl;
    }
    else if(A+B==C+D)
    {
        std::cout<<"Balanced"<<std::endl;
    }
    else
    {
        std::cout<<"Left"<<std::endl;
    }
}