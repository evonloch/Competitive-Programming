#include <bits/stdc++.h>


using namespace std;

long long int value(long long int v, long long int k)
{
    long long int ans=v ,p=k;

    while(1)
    {
        long long int x=v/p;

        if(x==0) break;

        ans+=x;

        p*=k;

        //cout<<ans<<" ";
    }

    //cout<<ans<<endl;
    return ans;
}

long long int ans(long long int n , long long int k)
{

    long long int low = 1 , high = n*k;



    while(1)
    {
        long long int mid = (low+high)/2;

        if( n> value (mid ,k)) low = mid + 1 ;

        else if( value(mid,k)>=n && value(mid-1, k)<n) return mid;

        else high = mid;

        //cout<< mid<<endl;
    }

}

 int main()

{

    long long int n , k;

   cin>>n>>k ;

    cout << ans(n,k) <<endl;

    //value(9,2);


}
