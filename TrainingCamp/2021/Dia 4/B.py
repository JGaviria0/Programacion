
def main():
    a,b=map(int,input().split())
    
    if a == 1:
        print (b+1)
    else:
        ans = (1-(a**(b+1)))//(1-a)
        print(ans%1000000007)



main()