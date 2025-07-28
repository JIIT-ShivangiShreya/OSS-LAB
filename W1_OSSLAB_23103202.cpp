#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"ENTER NUMBER OF INTEGERS:" ;
    cin>> n;
    int arr[n];
    cout<<" ENTER ELEMENTS IN ARRAY: "<<endl;

    int sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    float avg=sum/n;

    cout<<"The avg is:"<<avg;
    return 0;
}
