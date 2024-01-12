#include <iostream>

using namespace std;

int count=0;

long calc(long amt)
{   long res=amt;
    res = res+(1.0/100*res);
    if (count < 300)
   {
   count++;
   calc(res);
}
else
    return res;
};

int main() {
    int res = calc(500000);
    cout<<res;
    return 0;
}
