/*
Link: https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/
1582. Special Positions in a Binary Matrix
Given an m x n binary matrix mat, return the number of special positions in mat.
A position (i, j) is called special if mat[i][j] == 1 and all other elements in row i and column j are 0 (rows and columns are 0-indexed).

Example 1:
Input: mat = [[1,0,0],[0,0,1],[1,0,0]]
Output: 1
Explanation: (1, 2) is a special position because mat[1][2] == 1 and all other elements in row 1 and column 2 are 0.

Example 2:
Input: mat = [[1,0,0],[0,1,0],[0,0,1]]
Output: 3
Explanation: (0, 0), (1, 1) and (2, 2) are special positions.
 
Constraints:
m == mat.length
n == mat[i].length
1 <= m, n <= 100
mat[i][j] is either 0 or 1.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int numSpecial(vector<vector<int>>& mat){
        int n=mat.size(),m=mat[0].size();
        int sp=0;
        int row=0,col=0;
        while(row<n && col<m){
            if(mat[row][col]==1){
                cout<<row<<"  "<<col<<endl;
                if(isSpecial(row,col,n,m,mat)){
                    sp++;
                }
            }
            col++;
            if(col==m){
                row++;
                col=0;
            }
        }
        return sp;
    }

bool isSpecial(int row, int col,int n, int m, vector<vector<int>> & mat){
    int i=0,j=0;
    while(i<m){
        if(mat[row][i]!=0 && i!=col){
            cout<<row<<" "<<i<<endl;
            return false;
        }
        i++;
    }
    while(j<n){
        if(mat[j][col]!=0 && j!=row){
        cout<<row<<" "<<j<<endl;
        return false;
        }
        j++;
    }
    return true;
}

int main(){
    return 0;
}