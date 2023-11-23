#include <stdio.h>

int G[10][10], visited[10], Q[10],n, front=0, rear=0;

void BFS(int i)
{
    visited[i] = 3;
    for(int j=1;j<=n;j++)
    {
        if(G[i][j]==1 && visited[j]==1)
        {
            Q[++rear]=j;
            visited[j]=2;

            //printf("\nat %d, node is %d",j,Q[j]);
        }
    }

    if(front<=rear)
        BFS(Q[front++]);

}


int main(void) {
    int i,j,s;
    printf("\nEnter the number of vertices : ");
    scanf("%d",&n);
    printf("\nEnter the values for an adjacency matrix : ");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&G[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        visited[i]=1;
        Q[i]=0;
    }
    printf("\nEnter the starting node : ");
    scanf("%d",&s);
    Q[++rear]=s;
    front=1;
    visited[s]=2;
    BFS(s);

    for(i=1;i<=n;i++)
    {
        if(Q[i]!='0')
            printf(" %d",Q[i]);
    }


    return 0;
}
