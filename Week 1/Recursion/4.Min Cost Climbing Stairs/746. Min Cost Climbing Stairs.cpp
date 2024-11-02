


// 746. Min Cost Climbing Stairs
// Problem link - https://leetcode.com/problems/min-cost-climbing-stairs/
// Solution 1 - Recursion - TLE
// Time Complexity - O(2^n) (There are 2 brances in every function)
// Space Complexity - O(n) (Recursive Stack Space)

#include <vector>
using namespace std;

class Solution {
private:
    int helper(int index, vector<int> & cost){
        if(index < 0){
            return 0;
        }
        if(index == 0){
            return cost[index];
        }
        int left = cost[index] + helper(index-1,cost);
        int right = cost[index] + helper(index-2,cost);
        // return minimum cost to jump to reached 0nth - nth stairs 
        return min(left,right);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int result1 = helper(n-1,cost);
        int result2 = helper(n-2,cost);
        // Return the minimum cost to reach the top of the floor.
        return min(result1,result2);
    }
};