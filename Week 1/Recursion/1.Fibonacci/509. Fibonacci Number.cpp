// steps to solve any problem
// point-1 Actual problem  
// point-2 Identification sub problem
// point-3 Trust (Faith) - Don't overthink(how this will works)?
// point-4 Like Actual problem & sub problem
// point-5 base condition (base case), (Termination condtion, how to control the stack overflow condition)

// https://leetcode.com/problems/fibonacci-number

// Solution 1 - Recursion - TLE
// Time Complexity - O(2^n)
// Space Complexity - O(n) (Recursive Stack Space)
// F(n) = F(n - 1) + F(n - 2),

class Solution {
public:
    int fib(int n) {
        // base case 
        if(n <= 1){
            return n;
        }
        return fib(n-1) + fib(n-2);
    }
};

class Solution {
public:
    int fib(int n) {
        // base condtion 
        if(n <= 1){
            return n;
        }

        int lastFibNumber = fib(n-1);
        int secondLastFibNumber = fib(n-2);
        return lastFibNumber + secondLastFibNumber;
    }
};