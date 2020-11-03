bool abc(vector<int> g[],int i,int visited[],int rec[])
{
    visited[i]=1;
    rec[i]=1;
    for( int x: g[i])
    {
    if(visited[x]==-1)
    {
        if(abc(g,x,visited,rec)==true)
        {
            return true;
        }
    }
    else if(rec[x]==1)
    {
        return true;
    }
    }
    rec[i]=-1;
    return false;
}

bool isCyclic(int N,vector<int> g[])
{
    int visited[N],rec[N];
   for(int i=0;i<N;i++)
   {
       visited[i]=-1;
       rec[i]=-1;
   }
   for(int i=0;i<N;i++)
   {
       if(visited[i]==-1)
       {
           if(abc(g,i,visited,rec)==true)
           return true;
       }
   }
   return false;
}   