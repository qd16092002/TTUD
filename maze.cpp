#include <bits/stdc++.h>
using namespace std;
#define ft(i,x,y) for(int i=x;i<=y;i++)
int n,m,r,c;
int a[1001][1001];


typedef struct pair<int,int>ii;
typedef struct pair<int,ii>iii;

int dx[]={1, 0, -1, 0};
int dy[]={0, 1, 0, -1};

void BFS( int start_row,int start_col){
    queue<iii> qu;
    qu.push(iii(1,ii(start_row,start_col)));
    // tinh do dai duong di diem hien tai 
    while (!qu.empty())
    {
        ii current_point = qu.front().second;
        int current_distance = qu.front.first;
        qu.pop();
        if(current_point.x == 1 || current_point.x == n
           current_point.y == 1 || current_point.y == m
        )
        {
            count<<current_distance;
            return ;
        }
        
        
        
        ft(i;0;3){
            int x= current_point.x+ dx[i];
            int y=current_distance.y +dy[i];
            if(x<1 || x>n ||y<1 || y <n) continue;
            if(a[x][y] ==1) continue;
            marked[x][y]=true;
            qu.push(iii(current_distance +1, ii(x,y)));
        }
    }
    
}

int main(){
system("clear");
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    ft(i,1,n){
        ft(j,1,m){
            cin>>a[i][j];
            //a=1
            //a=0
        }
    }

    return 0;
}