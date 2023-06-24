
def solve(dic):
    n = int(input())
    s = input()
    
    sum = 0
    for i in range(n-1):
        news = abs(hash(s[0:i] + s[i+2:]))%1000006
        # print(news)
        if dic[news] == 0:
            dic[news] = 1
            sum += 1
    print(sum)

def main():
    n = int(input())
    dic = []

    for i in range(2000006):
        dic.append(0)
    while n > 0: 
        n -= 1
        solve(dic.copy())

main()