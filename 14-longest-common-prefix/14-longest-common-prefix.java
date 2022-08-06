class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int commonPrefixSize = 200,temp = -1;
        
        string commonPrefix=strs[0];
        
        
        
        for(int i=1;i<strs.size();i++){
            
            temp=-1;
            for(int j=0;j<std::min(strs[i].size(),strs[0].size());j++){
                
                if(strs[i][j]==strs[0][j]){
                    temp++;
                }
                else{break;}
                
            }
            commonPrefixSize = std::min(commonPrefixSize,temp);
            if(commonPrefixSize==-1) return "";
            //cout<<" i am in loop "<<i<<" "<<commonPrefixSize<<endl;
        }
        
        if(commonPrefixSize!=-1)
         return commonPrefix.substr(0,commonPrefixSize+1);
        else return "";
    }
};