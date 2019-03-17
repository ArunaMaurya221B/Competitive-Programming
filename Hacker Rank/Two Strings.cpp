#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    set<char>s;
    set<char>temp1, temp2;
    set<char>::iterator it;

    for(int i=0;i<s1.length();i++)
    temp1.insert(s1[i]);

    for(int i=0;i<s2.length();i++)
    temp2.insert(s2[i]);

    for(it=temp1.begin();it!=temp1.end();it++)
    s.insert(*it);

    for(it=temp2.begin();it!=temp2.end();it++)
    s.insert(*it);

    if(s.size() == temp1.size()+ temp2.size())
    return "NO";
    else
    return "YES";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
