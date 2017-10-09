#include<iostream>
using namespace std;

int main()
{
    int x,y,x0,y0;
    int summax=0,temp=0;
    for(x0=0;x0<=4;++x0)
    {
        for(y0=0;(x0+y0<=4)&&(x0+3*y0<=6);++y0)

            temp=3*x0+5*y0;
        if(temp>=summax)
        {
            summax=temp;
            x=x0;//符合sum最大值的x
            y=y0;//符合sum最大值得y
        }

    }//for
    cout<<"x= "<<x<<" y= "<<y<<" summax= "<<summax<<endl;

    return 0;
}
