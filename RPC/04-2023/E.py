

def main():

    nn = input().split()

    n = int(nn[0])
    m = int(nn[1])

    values = input().split()

    sum = 0

    for i in values: 
        sum += int(i)**2

    for i in values: 
        a = int(i)**2
        v = 1
        if(int(i) < 0):
            v = -1
        res = v*((a*n*m)/sum)**0.5
        print(res, end=" ")

    print()

main()