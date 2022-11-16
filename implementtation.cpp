#include <bits/stdc++.h>
using namespace std;
#define MAX 20

int n,M;
int a[MAX];
int t[MAX];
int x[MAX];
int f;
int count;
void initT(){
    t[1]=a[1];
    int i;
    for ( i = 1; i <= n; i++)
    {
        t[i]=t[i-1]+a[i];
    }
    
}

void solution(){
    if(f==M ){
        count++;  
    }
}
void TRY(int k){
    int v;
    for ( v = 1; v<=n ; v++)
    {
        /* code */
    }
    
}

int main(){
    cin>>n>>M;
    for (int j=1 ; j<=n;j++){
        cin>>a[j];
    }
}