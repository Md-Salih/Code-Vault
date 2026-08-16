class Solution {
public:
    bool stoneGameIX(vector<int>& stones) 
    {
        //time complexity: O(n)
        //space complexity: O(1)

        //counting stones based on their remainder modulo 3
        vector<int> count(3,0);

        //incrementing count for each remainder class
        for(const int stone:stones) 
            count[stone%3]++;
        
        //if count[0] is even, Alice needs both 1 and 2
        if(count[0] % 2 == 0) 
            return (min(count[1],count[2]) > 0);
        
        //if count[0] is odd, one remainder must dominate by > 2
        return (abs(count[1]-count[2]) > 2);
    }
};