/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        /* 
            Create the preorder list using queue and then add level by level
            
        */
        if(root->left==nullptr && root->right==nullptr){
            return 1;
        }
        queue<TreeNode*> Q;
        vector<int> levelSumVec;
        int levelSum = 0;
        bool loop =true;
        Q.push(root);
        TreeNode* temp;
        
        int max = INT_MIN;
        int ans=0;
        int level=0;
        
        while(!Q.empty()){
            levelSum = 0;
            int size = Q.size();
            for(int i=0;i<size;i++){
                levelSum+=Q.front()->val;
                if(Q.front()->left){
                    Q.push(Q.front()->left);
                        
                }
                if(Q.front()->right){
                    Q.push(Q.front()->right);
                        
                }
                
                
                Q.pop();
                
            }
            level++;
            
            if(max<levelSum){
                max = levelSum;
                ans=level;
            }
            //levelSumVec.push_back(levelSum);
            
            //Q.pop();
            
        }
//         int max=INT_MIN,ans = 0;
//         for(int i=0;i<levelSumVec.size();i++){
//             cout<<levelSumVec[i]<<" ";
//             if(max<levelSumVec[i]){
//                 max = levelSumVec[i];
//                 ans = i;
//             }
            
//         }
        return ans;
        
//         vector<pair<int,int>> levelWisePairs;
        
//         Q.push({root,1});
//         levelWisePairs.push_back({root->val,1});
//         int level=0;
//         pair<TreeNode*,int> temp;
//         //TreeNode* temp;
        
//         while(!Q.empty()){
            
//             temp = Q.front();
//             //cout<<"root "<<temp.first->val<<endl;
//             Q.pop();
//             //cout<<"Q.size()"<<Q.size()<<endl;
           
//             if(temp.first->left){//!=nullptr){
//                 Q.push({temp.first->left,temp.second+1});
//                 levelWisePairs.push_back({temp.first->left->val,temp.second+1});
//                 level=temp.second+1;
//                 cout<<"left guy "<<temp.first->left->val<<endl;
//                 cout<<level<<" "<<endl;
                
//             }
            
            
//             if(temp.first->right){//!=nullptr){
//                 Q.push({temp.first->right,temp.second+1});
//                 levelWisePairs.push_back({temp.first->right->val,temp.second+1});
//                 level=temp.second+1;
//                 cout<<"right guy "<<temp.first->right->val<<endl;
//                 cout<<level<<" "<<endl;
//             }
//             //cout<<level<<" "<<endl;
            
            
//         }
        
//         int* levelSum = new int[level+1]{0};
        
//         for(int i=0;i<levelWisePairs.size();i++){
//             cout<<levelWisePairs[i].second<<" ";
//             levelSum[levelWisePairs[i].second]+=levelWisePairs[i].first;
//         }
//         int max= INT_MIN,ans=0;
//         for(int i=1;i<=level;i++){
//             if(max<levelSum[i]){
//                 max = levelSum[i];
//                 ans = i;
//             }
//             cout<<levelSum[i];
//         }
        
//         return ans;
        
        
        
    }
};