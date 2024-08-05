/*
Link: https://leetcode.com/problems/determine-if-string-halves-are-alike/description/
1704. Determine if String Halves Are Alike
You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.
Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.
Return true if a and b are alike. Otherwise, return false.

Example 1:
Input: s = "book"
Output: true
Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.

Example 2:
Input: s = "textbook"
Output: false
Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
Notice that the vowel o is counted twice.

Constraints:
2 <= s.length <= 1000
s.length is even.
s consists of uppercase and lowercase letters.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool halvesAreAlike(string s){
    int n = s.size();
    int i = (n / 2) - 1, j = i + 1, count_1 = 0, count_2 = 0;
    while (i >= 0 && j < n) {
        if (isVowel(s[i]))
            count_1++;
        if (isVowel(s[j]))
            count_2++;
        i--;
        j++;
    }
    if (count_1 == count_2)
        return true;
    return false;
}

bool isVowel(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    return false;
}

int main(){
    return 0;
}