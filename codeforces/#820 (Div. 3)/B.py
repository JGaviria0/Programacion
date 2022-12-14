

def main():
    
    t = int(input())

    while t>=0:
        t-=1

        n = int(input())
        s = input()
        # s = s+'0'

        news = s.split('0')

        print(news)
        
        if s[-1] != 0:
            news.append(news[len(news) - 1][1])
            news[-2] = news[-2][0]

        for i in news:
            if len(i) > 2:
                print(i[0])
                print(i[1:])
                continue
            print(i)
            
        

main()