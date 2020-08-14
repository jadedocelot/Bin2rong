#Untitled.py

message = 'This is my secret message.'

outputOne = 'guv6Jv6Jz!J6rp5r7Jzr66ntrM'

x = (len(message))


SYMBOLS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890 !?.'

key = 13

for symbol in message:
    if symbol in SYMBOLS:
        symbolIndex = SYMBOLS.find(symbol)
        translatedIndex = symbolIndex + key


translatedIndex = 78

tanslatedIndex = translatedIndex - len(SYMBOLS)


print(len(message))
#print(len(outputOne))
#print(x)
#print(len(SYMBOLS))
#print(translatedIndex)
#print(symbolIndex)
