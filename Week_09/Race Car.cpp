class Solution {
private:
    int m_[10002];
public:
    int racecar(int target) {
        memset(&m_,0,10002 * sizeof(int));
        return dp(target);
    }
    int dp(int t){
        if (m_[t] > 0) return m_[t];
        int n = ceil(log2(t+1));
        if(1<<n == t + 1) return m_[t] = n;
        m_[t] = n+1+dp((1<<n) - 1 - t);
        for(int i = 0;i<n-1;i++){
            int cur = t - (1<<(n-1))  + (1 << i) ;
            m_[t] = min(m_[t],n+i+1+dp(cur));
        }
        return m_[t];
    }
}; 