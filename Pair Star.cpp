



ASK/VIEW DOUBT


SOLUTION

Problem
Result
Pair Star
Send Feedback
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a

Your Code
C++ (g++ 5.4)
1234567891011121314151617
// Change in the given string itself. So no need to return or print the changed string.

void pairStar(char input[]) {
    if(input[0]=='\0'){
        return;
    }
    char s,t;
    int i=0;
    s=input[1];
	if(input[0]==input[1]){


CUSTOM INPUT


SUBMIT SOLUTION


PREVIOUS


NEXT


