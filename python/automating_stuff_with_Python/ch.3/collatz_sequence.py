whi# What? 


def collatz(number):

    if number % 2 == 0:
        print(number // 2)
        return number // 2

    elif number % 2 == 1:
        result = 3 * number + 1
        print(result)
        return result

n = input("Give me a number: ")
while n != 1:
    n = collatz(int(n))


collatz(number)



# Second Example

#collatz
"""
print("enter a number:")
try:
    number = (int(input()))
except ValueError:
          print("Please enter a valid INTEGER.")


def collatz(number):
    while number != 1:

        if number % 2==0:
            number = (number//2)
            #print(number)
            return (print(int(number)))

        elif nnumber % 2==1:
            number = (3*number+1) 
            #print(number)
            return (print(int(number)))

        continue


collatz(number)
"""