from bs4 import BeautifulSoup
import requests,lxml

# The following will print the source of code of gay fucking website
web = requests.get("https://jupitervidya.com/")
soup = BeautifulSoup(web.content,"lxml")
print(soup.header.prettify())