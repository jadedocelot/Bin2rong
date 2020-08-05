                                                            # What is Haskell

    - Haskell is a (functional Programming Language)        

        * It works by giving the computer a sequence of tasks in which case the computer proceeds to executing said taskss.

    - For example you CANT set variable (a) to 5, set it something else down down the road.
        * for example: If you say that (a) is 5, you CANT say its something else later because we just said its 5, what are you, some kind of liar?


    - So in functional languages, a function has no side effects
        * The only thing a function can do is calculate something and return it as a result
            EXAMPLE:
                 if a function is called twice with the same parameters, its guranteed to return the same results. This is called (Referential Transparency)
                    - And not only does it allow the compiler to reason about the programs behavior, but it also allows you to easily deduce (and even prove) that a function is CORRECT and then build more complex function by "glueing" simple functions together

# One Thing Haskell and I have in common is that we are both LAZY AF

    - This means that means that unless specifically told otherwise(like myself), Haskell will NOT calculate and execute funtions untill it is FORCED to show you HOW (This goes with the Referential Transparency).
     - This allows you to think of programs as a series of (Transformations of Data)
        - This (infinite data structure,
            EXAMPLE:
                1. Say you have an immutable list of numbers; xs = [1,2,3,4,5,6,7,8]
                2. and a function called (doubleMe) which multiplies each element by 2 and returns a new list.
                3. If we wanted to multiply our list by 8 in an imparative language did 
                4. doubleMe(doubleMe(doubleMe(xs)))
                5. It would probably pass through the list once and make copy and then return it
                6. Then it would pass through the list another 2 times and return the result
                
                    - In a lazy language, calling (doubleMe) without forcing to show the result ends up in the program sorta telling you "yeah, yeah, Ill do it later"
                    - In order to do that we need the first (doubleMe) to  tell the second  one it wants the results like STAT! Then the second one tells that 3rd one that and it will reluctantly give back a doubled 1 which is a 2
                    - The second one then receives that 2 and gives the first one a 4 
                    - The first one sees that then tells the first element is an 8
                    - So it only does one pass through the list and only when you need it
                    
                    When you want something from a (LAZY LANGUAGE) you can just take some initial data and effeciantly transform and mend it so it resembles what you want in the end.
                     
                
# Haskell is (statically typed)
                - When you compile your program, the compiler knows which piece of the code is a number, which is a string and so on, this means that a lot of possible errors are caught at compile time
                    - So if you try to compile a string and numner together, the damn compiler will whine at you.
                - Haskell uses a very GOOD type system that has type interference.
                    * Type Interference: Type inference refers to the automatic detection of the data type of an expression in a programming language.
                    - That means if you declare a = 5 + 4, you dont have to tell Haskell that a is a number, it can figure that out by itself
                    - Type interference also allows your code to be more general. Uf a function you make takes two parameters and adds them together and you dont explicitly state their type, the function will workd on any two parameters that act like numbers



# NOTE: Haskell is (elegant and concise). Because it uses a lot of high level concepts, Haskell programs are usually shorter than their IMPERATIVE EQUIVALENTS. And shorter programs are easier to maintain than longer ones and have less bugs.

    - Haskell began in 1987 w
                


     - In purely functional programming languages you DON'T tell the computer what to do as much BUT rather tell it what stuff IS.

