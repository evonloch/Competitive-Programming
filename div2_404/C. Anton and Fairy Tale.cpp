
//http://codeforces.com/bestRatingChanges/1091297
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n , m;

    cin>>n>>m;

    if(n<=m)
    {
        cout<<n;

        cout<<endl;

        return 0;
    }

    else
    {
        long long ans = 0;

        ans += m;

        //cout<<ans<<endl;

        n -=m ;

        long long temp = sqrt(2*n);

        if((temp*(temp+1))<(2*n)) temp++;

        ans+=temp;


        cout<<ans<<endl;

        return 0;

    }

    }
