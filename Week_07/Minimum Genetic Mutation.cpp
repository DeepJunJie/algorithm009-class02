class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        vector<set<string>> levels(bank.size()+2,set<string>());
        vector<int>flag(bank.size(),0); 
        levels[0].insert(start); 
        for(int i=0;i<levels.size();i++)
            for(auto it=levels[i].begin();it!=levels[i].end();it++)
               for(int k=0;k<bank.size();k++){      
                   if(flag[k]==1) continue;              
                   int j=0,cont=0;
                   while(j<bank[k].length() && j<(*it).length()){
                         if(bank[k][j]!=(*it)[j])cont++;
                            j++;
                   }
                   if(cont==1){
                      levels[i+1].insert(bank[k]);
                      flag[k]=1;
                       if(bank[k]==end) return i+1;
                   }
              }
        return -1;
    }
};