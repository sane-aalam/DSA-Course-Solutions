
// 1137. N-th Tribonacci Number
// problem link - https://leetcode.com/problems/n-th-tribonacci-number/description/
// Solution 1 - Recursion - TLE
// Time Complexity - O(3^n) (There are 3 brances in every function)
// Space Complexity - O(n) (Recursive Stack Space)

class Solution {
public:
    int tribonacci(int n) {
        if(n == 0){
            return 0;
        }
        if(n <= 2){
            return 1;
        }

        // T0 = 0, T1 = 1, T2 = 1,
        // recurrance realtion 
        // this problem, given you this recurrance relation,but most of problem of you have to find out the formula to convert the code,this is beauty of dsa.
        // Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};

// output : Time Limit Exceeded (test cases failed!)
// wait we will clear it!