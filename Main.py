
def CharacterConvert(ch):

    if(ch >= 'A' and ch <= 'Z'):
        ch = chr(ord(ch)+32)
        print(ch)
    elif(ch >= 'a' and ch <= 'z'):
        ch = chr(ord(ch)-32)
        print(ch)
    else:
        print("Wrong Character Entered");

if __name__ == "__main__":

    cValue = input("Enter Character\n")

    CharacterConvert(cValue)