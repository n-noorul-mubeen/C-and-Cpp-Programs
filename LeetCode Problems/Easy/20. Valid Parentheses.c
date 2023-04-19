/*Question
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 
Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 
Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.*/

//Code:
#include <string.h>
#include <stdlib.h>

bool isValid(char * s) {
    int n = strlen(s);
    if (n % 2 == 1) {
        return false;
    }
    int pairs[3][2] = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
    char *stack = malloc(n);
    int top = -1;
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        bool is_left = false;
        for (int j = 0; j < 3; j++) {
            if (ch == pairs[j][0]) {
                is_left = true;
                stack[++top] = ch;
                break;
            }
        }
        if (!is_left) {
            if (top == -1) {
                return false;
            }
            char left_ch = stack[top--];
            bool is_pair = false;
            for (int j = 0; j < 3; j++) {
                if (left_ch == pairs[j][0]) {
                    if (ch == pairs[j][1]) {
                        is_pair = true;
                    }
                    break;
                }
            }
            if (!is_pair) {
                return false;
            }
        }
    }
    return top == -1;
}
