from bs4 import BeautifulSoup
import requests,lxml

# The following will print the source of code of gay fucking website
# web = requests.get("https://www.google.com/search?sxsrf=ALeKk01UMTkB60MLJVvIpdZ19pHUsz5eng%3A1607067810173&source=hp&ei=oujJX8OaCI2d-gTtlKywBw&q=time&oq=time&gs_lcp=CgZwc3ktYWIQAzIECCMQJzIHCAAQyQMQQzIECAAQQzIECAAQQzIECAAQQzIECAAQQzIECAAQQzIECAAQQzIECAAQQzIECAAQQzoECC4QQzoICAAQsQMQgwE6DgguELEDEIMBEMcBEKMCOgUILhCRAjoFCAAQkQI6BQgAELEDOgIIADoFCC4QsQM6CgguEMkDEEMQkwI6BAguEAo6BAgAEAo6BwgjELECECc6BwgAEMkDEAo6BwgAELEDEAo6CggAELEDEIMBEApQnAlY6BRguRZoBXAAeAGAAYsBiAGWB5IBAzUuNJgBAKABAaoBB2d3cy13aXo&sclient=psy-ab&ved=0ahUKEwjD88-P6rPtAhWNjp4KHW0KC3YQ4dUDCAk&uact=5")
web = requests.get("https://jupitervidya.com/")
soup = BeautifulSoup(web.content,"lxml")
# print(soup.header.prettify()) 

# so the following loop will print out all the anchor tags within the URL of 
'''
for link in soup.find_all("a"):
    print(link)
'''

# so the following loop will print out all the anchor tags within the URL but ONLY the text 
'''
for link in soup.find_all("a"):
    print(link.text) 
'''

# this following loop will onbtain all the links within the URL of 'web'
for link in soup.find_all("a"):
    print(link.get('href'))