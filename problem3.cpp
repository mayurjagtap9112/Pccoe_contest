#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,b,p,f,h,c;
    cin>>n;
    if(n>0)
    {
        for(int i=0;i<n;i++)
        {
            cin>>b>>p>>f;
            cin>>h>>c;
            int profit=0;

            if(b>0 && p>0 && f>0 && h>0 && c>0)
            {
                if(h>c)
                {
                    while(b>1 && p>0)
                    {
                        b=b-2;p--;
                        profit+=h;
                    }
                    while(b>1 && f>0)
                    {
                        b=b-2;f--;
                        profit+=c;
                    }
                }
                else
                {
                    while(b>1 && f>0)
                    {
                        b=b-2;f--;
                        profit+=c;
                    }
                    while(b>1 && p>0)
                    {
                        b=b-2;p--;
                        profit+=h;
                    }
                }
                cout<<profit<<endl;
            }
        }
    }
    return 0;
}