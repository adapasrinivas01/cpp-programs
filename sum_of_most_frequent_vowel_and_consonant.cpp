class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>fv;
        unordered_map<char,int>fc;
        int mv=0,mc=0;
        for(int i=0;i<s.size();i++)
            {
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
{
    fv[s[i]]++;
    mv=max(mv,fv[s[i]]);
}
                else{
                    fc[s[i]]++;
                    mc=max(mc,fc[s[i]]);
                }
            }
        return mv+mc;
        
    }
};
