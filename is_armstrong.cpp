#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
int temp=n,r,sum=0;
while(n>0)
{
    r=n%10;
    n=n/10;
    sum=sum+r*r*r;
}
if(temp==sum)
{
    cout<<"Armstrong Number \n";
}
else{
    cout<<"Not an Armstrong number";
}
return 0;
}