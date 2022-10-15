/*
Special binary strings are binary strings with the following two properties:

    The number of 0's is equal to the number of 1's.
    Every prefix of the binary string has at least as many 1's as 0's.

You are given a special binary string s.

A move consists of choosing two consecutive, non-empty, special substrings of s, and swapping them. Two strings are consecutive if the last character of the first string is exactly one index before the first character of the second string.

Return the lexicographically largest resulting string possible after applying the mentioned operations on the string.
*/

string makeLargestSpecial(string S) {
    int count = 0, i = 0;
    vector<string> res;
    for (int j = 0; j < S.size(); ++j) {
      if (S[j] == '1') count++;
      else count--;
      if (count == 0) {
        res.push_back('1' + makeLargestSpecial(S.substr(i + 1, j - i - 1)) + '0');
        i = j + 1;
      }
    }
    sort(res.begin(), res.end(), greater<string>());
    string res2 = "";
    for (int i = 0; i < res.size(); ++i) res2 += res[i];
    return res2;
  }
