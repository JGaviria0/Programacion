import math 

#0.002292
def main():

    PI = 3.1415926535897932
    n = int(input())

    points = []

    for i in range(n):
        inn = input().split()
        points.append([int(inn[0]), int(inn[1])])

    # print(points)

    start = points[0]
    end = points[n-1]

    maxi = -1
    for i in range(1,n):
        val = math.atan(abs(points[i][1])/abs(start[0] - points[i][0]))*180/PI
        maxi = max(maxi, val)
    
    for i in range(0,n-1):
        val = math.atan(abs(points[i][1])/abs(end[0] - points[i][0]))*180/PI
        maxi = max(maxi, val)

    print(maxi)

main()