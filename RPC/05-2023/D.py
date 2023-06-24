
def main(): 
    left = "qwertasdfgzxcvb"
    right = "yuiophjklnm"

    s = input()

    switch = True if s[0] in left  else False

    for i in range(1,len(s)):
        # print(switch, s[i])
        if not switch: 
            
            if s[i] in right:
                print("no")
                return 
            
        else:
            if s[i] in left:
                print("no")
                return 
        
        switch = not switch
    
    print("yes")

main()
        