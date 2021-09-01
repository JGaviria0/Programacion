from bisect import bisect_left

def main():
    a,b = map(int,input().split())
    vec = list(map(int, input().split()))
    pre = []
    pre.append(vec[0])
    for i in range(1,a):
        pre.append(vec[i] + vec[i-1])

    for i in range(a):
        perpen =  vec[i] + vec[a]//2
        low = bisect_left(vec,perpen)
        if vec[low] == perpen:
            perpen =  (vec[i] + vec[a]/2)//2
            low = bisect_left(vec,perpen)
            if vec[low] == perpen:
                perpen =  (vec[i] + vec[a]/2)//2 + vec[i] + vec[a]//2
                low = bisect_left(vec,perpen)
                if vec[low] == perpen:
                    print("Y")
                    return 0

    print("N")
    return 0
            
main()