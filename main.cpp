

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <cmath>

using namespace std;


void printVector(vector<int> asd){
    for(int i=0;i<asd.size();i++){
        cout<<asd.at(i)<<" ";
    }
    cout<<endl;
}
//not to fast

/*
    Runtime: 44 ms, faster than 5.27% of C++ online submissions for Sqrt(x).
    Memory Usage: 5.9 MB, less than 25.01% of C++ online submissions for Sqrt(x).
*/

/*int mySqrt(int x) {
    for(long i =0;i<=x;i++){
        if(x==i*i)
            return i;
        else if(i*i<x && (i+1)*(i+1)>x)
            return i;
    }
    return 0;
}*/


/*
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sqrt(x).
    Memory Usage: 5.9 MB, less than 73.31% of C++ online submissions for Sqrt(x).
 */
int mySqrt(int x) {
    int min=0;
    long max=x;
    for(long i=0;i<=x;i++){
        if(x==i*i)
            return i;
        else if(i*i<x && (i+1)*(i+1)>x)
            return i;
        else if(i*i<x){
            min=i+1;
            i=(min+max)/2-1;
        }
        else if(i*i>x){
            max=i-1;
            i=(min+max)/2-1;
        }
    }
    return 0;
}
 // Driver code
 int main()
 {
    cout<<mySqrt(4)<<endl;
    cout<<mySqrt(8)<<endl;
    cout<<mySqrt(9)<<endl;
    cout<<mySqrt(2147483647)<<endl;
    return 0;
 }


