class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int word_size = wordList[0].length(), list_size = wordList.size();
      
        vector<set<string>> levels(list_size + 1, set<string>());
        vector<int> flags(list_size, 0);
        levels[0].insert(beginWord);
        for (int i = 0; i < levels.size(); i++) {  
            for (auto it = levels[i].begin(); it != levels[i].end(); it++) {  
                
                for (int k= 0; k < list_size; k++) { 
                    if (flags[k] == 1) continue;
                    int l = 0, cnt = 0;
                    while (l < word_size && cnt <= 1) {
                        if ((*it)[l] != wordList[k][l]) cnt++;
                        l++;
                    }
                    if (cnt == 1) {
                        flags[k] = 1;
                        levels[i+1].insert(wordList[k]);
               
                        if (wordList[k] == endWord) return i + 2;
                    }
                }
            }
        }
        return 0;
    }
};
 