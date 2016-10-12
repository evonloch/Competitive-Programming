#include <bits/stdc++.h>

using namespace std;

int w,h;

int dh[]={0,1,-1,0};

int dw[]={1,0,0,-1};

int main()

{
    int test , board=0 ,x1, y1, x2, y2;

        while(1)


    {
        int casino=0;
        scanf("%d %d",&w,&h);

        if(w==0&&h==0) break;




        bool ara[21][21];
        scanf("%d %d",&w,&h);

        pair <int,int> u , v , temp;
        for(int s=0 ; s<h ;s++)
        {
            string ss;

            getline(cin,ss);

            //cout<<ss<<endl;

            for(int t=0;t<w;t++)
            {
                if(ss[t]=='X') { ara [s][t] = 1;}

                else  ara[s][t] = 0;




            }



        } printf("Board #%d:\n",++board);


        //bfs

        while(1)
       {

           scanf("%d %d %d %d",&x1,&y1,&x2,&y2);


           if(x1==0) break;

           u=make_pair(y1-1,x1-1);

           v=make_pair(y2-1,x2-1);


        int ans=0;

        int  visit[78][78] = {0};

        visit [y1-1][x1-1]=1;

        queue < pair <int,int > > q;

        //map < pair < int,int > ,int > mp;

        q.push(u);

        while(!q.empty())
        {
            u = q.front();

            q.pop();

            cout<<'s'<<u.first<<u.second<<endl;

            int x,y;

            for(int t=0;t<4;t++)
            {
                x =u.first+dh[t];

                y =u.second+dw[t];


                cout<<x<<y<<endl;

            temp=make_pair(x,y);


                if(x>=0 && y>=0 && x<h && y<w)
                {
                    if(ara[x][y]==0&&visit[x][y]==0)
                    {
                        visit[x][y]= visit[u.first][u.second]+1;;

                        //mp[temp]=mp[u]+1 ;

                        cout<<x<<y<<visit[x][y]<<endl;

                        //ans=mp[temp];
                         //cout<<


                        //cout<<ans<< endl;
                        q.push(temp);
                    }
                }

                if(visit[y2-1][x2-1]==1)
                {

                cout<<9<<endl;
                    break;}
            }

        }


        if(visit[y2-1][x2-1]==0)
        {
            printf("Pair %d: impossible.\n",++casino);
        }

        else
            printf("Pair %d: %d segments.\n",++casino,ans);

        }

    }

}


