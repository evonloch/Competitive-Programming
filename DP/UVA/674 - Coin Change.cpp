#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long int dp[7491];

    int possible[7491]={0};

    possible[0]=1;

    int coin[5]={50,25,10,5,1};

    for(int i=1;i<=7491;i++)
        for( int j=0;j<5;j++)
    {
        if( i>=coin[j])
            possible[i]|= possible[i-coin[j]];
    }
}


