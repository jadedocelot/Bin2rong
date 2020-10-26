# See chapter README.md for notes on this file
class method_playground:
    # def __init__(self,name,age,x,y):
    def __init__(self,x,y):
        #self.name = name
        #self.age = age
        self.x = x
        self.y = y
    # def __str__(self): 
        # return "Name {} Age {}".format(self.name,self.age)
# the __str__ will override the spacial method 
     #d display(self):
        #print("Name {} Age {}".format(self.name,self.age))
    def display(self):
        print("The sum of pow1: {} and pow2: {}".format(self.x,self.y))
    def __pow__(self,other):
        a = self.x ** other.x # 1
        b = self.y ** other.y # 1
        return method_playground(a,b)
    def __add__(self,other):
        a = self.x + other.x 
        b = self.y + other.y 
       # if b < 11:
       #     b = b + 10
       #     a = a - 10  
        return method_playground(a,b)
    def __gt__(self,other):
        if self.x > other.x:
            return True
        else:
            return False


pow1 = method_playground(5,0) # x
pow2 = method_playground(3,0) # y 
pow_sum = pow1 ** pow2
# add_sum = pow1 + pow2
# add_sum.display()
pow_sum.display()

if pow1 > pow2:
    print("pow1 > pow2")
elif pow1 < pow2:
    print("pow1 < pow2")
else:
    print("pow1 == pow2")
# em_01 = method_playground("Dan",20)
# print(em_01)
