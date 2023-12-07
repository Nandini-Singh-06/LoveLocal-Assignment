#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size() - 1;
        int x = 0;

        while (size >= 0) {
            if (isalpha(s[size])) {
                x++;
                size--;
            } else {
                if (x != 0)
                    break;
                else
                    size--;
            }
        }
        return x;
    }
};

int main() 
{
    Solution solution;
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    int result = solution.lengthOfLastWord(input);
    cout << "Length of Last Word: " << result << endl;

    return 0;
}