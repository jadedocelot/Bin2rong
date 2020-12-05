					___________________________

							Web Scraping
					___________________________		

 
- Web scraping is a technique to extract data from websites 

- Web scraping is the process of automatically mining data or collecting information from the world wide web

 - Google uses web scraping to build its search database. it is used for web page indexing


- Python is the most popular language for web scraping. It can handle most of the web crawling related processes.

- Scrapy and Beautiful Soup ar among the widely used frameworks based on Python. These Framewors

	- Scrapy is an open source and collaboritve framework for extracting the data you need from websites.

	- Another thing scrapy is used for is deploying web crawlers, sometimes called a spider or a spiderbot and often shortened to crawler, is an internet bot that systamatically browses the world wide web, typically for the purpose of web indexing (web spidering) 


	- NOTE: NEED to look into scrapy framework a bit more, to better understand web crawlers.

		- #@#@#@ Deploy a web spider to grab contact and user info to update a particular data base
 

	- A great tool to use when scraping data from websites is 
		- Right Click + INSPECT on the page in which you would like to scrape. 
		- This will bring to a page which will present the sites HTML and CSS code. This is what will be needed when writing a Python script to scrape websites



	- Its important to know the structures of each page before minining for data



						  ___________________________

					   Hyper Text Markup Language (HTML)
  						 ___________________________		


HTML is used to create a web page 

It is used to display something on the webpage, it can be text, image, audio, video, for, ETC

- Heading tag: Font size <h<size INT>> will depend on the number you use

		<h1>HEADER</h1>

- Paragraph tag:

		<p>for paragraphs, Browsers automatically add a single blank line before and after each <p> element.<p>


 						  ___________________________

					   			  HTML Tags
  						  ___________________________	


- Most HTML tags require a closing opening and closing tags (with few exceptions)

- In order to use upload image to your site you will need to use an image tag 
	
		<img src=""> 

- Notice that the tag not not include a closing tag

- the src="" will either include the image path (on your machine) or it will include the images online URL (to display from an online source)


	
	- The first example is using an image within your system
		-
		<img src="images/iamyourmirror.png" alt="Blockcahin home image"> 


	- The second example is pulling an image from from a website usin the image url address

		-	
 
- The alt="" property will include text of the image, for if the image has any issues displaying it will display the alt decription


- Next we will learn how include a link in our HTML, we use an anchor tag also known as <a> tag (this tag requires a closing tag)


	<a class="articles" href="https://cointelegraph.com/news/the-fapiao-case-how-china-is-fighting-corruption-with-blockchain"><h3>Blockchain Article #1</h3></a>

- This will display a HEADER (<h3>) that will act as a hyper-link the site that contains our 1st article


- Now we will see some anchor tag properties 


- target will either open the link on the same page or if clicked on a new browser tab will be opened. in order to open a new tab "_blank" will need to be added to the property 

	target="_blank" 


- The second example we will look at is a title property, whatever is included in this property will be displayed if the user hovers the mouse over the newly added hyper-link. This can be used to inform the user on how to view the content of the link 

	title="Click to Visit Article Site"

- We can add a thin line under our links using <hr> under 

- Now we will focus on creating list       


		<ul>	
			<li>Data Scraping</li>
			<li>Web Scraping</li>
			<li>Blockchain</li>
		</ul>


- Next we will make a table


<table>
- establisjhes


- <tr> stands for tale row 
	<tr>
		<th>Student</th> - column names (moving in the x axis)	 
		<th></th> - column names (moving in the x axis) 
	</tr>
	<tr> - NEW table row
		<td>y</td> - This will now be the row data - moving in the y axis 
		<td>y</td> - This will now be the row data - moving in the y axis 
	</tr>
</table> - closing table tag





---- BETTER EXAMPLE ---------------

<table>
	<tr>
		<th>Student</th>
		<th>Appearance</th>
	</tr>
	<tr>
		<td>name</td>
		<td>description</td>
	</tr>
	<tr>
		<td>name</td>
		<td>description</td>
	</tr>
	<tr>
		<td>name</td>
		<td>description</td>
	</tr>
