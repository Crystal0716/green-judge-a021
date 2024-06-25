#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    while(num%2==0)
    {
         num=num/2  ;
    }
    cout <<num<<endl;
    return 0;
}
