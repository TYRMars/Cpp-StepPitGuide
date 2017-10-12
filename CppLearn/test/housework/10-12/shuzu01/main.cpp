#include<iostream>
using namespace std;

int main()
{
    const int n=6;//声明
    int a[n]={0,9,1,2,3,5};//初始化
    int mid=n;
    int num_max1=0,num_max2=0;
    for(int i=0;i<=n;++i)//前半部分
    {
        if(a[i]>num_max1)
            num_max1=a[i];
    }
    for(int j=n+1;j<n;++j)//后半部分
    {
        if(a[j]>num_max2)
            num_max2=a[j];
    }
    if(num_max1>=num_max2)
        cout<<"数组中的最大元素： "<<num_max1<<endl;
    else
        cout<<"数组中的最大元素： "<<num_max2<<endl;

    return 0;

}
