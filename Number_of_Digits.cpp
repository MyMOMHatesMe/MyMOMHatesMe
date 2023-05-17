



// ASK/VIEW DOUBT


// SOLUTION


// HINT

// Problem
// Result
// Number of Digits
// Send Feedback
// Given the number 'n', find out and return the number of digits present in a number .
// Input Format :
// Integer n
// Output Format :
// Count of digits
// Constraints :
// 1 <= n <= 10^6
// Sample Input 1 :
//  156
// Sample Output 1 :
// 3
// Sample Input 2 :
//  7
// Sample Output 2 :
// 1

// Your Code
// C++ (g++ 5.4)
// 123456789
int count(int n){
    //write your code here
    if(n>=1&&n<=1000000){
      if (n / 10 == 0)
        return 1;
      return 1 + count(n / 10);
    }
}


// CUSTOM INPUT


// SUBMIT SOLUTION


// PREVIOUS


// NEXT

