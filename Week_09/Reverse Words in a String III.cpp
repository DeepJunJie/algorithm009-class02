class Solution {
public:
    string reverseWords(string s) {
        int k=0;
        for(int i=0;i<s.size();++i)
        {
            //ָ��ո��ĩβ
            while(i<s.size()&&s[i]==' ') i++;
            if(i==s.size()) break;
            int j=i;
            //ָ��ĳһ�����ʵ�ĩβ
            while(j<s.size()&&s[j]!=' ') j++;
            reverse(s.begin()+i,s.begin()+j);
            if(k) s[k++]=' ';
            //�������洢�������
            while(i<j) s[k++]=s[i++];
        }
        return s;
    }
};   