
class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        int cost=0, open=0;
        
        for(int i=0;i<n;i++){
            
            if(s[i] == '(')
                open++;
            else{
               
                if(open==0){
                    cost++;                    
                }
                else{
					
                    open--;
                }
               
                if(i==n-1 or s[i+1] != ')')cost++;
                else i++;
            }
        }
        
        cost += 2*(open); //this is for all those ( paranthesis still not closed
        return cost;
    }
};











































// class Solution {
// public:
//     int minInsertions(string s) {
        
//         //stack <char> paranthesis;
        
//         int ans =0;
//         int left =0,right=0;
        
//         for(int i=0;i<s.size();){
//             while(i<s.size()&&s[i]=='('){
//                 left++;i++;
//             }
//             while(i<s.size()&&s[i]==')'){
//                 right++;i++;
//             }
//             if(2*left==right){
//                 continue;
//             }
//             //cout<<"left"<<left<<"right"<<right<<endl;
//             while(left!=0 || right !=0){
                
//                 if(left>0 && right>=2){
//                     cout<<"nnb4left"<<left<<"right"<<right<<"ans"<<ans<<endl;
//                     left-=1;
//                     right-=2;
//                     //ans+=1;
//                     cout<<"nnleft"<<left<<"right"<<right<<"ans"<<ans<<endl;
//                     continue;
//                 }
//                 if(left==1&&right==1){
//                     cout<<"11b4left"<<left<<"right"<<right<<"ans"<<ans<<endl;
//                     left-=1;right-=1;
//                     ans+=1;
//                     cout<<"11left"<<left<<"right"<<right<<"ans"<<ans<<endl;
//                     continue;
//                 }
//                 if(left==0){
//                     //cout<<"iamhere";
//                     cout<<"0nb4left"<<left<<"right"<<right<<"ans"<<ans<<endl;
//                     while(right!=0){
//                         if(right==1){
//                             ans+=2;
//                             right-=1;
//                         }
//                         if(right>1){
//                             right-=2;
//                             //cout<<"iam";
//                             ans+=1;
//                         }
//                         cout<<"0nleft"<<left<<"right"<<right<<"ans"<<ans<<endl;
//                     }
//                 }
//                 if(right==0){
//                     cout<<"n0b4left"<<left<<"right"<<right<<"ans"<<ans<<endl;
//                     while(left!=0){
//                         ans+=2;
//                         left-=1;
//                         cout<<"n0left"<<left<<"right"<<right<<"ans"<<ans<<endl;
//                     }
//                 }
//                 if(left>0&&right<2){
//                     cout<<"02b4left"<<left<<"right"<<right<<"ans"<<ans<<endl;
//                     while(left!=0){
//                         ans+=2;
//                         left--;
//                     }
//                     cout<<"02midleft"<<left<<"right"<<right<<"ans"<<ans<<endl;
//                     while(right!=0){
//                         ans-=1;
//                         right--;
//                     }
//                     cout<<"02left"<<left<<"right"<<right<<"ans"<<ans<<endl;
//                 }
//             }
//         }
        
// //         for(int i=s.size()-1;i>-1;i--){
            
// //             if(s[i]==')'){
// //                 paranthesis.push(s[i]);
// //             }
// //             else if(s[i]=='('){
// //                 if(paranthesis.empty()) { 
// //                     ans+=2;
// //                     continue;
// //                 }
// //                 else{
// //                     if(paranthesis.top()==')'){
// //                         paranthesis.pop();
// //                         //continue;
// //                     }
// //                     else{
// //                         ans++;
// //                     }
                    
// //                     if(paranthesis.empty()) { 
// //                         ans+=1;
// //                         //continue;
// //                     }
// //                     else{
// //                         if(paranthesis.top()==')')
// //                             paranthesis.pop();
// //                         else 
// //                             ans++;
// //                     }
// //                 }
                
                
// //             }
// //         }
// //         temp = paranthesis.size();
// //         //cout<<temp;
// //         while(temp!=0){
            
// //             if(temp == 1){
// //                 ans+=2;
// //                 temp--;
// //             }
// //             else if(temp>1){
// //                 temp-=2;
// //                 ans++;
// //             }
// //         }
//          return ans;
//     }
// };