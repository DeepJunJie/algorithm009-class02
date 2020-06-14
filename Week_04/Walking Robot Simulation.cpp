class Solution {
public:   
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<vector<int>> Ob;
        for(int j=0;j<obstacles.size();j++)
           Ob.insert(obstacles[j]);
        int result=0,x=0,y=0,dx=0,dy=1,d_ind=0;
        vector<vector<int>>d{{0,1},{1,0},{0,-1},{-1,0}};
        vector<int> P={0,0};
        for(int i=0;i<commands.size();i++) {
            if(commands[i]==-1) d_ind++;
            if(commands[i]==-2) d_ind--;
            if(d_ind==4) d_ind=0;
            if(d_ind==-1) d_ind=3;
            for(int j=1;j<=commands[i];j++){
                 P[0]+=d[d_ind][0];
                 P[1]+=d[d_ind][1];
               if(Ob.count({P[0],P[1]})!=0){
                 P[0]-=d[d_ind][0];
                 P[1]-=d[d_ind][1];
                 break;
               } 
            }
            result = result>P[0]*P[0]+P[1]*P[1] ? result : P[0]*P[0]+P[1]*P[1];
        }
        return result;
    }
};