
#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    int j;

    int addition(int val1, int val2)
    {
        int sum =0;
        sum = val1 + val2;
        return sum;
    }

};

int main()
{
    Demo obj;
    int result = obj.addition(10,20);
    cout<<result;



    return 0;
}