</table>

+++++++++++++++++++++++++++++++++++

DISPLAYS:

Student	Appearance
name	description
name	description
name	description

------------------------------------






 						  ___________________________

					   			  	 CSS
  						  ___________________________	

CSS: Cascading Style Sheet 

CSS decide how an element display on the web page. It can control layout, color, position, spacing, animations and everything related to look and feel


CSS EXAMPLE (I prepped this before starting tutorial)




start of example
-----------------------


h1{text-align:center}

h2{text-align:center}

h3{text-align:center}

h4{text-align:center}

#blockchain{  
	display: block;
  	margin-left: auto;
 	margin-right: auto;
  	width: 38%;
 }

.articles{
	text-align: center;
    display: block;
    margin: 0 auto;
 }

.list{
	text-align: center;
    display: block;
    margin: 0 auto;
}

li{ 
	list-style-type: none;
  	margin: 0;
  	padding: 0;
}


-------------------------
end of example


- There are 3 types of CSS;

	* Document based CSS

	* External CSS (THIS WILL BE OUR MAIN FOCUS)(and the above example is external)

	* Inline CSS




 						  ___________________________

					   			  ID and CLASS
  						  ___________________________	



 - ID: a unique identifier
 - CLASS: is used to group the elements 

 - These are placed within elements


HTML:

<h1 id="unique"></h1>

CSS:

#unique{
	display: block;
  	margin-left: auto;
 	margin-right: auto;
  	width: 38%;
}


- ID is great for appling CSS execution to individual tags



HTML:

<h2 class="group"></h2>

CSS:

.group{
	display: block;
  	margin-left: auto;
 	margin-right: auto;
  	width: 38%;
}


- CLASS is great for applying the same CSS actions to multiple tags in your HTML

- It is also possible to add multiple classes to one tag

	<h2 class="group1 group2"></h2> 

- HTML tags may also contain an ID and a CLASS 

	<h2 id="top" class="group"></h2> 





 						  ___________________________

					   	   Parent, Child and Siblings
  						  ___________________________	

- <div> is a container 
	- div can contain anything (p,ul,li,h1,etc)

- <header> is also a container
	- You can use to put global, navigation bar

			<head>
				<nav>
					<li><a href="#">Home</a></li>
					<li><a href="#">About</a></li>
				</nav>
			</head>

<footer>
	

</footer>

 						  		___________________________

					   	   		Parent, Child and Siblings
  						  		___________________________

 
from bs4 import BeautifulSoup
import requests, lxml 

# The following will read the html file and print it out 
	with open("index.html") as mypage:
	    soup = BeautifulSoup(mypage, features="lxml") 
	    print(soup)
# .prettify() will present a cleaner presentation the file that is being read
    
	print(soup.prettify())
# .get_text() will grab only the text and exclude the html tags
    print(soup.get_text())

# .title.text will only grab the titles text
   
    print(soup.title.text)
# .h1.text will only grab the h1 text
    print(soup.h1.text)

 						  		___________________________

									 Access Attributes
  						  		___________________________

# .a.attrs  Will return a dictionary of attributes
    print(soup.a.attrs)
# This will print out the first H1 id tag within the HTML doc
    print(soup.h1['id'])
# .p['class'] will grab the class name p
    print(soup.p['class'])
# .find_all will locate all the h1 tags
    print(soup.find_all('h1'))
# The for loop will print out all the H1 tags in order, h.text will eliminate the tags only presenting text
    for h in soup.find_all('h1'):
        print(h.text)


 						  		___________________________

								 Functions to access tags
  						  		___________________________


# The following will read the html file and print it out  
with open("index.html") as mypage:
    soup = BeautifulSoup(mypage, features="lxml") 
    # loc_soup = soup.find('h1',attrs={'id':'hid1'})
    loc_soup = soup.find('h1', attrs={'id':'hid1'})
     #print(soup.text)
    print(loc_soup.find_all_next('p'))


								
								
								___________________________

									 External Website	
 						  		___________________________

