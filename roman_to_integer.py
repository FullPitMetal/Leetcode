class Solution:
    def romanToInt(s: str) -> int:
        int = 0
        l = list(s)
        print(type(int))
        char = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M':1000}
        for i in len(l):
            if char[l[i]] < char[l[i+1]]:
                int = int - char[l[i]]
            elif char[l[i]] >= char[l[i+1]]:
                int = int + char[l[i]]
    str = "M"

    print(romanToInt(str))   
