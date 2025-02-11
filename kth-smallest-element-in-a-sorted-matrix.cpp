//Time - O(mnlog(k))
//Space - O(1)

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>p;
        for(auto i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                p.push(matrix[i][j]);
                if(p.size()>k)
                    p.pop();
            }
        }
        return p.top();
    }
};