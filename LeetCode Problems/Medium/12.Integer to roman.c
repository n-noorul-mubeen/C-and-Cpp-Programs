/*Question: 
12. Integer to Roman
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.
 
Example 1:
Input: num = 3
Output: "III"
Explanation: 3 is represented as 3 ones.
Example 2:
Input: num = 58
Output: "LVIII"
Explanation: L = 50, V = 5, III = 3.
Example 3:
Input: num = 1994
Output: "MCMXCIV"
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.*/

//Code:

#include <stdlib.h>

char *intToRoman(int number) {
    char *romanString = (char *)calloc(20, sizeof(char));
    int index = 0;
    while (number > 0) {
        while (number >= 1000) {
            romanString[index] = 'M';
            number -= 1000;
            index++;
        }
        if (number >= 900) {
            romanString[index] = 'C'; romanString[index + 1] = 'M';
            index += 2;
            number -= 900;
        }
        while (number >= 500) {
            romanString[index] = 'D';
            number -= 500;
            index++;
        }
        if (number >= 400) {
            romanString[index] = 'C'; romanString[index + 1] = 'D';
            index += 2;
            number -= 400;
        }
        while (number >= 100) {
            romanString[index] = 'C';
            number -= 100;
            index++;
        }
        if (number >= 90) {
            romanString[index] = 'X'; romanString[index + 1] = 'C';
            index += 2;
            number -= 90;
        }
        while (number >= 50) {
            romanString[index] = 'L';
            number -= 50;
            index++;
        }
        if (number >= 40) {
            romanString[index] = 'X'; romanString[index + 1] = 'L';
            index += 2;
            number -= 40;
        }
        while (number >= 10) {
            romanString[index] = 'X';
            number -= 10;
            index++;
        }
        if (number >= 9) {
            romanString[index] = 'I'; romanString[index + 1] = 'X';
            index += 2;
            number -= 9;
        }
        while (number >= 5) {
            romanString[index] = 'V';
            number -= 5;
            index++;
        }
        if (number >= 4) {
            romanString[index] = 'I'; romanString[index + 1] = 'V';
            index += 2;
            number -= 4;
        }
        while (number >= 1) {
            romanString[index] = 'I';
            number -= 1;
            index++;
        }
    }
    return romanString;
}
