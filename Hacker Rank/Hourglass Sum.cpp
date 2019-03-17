#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int large = -10000, sum=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            for(int k=j;k<j+3;k++){
                 sum=sum+arr[i][k];
            }
            sum=sum+arr[i+1][j+1];

            for(int k=j;k<j+3;k++){
                 sum=sum+arr[i+2][k];
            }

            if(sum>large)
            large=sum;

            sum=0;
        }
    }
    return large;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

