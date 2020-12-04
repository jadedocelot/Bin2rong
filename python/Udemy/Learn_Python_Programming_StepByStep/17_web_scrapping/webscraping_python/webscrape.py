from bs4 import BeautifulSoup
import requests, lxml 

# The following will read the html file and print it out  
with open("index.html") as mypage:
    soup = BeautifulSoup(mypage, features="lxml") 
    # loc_soup = soup.find('h1',attrs={'id':'hid1'})
    loc_soup = soup.find('h1', attrs={'id':'hid1'})
     #print(soup.text)
    print(loc_soup.find_all_next('p'))

    
    



 


    
## NOTE     
    
# .prettify() will present a cleaner presentation the file that is being read
# print(soup.prettify())
# .get_text() will grab only the text and exclude the html tags
# print(soup.get_text())
#.title.text will only grab the titles text
# print(soup.title.text)
#.h1.text will only grab the h1 text
# print(soup.h1.text)
# .a.attrs  Will return a dictionary of attributes
# print(soup.a.attrs)
# This will print out the first H1 id tag within the HTML doc
# print(soup.h1['id'])
# .p['class'] will grab the class name p
# print(soup.p['class'])
# .find_all will locate all the h1 tags
# print(soup.find_all('h1'))
# The for loop will print out all the H1 tags in order, h.text will eliminate the tags only presenting text
#    print(h.text)
#for h in soup.find_all('h1'):
