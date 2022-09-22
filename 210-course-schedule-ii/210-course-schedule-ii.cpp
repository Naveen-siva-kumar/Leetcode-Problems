class Solution {
   
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> adjMat(numCourses, vector<int>());
        
        int inEdges[numCourses];// = {0};
        memset(inEdges,0,numCourses*sizeof(int));
        
        queue<int> q;
        vector<int> zeroInDegreeNode;
        vector<int> ans;
        int totalEdges =0;
        
        //create adjacency matrix
        for(int i=0;i<prerequisites.size();i++){
            
            adjMat[prerequisites[i][1]].push_back(prerequisites[i][0]);     
            inEdges[prerequisites[i][0]]++;
        }
        for (int i = 0; i < numCourses; i++) {
            if (inEdges[i] == 0) {
                q.push(i);
            }
        }
        while (!q.empty()) {
            totalEdges++;
            int node_id = q.front();
            q.pop();
            ans.push_back(node_id);
            
            for (auto neighber_id : adjMat[node_id]) {
                inEdges[neighber_id]--;
                if (inEdges[neighber_id] == 0) {
                    q.push(neighber_id);
                }
            }
        }
        
        if (ans.size() == numCourses)
            return ans;
        else
            return vector<int>();
        
    }
};