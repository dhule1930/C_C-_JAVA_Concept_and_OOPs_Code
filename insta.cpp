#include<iostream>
using namespace std;

int main()
{
    int Arr[5] = {10,20,30,40,50};
    int *p = Arr;

    for(int i =0; i< 5; i++)
    {
        cout<< *(p+i) << endl;
    }
    return 0;
}