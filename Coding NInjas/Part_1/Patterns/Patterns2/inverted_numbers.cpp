/* 
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
55555 
4444
333
22
1
Sample Input 2:
6
Sample Output 2:
666666
55555 
4444
333
22
1 */
#include<iostream>
using namespace std;


int main(){
    int N, i, val;
    cin >> N;
    i = 1;
   
    while(i<=N){
                      /*int spaces = 1;
                      while(spaces <= N - i){
                      cout << ' ';
                      spaces++;
                      }*/
        int j =  1;
         val = N + 1 - i;
        while(j<= N  + 1 - i ){
            cout << val;
            j++;
             //val--;
        }
       
        cout << endl;
        i++;
    }
return 0;
}
