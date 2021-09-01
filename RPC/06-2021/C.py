
def main():
    a,b=map(int,input().split())

    diagonal = ((a**2 + b**2)**(1/2))
    rectangulo = (a+b)

    print(rectangulo - diagonal)

main()
    