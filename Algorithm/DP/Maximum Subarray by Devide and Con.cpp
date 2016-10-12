
#include <bits/stdc++.h>


using namespace std;


int max_sub_array(int arr[], int n)
{
     if(n==1)return arr[0];

     int m = (n+1)/2;

     int left_mss = max_sub_array(arr,m);
     int right_mss = max_sub_array(arr+m,(n-m));

     int left_maxx = INT_MIN, right_maxx = INT_MIN, sum=0;

     for(int i=(m-1) ; i>=0 ; i--)
     {
         sum = sum+arr[i];

         if(sum>left_maxx) left_maxx=sum;
     }

        sum = 0;
     for(int i=m ; i<n ; i++)
     {
         sum = sum+arr[i];

         if(sum>right_maxx) right_maxx=sum;
     }

     int ans = max(left_mss,right_mss);

     return max(ans,left_maxx+right_maxx);
}


int main()
{
    int test,n;

    scanf("%d",&test);

    while(test--)
    {
        int arr[100006];
        cin>>n;

        int sum1 = 0,sum2 = 0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);

            if(arr[i]>0) sum2+=arr[i];

        }

        sum1 = max_sub_array(arr , n);

        printf("%d %d\n",sum1,sum2);



    }
}
