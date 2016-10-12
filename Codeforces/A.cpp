#include <bits/stdc++.h>


using namespace std;


int main()

{

    int n , ans=0;

    string s;

    int ara[102];

    cin>>n>>s;

    int j=0;
    bool f=false;
    int x=0;
    for(int i=0;i<n; i++)
    {



        if(s[i]=='B' && f==false)
        {
            ans++;

            x++;


            f=true;


        }

        else if(s[i]=='B') x++;

        else
        {
            f=false;

           if(x>0) ara[j++]=x;

            x=0;
        }

    }


    if(x>0)
    {


    ara[j++]=x;}

    cout<<j<<endl;

    if(j>0){for(int i=0;i<j-1;i++) cout<<ara[i]<<" ";

    cout<<ara[j-1];}

    //return main();

}
