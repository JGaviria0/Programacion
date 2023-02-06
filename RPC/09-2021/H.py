
def main():
    n = int(input())
    vec = list(map(int, input().split()))
    allSide = []

    lados = [ 2**(-5/4), 2**(-3/4)]

    for i in range(n-1):
        if i%2 == 0: 
            allSide.append(lados[1])
            lados[1] = lados[1] /2
        else:
            allSide.append(lados[0])
            lados[0] = lados[0] /2

    # ans = allSide[2]*2 + allSide[1]*1 + allSide[0]*1
    ans = 0
    uno = 1/2
    total = 0
    flag = False
    val = 0
    pos = 0

    for i in range (n-1):
        totalA = total
        total += uno*vec[i]
        if total >= 1: 
            a = (1-totalA)//uno
            ans += (a//2)*allSide[i]
            vec[i-1] += a//2
            val = a
            pos = i
            flag = True
            if i == 0: 
                print(ans)
                return 0
            break
        else:
            # ans += vec[i]*allSide[i]
            uno = uno/2
    if not flag:
        print("impossible")
        return 0
    
    for i in range (pos-1, 0, -1):
        vec[i-1] += vec[i] // 2
        ans += vec[i]//2*allSide[i]

    ans += (vec[0]//2 )*allSide[0]
    print(ans)
    
        


main()