#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int valley=0, c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='U')
        c++;
        else
        c--;

        if(c==0 && s[i]=='U')
        valley++;
    }
    return valley;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

