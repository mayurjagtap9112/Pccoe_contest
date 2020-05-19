#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


string maximizeNumber(string N, long long int M)
{
    long long int i,j;
    sort(N.begin(), N.end());
    for ( i = 0; i < N.size(); i++)
    {
        for ( j = i + 1; j < N.size(); j++)
        {
   
            string t = N;
            swap(t[j], t[i]);
            sort(t.begin() + i + 1, t.end());
            if (stoll(t) > stoll(N) && stoll(t) <= M)
                swap(N[i], N[j]);
        }
    }
    return N;
}

int main()
{
    string N;
    long long int M;
    cin>>N>>M;
    cout << maximizeNumber(N, M) << endl;
    return 0;
}