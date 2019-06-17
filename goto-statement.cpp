#include<iostream>
using namespace std;
int main()
{
    if(1)
    {
        label_1: cout << "If block";
        goto label_2;
    }
    else
    {
        goto label_1;
        label_2: cout << "Else block";
    }
    return 0;
}