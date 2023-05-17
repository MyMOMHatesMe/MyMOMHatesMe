// ASK/VIEW DOUBT


// SOLUTION


// HINT

// Problem
// Result
// Print Numbers
// Send Feedback
// Given the number 'n', write a code to print numbers from 1 to n in increasing order recursively.
// Input Format :
// Integer n
// Output Format :
// Numbers from 1 to n (separated by space)
// Constraints :
// 1 <= n <= 10000
// Sample Input 1 :
//  6
// Sample Output 1 :
// 1 2 3 4 5 6
// Sample Input 2 :
//  4
// Sample Output 2 :
// 1 2 3 4

// Your Code
// C++ (g++ 5.4)
// 1234567
void print(int n){
    //write your code here
    if(n!=1)
        print(n-1);
    cout<<n<<" ";
}

