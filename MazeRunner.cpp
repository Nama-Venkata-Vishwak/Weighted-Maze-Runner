#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int row = 20;
const int col = 20;
int p,q;
int minCost(int cost[row][col],int maze[row][col]) {
// for 1st column
for (int i=p-1 ; i>0 ; i--){
if(maze[i][0]==1)
maze[i-1][0]=1;
else
cost[i-1][0] += cost[i][0];
}
// for 1st row
for (int j=1 ; j<q ; j++){
if(maze[0][p-1]==1)
maze[p-1][j]=1;

else
cost[p-1][j] += cost[p-1][j-1];
}
// for rest of the 2d matrix
for (int i=p-2 ; i>=0 ; i--) {
for (int j=1 ; j<q ; j++) {
if(maze[i][j-1]==1&&maze[i+1][j]==1)
maze[i][j]=1;
else if(maze[i][j-1]==1)
cost[i][j]+=cost[i+1][j];
else if (maze[i+1][j]==1)
cost[i][j]+=cost[i][j-1];
else
cost[i][j] += min(cost[i+1][j],cost[i][j-1]);
}
}
// returning the value in last cell
return cost[0][q-1]; }
int main(int argc, char const *argv[])
{
int cost[row][col],maze[row][col];
cout<<"Insert the values of row and column";
cin>>p>>q;
for(int i=0;i<p;i++)
for(int j=0;j<q;j++)
cin>>cost[i][j];
for(int i=0;i<p;i++)
for(int j=0;j<q;j++)
cin>>maze[i][j];
cout << minCost(cost,maze) << endl;
return 0;
}
