
def main():
    n = int (input())
    dic = []
    pi = 3.14159265359
    for i in range(n):
        a,b=input().split()
        b = int(b)
        if a == "cube":
            aux = b*b
        else: 
            aux = pi*b*b

        dic.append((a,aux,b))

    dic.sort(key=lambda x : x[1])
    flag = True
    for i in range(n-1):
        if (dic[i][0] != dic[i+1][0]):
            if(dic[i][0] == "cube" and dic[i+1][0] == "cylinder"):
                a = 2*(dic[i][2]**2)
                b = 2*(dic[i+1][2])
                if (a > b):
                    flag = False
            else:
                b = 2*(dic[i+1][2])
                a = dic[i][2]

                if (b>a):
                    flag = False
        
    if flag:
        for i in dic:
            dic
        
main()

