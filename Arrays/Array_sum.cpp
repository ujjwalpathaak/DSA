/* 
Array Sum
Send Feedback
Given an array of length N, you need to find and print the sum of all elements of the array.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Sum
Constraints :
1 <= N <= 10^6
Sample Input :
3
9 8 9
Sample Output :
26 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int array[1000000], N, i, sum = 0;
    cin >> N;
    for(i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    for(i = 0; i < N; i++)
    {
     sum = sum + array[i];
    }
    cout << sum;
    return 0;
}