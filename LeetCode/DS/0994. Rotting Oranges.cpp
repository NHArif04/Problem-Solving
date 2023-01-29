class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int oranges=0;//contains total oranges present 
        int count=0;//contains count of rotten oranges
        int ans=0;
        queue<pair<int,int>> rotten;//used for bfs
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){oranges++;}//counting oranges
                if(grid[i][j]==2){rotten.push({i,j});}//storing indexes of rotten oranges for BFS.
            }
        }          
        int dx[4]={0,0,1,-1};//used for checking nearby oranges
        int dy[4]={1,-1,0,0};

        while(!rotten.empty()){
            int k=rotten.size();
            count+=k;//increase count by number of rotten oranges
            while(k--){//checking nearby oranges of rotten oranges
                int x=rotten.front().first;
                int y=rotten.front().second;
                rotten.pop();//removing that index from queue after checking
                for(int i=0;i<4;i++){
                    int newx=x+dx[i];
                    int newy=y+dy[i];
                    if(newx<0 || newx>=m || newy<0 || newy>=n || grid[newx][newy]!=1){continue;}//if nearby orange doesn't exist or is rotten already
                    grid[newx][newy]=2;//mark orange rotten
                    rotten.push({newx,newy});//insert it's index in queue
                }
            }
            if(!rotten.empty()){
                ans++;//increase the time by 1
            }
        }  
        if(oranges==count){//if all oranges can get rotten
            return ans;
        }
        return -1;//if some oranges can't get rotten
    }
};