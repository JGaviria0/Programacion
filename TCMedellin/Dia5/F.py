
def main():
    s = input()

    k = s.split("+")

    k.sort()

    k = "+".join(k)

    print(k)

main()