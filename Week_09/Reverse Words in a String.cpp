class Solution {
public:
    string reverseWords(string s) {
        int len = s.size(), blank_num = 0, prune = (int) (s[0]==' ');
        char *tail = &s[len], *start = &s[0], *end = &s[0]-1;
        reverse(start, tail);
        while (true){
            while (++end<tail && *end == ' ')blank_num ++;
            while (++end<tail && *end != ' '){}
            reverse(start, end);
            if (end>=tail)return s.substr(0, len-blank_num-prune);
            start = end - blank_num + 1;
        }
    }
};