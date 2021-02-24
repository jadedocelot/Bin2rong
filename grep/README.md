# How to use GREP (for idiots, yeah"?)

- Locating a file withith a shitstorm of disorginazition. Say we want to the file named "tower_of_numbers.py", we know its in our "fun"
directory but within it are a large number of sub-directories so it might take a while for us to locate it. We can use GREP to do all the
hard work and locate the file for us.

!. in this example we will start from this location,:
    
        (base) edgar in ~ λ

2. We will enter in the following grep (template) 

    find <path> -name *FileName*

3. So if I were to attempt to locate this file I would enter it in as:

    (base) edgar in ~ λ find Desktop -name tower_of_numbers.py

4. And the following will print out:

    Desktop/Fun/python/fun/tower_of_numbers.py



