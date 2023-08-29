class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int i=0,count=0;
        if(ruleKey=="type")
        {
            i=0;
        }
        else if(ruleKey=="color")
        {
            i=1;
        }else
        {
            i=2;
        }
        for(int j=0;j<items.size();j++)
        {
           // cout<<items[j][i]<<"=="<<ruleValue<<"\n";
            if(items[j][i]==ruleValue)
            {
                count++;
            }
        }
        return count;
    }
};