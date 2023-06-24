

def main(): 

    sum = 0

    n = int(input())

    values = input().split()

    for i in values: 

        sum += float(i)**3

    
    print(sum**(1/3))

main()