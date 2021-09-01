import sys
sys.setrecursionlimit(10000)

dpM = {}

def dp(s):

    if s in dpM:
        return dpM[s]

    if s <= 0:
        return 0
    
    if s == 1:
        return 1

    ans = min(dp(s//10) + s%10, dp((s//10) + 1) + 10 - s%10)
    dpM[s] = ans
    
    return ans 

def main():
    s = int(input())
    print (dp(s))

main()