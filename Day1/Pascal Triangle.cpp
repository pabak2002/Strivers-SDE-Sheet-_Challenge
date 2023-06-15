class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        int x=0;
        vector<int> v1,v2;
        if(numRows==1){
            v1.push_back(1);
            v.push_back(v1);
        }
        else{
            v1.push_back(1);
            v.push_back(v1);
            v1.push_back(1);
            v2=v1;
            v.push_back(v1);
            v1.clear();
            for(int i=2;i<numRows;i++)
            {
                x=0;
                v1.push_back(1);
                for(int j=0;j<v2.size()-1;j++)
                {
                    v1.push_back(v2[j]+v2[j+1]);
                }
                v1.push_back(1);
                v2=v1;
                v.push_back(v1);
                v1.clear();
            }
        }
        return v;
    }
};