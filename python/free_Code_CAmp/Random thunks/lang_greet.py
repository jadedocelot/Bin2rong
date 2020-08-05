def greetTrans(arg): 
    if arg == "bonjour":
        print("French")
    if arg == "holla":
        print("Spanish")
    if arg == "hi":
        print("english")

userGreet = input("Greet us in your native language: ")

greetTrans(str(userGreet))
