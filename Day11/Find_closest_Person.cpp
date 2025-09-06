// https://leetcode.com/problems/find-closest-person/description/?envType=daily-question&envId=2025-09-04class Solution {
public:
    int findClosest(int x, int y, int z) {
        
        if ( x == y) return 0;
        else if (abs(x - z) < abs(y - z)) return 1;
        else if (abs(x - z) > abs(y - z)) return 2;
        else return 0;
    }
};