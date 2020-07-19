class Solution {
public:
    string reverseWords(string s) {
        int k=0;
        for(int i=0;i<s.size();++i)
        {
            //指向空格的末尾
            while(i<s.size()&&s[i]==' ') i++;
            if(i==s.size()) break;
            int j=i;
            //指向某一个单词的末尾
            while(j<s.size()&&s[j]!=' ') j++;
            reverse(s.begin()+i,s.begin()+j);
            if(k) s[k++]=' ';
            //遍历并存储这个单词
            while(i<j) s[k++]=s[i++];
        }
        return s;
    }
};   