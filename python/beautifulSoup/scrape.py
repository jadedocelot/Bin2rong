# SEE README. MD

from bs4 import BeautifulSoup
import requests
import csv
# with open('index.html') as hmtl_file:
source = requests.get('https://coreyms.com/').text

soup = BeautifulSoup(source,'lxml')

csv_file = open('cms_scrape.csv','w')

csv_writer = csv.writer(csv_file)
csv_writer.writerow(['headline','summary','video_link'])

for article in soup.find_all('article'):
	headline = article.h2.a.text
	print(headline)
	print()
	
	summary = article.find('div',class_="entry-content").p.text
	print(summary) 
	print()
	
	try:
		vid_src = article.find('iframe',class_='youtube-player')['src']

		vid_id = vid_src.split('/')[4]
		vid_id = vid_id.split('?')[0]
	
		yt_link = f'http://youtube.com/watch?v={vid_id}'
		print(yt_link)
		print()
	except Exception as e:
		yt_link = None

	print()

	csv_writer.writerow([headline,summary,yt_link])


csv_file.close()


	# print(vid_id[0])
	# headline = article.h2.a.text
	
	# summary = article.find('div',class_="entry-content").p.text




# print(summary)

# print(headline)

# print(article.prettify())

# print(soup.prettify())


# print(soup.prettify()) # .pretify() method will print the source code in a more readable format


# Now if we wanted to grab a specific object from the HTML file we would do 
# The following

# match = soup.h2  
# print(match)  

# Say I only wanted the text and not the <title> tags, we would do the following:

# match = soup.h2.text
# print(match)

# As you can see when we run this we are only pulling the first H2, though what
# if that wasnt what we were looking for, what if what we wanted was a lil more
# down the page or if were looking for the FOOTER h2?

"""
for article in soup.find_all('div',class_='article'):
	print()
	headline = article.h2.a.text
	print(headline)
	
	summary = article.p.text
	print(summary)
 
	print()
"""