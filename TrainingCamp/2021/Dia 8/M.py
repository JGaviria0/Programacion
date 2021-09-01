
def solve (s, i, win, lose, k):

    if i >= len(s) and abs(win - lose) == k:
        print("hola")
        return True, ""
    
    if i >= len(s):
        print("hola2")
        return False, ""

    if abs(win - lose) >= k:
        print("hola3")
        return False, ""

    if s[i] != '?':
        if s[i] == 'W':
            ans, ans2 = solve(s,i+1,win+1,lose, k)
            if not ans: 
                return True, "W" + ans2
            else:
                return False, ""
        else:
            ans, ans2 = solve(s,i+1,win,lose+1, k)
            if not ans: 
                return True , "L" + ans2
            else:
                return False, ""
    else: 
        ans, ans2 = solve(s,i+1,win+1, lose, k)

        if not ans: 
            ans, ans2 = solve(s,i+1,win, lose+1, k)
            return True, "L" + ans2
        else:
            return True, "W" + ans2




def main():

    n,k = map(int,input().split())
    s = input()

    
    ans, ans2 = solve(s, 0, 0, 0, k)

    print(ans2)


main()