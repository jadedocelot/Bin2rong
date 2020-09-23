from bs4 import BeautifulSoup
import requests


source = requests.get('https://www.interpals.net/bin2rong').text
soup = BeautifulSoup(source,'lxml')
	
print(soup.prettify())
