#include<stdio.h>
int main(){

    int test,a,b,c,x,y,z,n=1;

    scanf("%d",&test);
    while(test--)
    {

        scanf("%d %d %d",&a,&b,&c);
        if(a>b&&a>c){
            z=a,y=b,x=c;

        }
        else if (b>a&&b>c){
            x=a,y=c,z=b;
        }
        else{
            x=a,y=b,z=c;
        }


        if(x*x+y*y==z*z){
            printf("Case %d:YES\n",n++);}
        else{
            printf("Case %d:no\n",n++);
        }

        }

        return 0;
    }
