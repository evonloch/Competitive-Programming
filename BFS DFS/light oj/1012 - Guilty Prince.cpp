#include <bits/stdc++.h>

using namespace std;

int w,h;

int dh[]={0,1,-1,0};

int dw[]={1,0,0,-1};

int main()

{
    int test;

    scanf("%d",&test);

    for(int i=1 ; i<=test ; i++)
    {
        bool ara[21][21];
        scanf("%d %d",&w,&h);

        pair <int,int> p;
        for(int s=0 ; s<h ;s++)
        {
            char ss[25];

            scanf("%s",ss);

            for(int t=0;t<w;t++)
            {
                if(ss[t]=='@') { p.first = s , p.second = t ,ara [s][t] = 1;}

                else if(ss[t]=='.') ara[s][t] = 0;

                else ara [s][t] = 1;


            }



        }


        //bfs

        int ans=1;


        queue <pair <int,int > > q;

        q.push(p);

        while(!q.empty())
        {
            p = q.front();

            q.pop();

            int x,y;

            for(int t=0;t<4;t++)
            {
                x=p.first+dh[t];

                y=p.second+dw[t];

                if(x>=0 && y>=0 && x<h && y<w)
                {
                    if(ara[x][y]==0)
                    {
                        ara[x][y]= 1;

                        ans++;

                        q.push(make_pair(x,y));
                    }
                }
            }

        }

        printf("Case %d: %d\n",i,ans);

    }

}

