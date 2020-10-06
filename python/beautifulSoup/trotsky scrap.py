
# The code listed below scrapes the Wiki page on Leon Trotsky, to which all
# data is save to a "text" file


from bs4 import BeautifulSoup as BS
import requests

# This will scrape ALL the data from from the Trotsky wiki

source = requests.get('https://en.wikipedia.org/wiki/Leon_Trotsky').text

soup = BS(source,'lxml')

with open("Trotsky_wiki_scrape.txt","w") as file:
	file.write(str(soup))


# txt_file.close()



# print(soup.prettify())

# We will now save the Trotsky scape to a TXT file

#txt_file = open('Trotsky_wiki_scrape.txt','w') as file: