#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<vector<int>> a(n,vector<int>(m));
        vector<int> rowSum(n,0), colSum(m,0);
        int total = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
                rowSum[i] += a[i][j];
                colSum[j] += a[i][j];
                total += a[i][j];
            }
        }

        int sumR = 0, sumC = 0;
        int maxVal = 0;
        int rCut = 0, cCut = 0;

        // row-wise cut
        sumR = 0;
        for(int i=0;i<n;i++){
            sumR += rowSum[i];
            int val = sumR * (total - sumR);
            if(val > maxVal){
                maxVal = val;
                rCut = i; // row index for last 'D'
                cCut = -1; // indicates row-wise
            }
        }

        // column-wise cut
        sumC = 0;
        for(int j=0;j<m;j++){
            sumC += colSum[j];
            int val = sumC * (total - sumC);
            if(val > maxVal){
                maxVal = val;
                rCut = -1; // column-wise
                cCut = j; // last 'R' column index
            }
        }

        cout << maxVal << "\n";

        // build path for maxVal
        string path;
        if(rCut!=-1){ // row-wise
            for(int i=0;i<=rCut;i++){
                if(i>0) path+='D';
                for(int j=0;j<m-1;j++) path+='R';
            }
            for(int i=rCut+1;i<n;i++){
                path+='D';
                for(int j=0;j<m-1;j++) path+='R';
            }
        }else{ // column-wise
            for(int j=0;j<=cCut;j++){
                if(j>0) path+='R';
                for(int i=0;i<n-1;i++) path+='D';
            }
            for(int j=cCut+1;j<m;j++){
                path+='R';
                for(int i=0;i<n-1;i++) path+='D';
            }
        }

        cout << path << "\n";
    }
    return 0;
}
