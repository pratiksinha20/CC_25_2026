#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> mpp;
        for (int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
        }
        int max_freq = 0, min_freq =INT_MAX;
        char max_char, min_char;
        for (auto it : mpp)
        {
            if (it.second > max_freq)
            {
                max_freq = it.second;
                max_char = it.first;
            }
            if (it.second < min_freq)
            {
                min_freq = it.second;
                min_char = it.first;
            }
        }
        bool found = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != max_char && mpp[s[i]] == min_freq)
            {
                s[i] = max_char;
                found = true;
                break;
            }
        }
        if (!found)
        {
            s[0] = max_char;
        }
        cout << s << endl;
    }
    return 0;
}