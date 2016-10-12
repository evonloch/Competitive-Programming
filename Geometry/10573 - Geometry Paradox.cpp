#include <bits/stdc++.h>


using namespace std;

int main()
{

    int test;

    cin>>test;



    while(test--)

{
    getchar();


    char s[122];

    scanf("%[^\n]",s);

    int i=0,j=0;

    int len = strlen(s);

    int k=0;

    for( ; k < len ; k++)
    {
        if(s[k]==' ') break;

        i=i*10+s[k]-'0';
    }

    k++;

    for( ; k < len ; k++)
    {
        if( s[k]==' ' ) break;

        j = j*10+ (s[k]-'0');
    }

        double pi=2*acos(0);

        double ans;

    if(j == 0)
    {
        double r = i ;

        ans = pi*r*r/8.0 ;




    }

    else
    {
        double r = (i+j);

        ans = pi*(r*r-i*i-j*j);

    }


        printf("%0.4lf\n",ans) ;
    //cout << 2*ans<<endl;

}



}

