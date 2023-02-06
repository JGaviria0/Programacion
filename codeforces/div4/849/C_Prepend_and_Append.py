

def main():

    t = int(input())
    while t > 0:
        t -= 1
        n = int(input())
        s = input()

        if s == "":
            print(0)
            continue
        i = 0
        while (i < n and (s[i] == '0' and s[n-1] == '1') or (s[i] == '1' and s[n-1] == '0')):

            n-=1
            i+=1

        print(n - i)

main()


