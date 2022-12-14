dic = { 'A': ".-",
    'B': "-..."	,
    'C': "-.-."	,
    'D': "-.."  , 
    'E': "."	 ,   
    'F': "..-.",
    'G': "--.",	
    'H': "...."	,
    'I': ".."	,
    'J': ".---"	,
    'K': "-.-"	,    
    'L': ".-..",
    'M': "--"	,
    'N': "-."	,
    'O': "---"	,
    'P': ".--."	,
    'Q': "--.-"	,
    'R': ".-.",
    'S': "...",	
    'T': "-"	,
    'U': "..-"	,
    'V': "...-"	,
    'W': ".--"	,    
    'X': "-..-",
    'Y': "-.--",	
    'Z': "--..", 
    '0':"-----",
    '1':".----",
    '2':"..---",
    '3':"...--",
    '4':"....-",
    '5':".....",
    '6':"-....",
    '7':"--...",
    '8':"---..",
    '9':"----."
}

def toMorse( s ):
    ans = "" 
    for i in s: 
        if i in dic:
            ans += dic[i]

    return ans

def ifpalindrom( s ):

    last = len(s) - 1
    # print(s)

    for i in range(0, int((last + 1)/2)):
        if s[i] != s[last-i]:
            return False

    return True

def main ():
    inp = input()
    s = toMorse(inp.upper())

    if s != '':
        booli = ifpalindrom( s )
        if booli: 
            print("YES")
            return 

    print("NO")



main()