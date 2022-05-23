#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, rem, i=0, des=0;

    cout << "Enter any binary number : ";
    cin>>num;

    while(num>0){
        rem=num%10;
        des+=rem*pow(2, i);
        i++;
        num/=10;
    }
    cout << "The desimal number is : " << des << endl;
    
    return 0;
}
