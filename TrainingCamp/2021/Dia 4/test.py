def main():
    for i in range(1002):
        lista=list(str(i))
        lista=list(map(int,lista))
        print(str(i)+" "+str(sum(lista)))
main()