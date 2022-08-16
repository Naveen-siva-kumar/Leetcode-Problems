class Solution {
public:
    int firstUniqChar(string s) {
        
        int ans=INT_MAX;
        
        map<char,int> charFrequencyMap;
        
        //cout<<s.length();
        
        for(int i=0;i<s.size();i++){
            //cout<<s[i]<<" ";
            if(charFrequencyMap.find(s[i]) == charFrequencyMap.end()){
                
                charFrequencyMap[s[i]]=i;
            }
            else{
                
                charFrequencyMap[s[i]]= INT_MAX;
            }
            //cout<<charFrequencyMap[s[i]]<<"\n";
        }
        
        //cout<<charFrequencyMap.size()<<endl;
        //cout<<endl;
        
        for(auto const &ele : charFrequencyMap){
            
            //cout<<ele.first<<" "<<ele.second<<endl;
            
//             if(ele.second!=INT_MAX){
                
//                 return ele.second;
//             }
            ans = min(ans,ele.second);
            
        }
        
        return  ans==INT_MAX ? -1 : ans;
        
    }
};