#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int l=s.length();
    long long int no=0, k=0, m=0, c=0;

    for(int i=0;i<l;i++)
    if(s[i]=='a')
    no++;

     k = ((n/l)*no);
    m = n%l;
    c=0;
    for(int i=0;i<m;i++){
        if(s[i]=='a')
        c++;
    }
    return k+c;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

