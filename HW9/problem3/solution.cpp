#include <string>
#include <map>
using namespace std;
class Solution {
public:
    bool isScramble(string s1, string s2) {
        map<string, bool> mp;
        return scramble(s1, s2, mp);
    }
    bool scramble(string s1, string s2, map<string, bool>& mp) {
        if (s1 == s2)
            return true;

        int len = s1.length();
        int count[26] = { 0 };
        if (mp.find(s1 + s2) != mp.end()) return mp[s1 + s2];
        for (int i = 0; i < len; i++)
        {
            count[s1[i] - 'a']++;
            count[s2[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
                return mp[s1 + s2] = false;
        }

        for (int i = 1; i <= len - 1; i++)
        {
            if (scramble(s1.substr(0, i), s2.substr(0, i), mp) && scramble(s1.substr(i), s2.substr(i), mp))
                return mp[s1 + s2] = true;
            if (scramble(s1.substr(0, i), s2.substr(len - i), mp) && scramble(s1.substr(i), s2.substr(0, len - i), mp))
                return mp[s1 + s2] = true;
        }
        return mp[s1 + s2] = false;
    }

};