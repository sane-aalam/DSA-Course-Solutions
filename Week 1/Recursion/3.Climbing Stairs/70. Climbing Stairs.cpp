

// 70. Climbing Stairs
// problem link - https://leetcode.com/problems/climbing-stairs/description/
// Solution 1 - Recursion - TLE
// Time Complexity - O(2^n) (There are 2 brances in every function)
// Space Complexity - O(n) (Recursive Stack Space)

class Solution {
public:
    int climbStairs(int n) {
        // base case (return control of program, where the function is execute!)
        if(n <=1 ){
            return 1;
        }
        int jumpOneSteps = climbStairs(n-1);
        int jumpSecondSteps = climbStairs(n-2);
        // how many distinct ways can you climb to the top?
        // total number of ways (need to sum-up all calls)
        return jumpOneSteps + jumpSecondSteps;
    }
};
// output - Time Limit Exceeded