



ASK/VIEW DOUBT


SOLUTION


HINT

Problem
Result
Multiplication (Recursive)
Send Feedback
Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
Input format :
Line 1 : Integer M
Line 2 : Integer N
Output format :
M x N
Constraints :
0 <= M <= 1000
0 <= N <= 1000
Sample Input 1 :
3 
5
Sample Output 1 :
15
Sample Input 2 :
4 
0
Sample Output 2 :
0

Your Code
C++ (g++ 5.4)
123456789
int multiplyNumbers(int m, int n) {
    // Write your code here
	if(m==0)
    return 0;
	return n+multiplyNumbers(m-1,n);
}




CUSTOM INPUT


SUBMIT SOLUTION


PREVIOUS


NEXT


