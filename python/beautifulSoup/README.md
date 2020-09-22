# Using BeautifulSoup to Scrape Websites


What we will need from PIP:
- beautifulsoup4
- requests
- lxml (parser )
- html5lib

-----------------------------------

* Scraping a website parsing th content by a of a website and pulling out the needed information

* Pulled information can be saved to a .CSV


HTML:
- <a>: Anchor tag is where links will be placed

- <p>: Paragraph Tag


- CLASS: is used for CSS styling

---------
TEST 1:
----------
(in terminal)

- INPUT: python3 scrape.py

>> OUTPUT:

<!DOCTYPE html>
<html>
 <head>
  <meta charset="utf-8"/>
  <meta content="IE=edge" http-equiv="X-UA-Compatible"/>
  <title>
  </title>
  <link href="" rel="stylesheet"/>
 </head>
 <body>
  <h1 id="site_title">
   Test Website
  </h1>
  <hr/>
  <div class="article">
   <h2>
    <a href="article_1.html">
     Article 1 Headline
    </a>
   </h2>
   <p>
    This is A Summary of The Article
   </p>
  </div>
  <hr/>
  <div class="article">
   <h2>
    <a href="article_2.html">
     Article 2 Headline
    </a>
   </h2>
   <p>
    This is The Summary of Article 2
   </p>
  </div>
  <hr/>
  <div class="footer">
   <p>
    Footer Information
   </p>
  </div>
 </body>
</html>

-------------------------------------------------------------
- Now if we wanted to grab a specific object from the HTML file we would do 
the following

 match = soup.h2  
 print(match)  

-------------------------------------------------------------
- Say I only wanted the text and not the <title> tags, we would do the following:

match = soup.h2.text
print(match)

OUTPUT: Article 1 Headline


-------------------------------------------------------------
- As you can see when we run this we are only pulling the first H2, though what
if that wasnt what we were looking for, what if what we wanted was a lil more
down the page or if were looking for the FOOTER h2?

match = soup.find('div',class_='footer')
print(match

OUTPUT:

<div class="footer">
<p>Footer Information</p>
</div>


- the find() method will allow the user to scrape a specific area of the source code 

-  within the find() method we can pass in arguments to find exactly what we re looking for

  ('div', class_='footer') 


  ARGUMENTS

- div : is what we re looking for

* NOTE: that these tags may match any attributes that we might have so, instead of a class we can also search for an ID (within HTML FILE) 

- class_'footer': NOTE:  The read reason for the _ is class is a SPECIAL keyword within Python

-------------------------------------------------------------

article = soup.find('div',class_='article')
# print(match)

headline = article.h2.a.text
print(headline)

>> OUTPUT: Article 1 Headline

-------------------------------------------------------------

article = soup.find('div',class_='article')
# print(match)

headline = article.h2.a.text
print(headline)

summary = article.p.text
print(summary)

>> OUTPUT: 

Article 1 Headline
This is A Summary of The Article

-------------------------------------------------------------

- Now that we know exacly what we are looking for, we can go ahead and create a (FOR) loop to scrape up everything that matches our search:

	for article in soup.find_all('div',class_='article'):
	print()
	headline = article.h2.a.text
	print(headline)
	
	summary = article.p.text
	print(summary)

	print()

>> OUTPUT:

Article 1 Headline
This is A Summary of The Article


Article 2 Headline
This is The Summary of Article 2

-------------------------------------------------------------

				# SCRAPING FROM AN ACTUAL SITE

- https://coreyms.com/

	source = requests.get('https://coreyms.com/').text
	soup = BeautifulSoup(source,'lxml')
	
	print(soup.prettify())


>> OUTPUT:

	(WARNINING: SOUCE CODE BELOW LIKE VERY VERY LONG)

  zip
          </a>
          ,
          <a href="https://coreyms.com/tag/zipfile" rel="tag">
           zipfile
          </a>
         </span>
        </p>
       </footer>
      </article>
      <article class="post-1665 post type-post status-publish format-standard has-post-thumbnail category-development category-python tag-data-analysis tag-data-science tag-stack-overflow entry" itemscope="" itemtype="https://schema.org/CreativeWork">
       <header class="entry-header">
        <h2 class="entry-title" itemprop="headline">
         <a class="entry-title-link" href="https://coreyms.com/development/python/python-data-science-tutorial-analyzing-the-2019-stack-overflow-developer-survey" rel="bookmark">
          Python Data Science Tutorial: Analyzing the 2019 Stack Overflow Developer Survey
         </a>
        </h2>
        <p class="entry-meta">
         <time class="entry-time" datetime="2019-10-17T12:35:51-04:00" itemprop="datePublished">
          October 17, 2019
         </time>
         by
         <span class="entry-author" itemprop="author" itemscope="" itemtype="https://schema.org/Person">
          <a class="entry-author-link" href="https://coreyms.com/author/coreymschafer" itemprop="url" rel="author">
           <span class="entry-author-name" itemprop="name">
            Corey Schafer
           </span>
          </a>
         </span>
         <span class="entry-comments-link">
          <a href="https://coreyms.com/development/python/python-data-science-tutorial-analyzing-the-2019-stack-overflow-developer-survey#respond">
           <span class="dsq-postid" data-dsqidentifier="1665 http://coreyms.com/?p=1665">
            Leave a Comment
           </span>
          </a>
         </span>
        </p>
       </header>
       <div class="entry-content" itemprop="text">
        <p>
         In this Python Programming video, we will be learning how to download and analyze real-world data from the 2019 Stack Overflow Developer Survey. This is terrific practice for anyone getting into the data science field. We will learn different ways to analyze this data and also some best practices. Let’s get started…
        </p>
        <figure class="wp-block-embed-youtube wp-block-embed is-type-video is-provider-youtube wp-embed-aspect-16-9 wp-has-aspect-ratio">
         <div class="wp-block-embed__wrapper">
          <span class="embed-youtube" style="text-align:center; display: block;">
           <iframe allowfullscreen="true" class="youtube-player" height="360" src="https://www.youtube.com/embed/_P7X8tMplsw?version=3&amp;rel=1&amp;fs=1&amp;autohide=2&amp;showsearch=0&amp;showinfo=1&amp;iv_load_policy=1&amp;wmode=transparent" style="border:0;" width="640">
           </iframe>
          </span>
         </div>
        </figure>
       </div>
       <footer class="entry-footer">
        <p class="entry-meta">
         <span class="entry-categories">
          Filed Under:
          <a href="https://coreyms.com/category/development" rel="category tag">
           Development
          </a>
          ,
          <a href="https://coreyms.com/category/development/python" rel="category tag">
           Python
          </a>
         </span>
         <span class="entry-tags">
          Tagged With:
          <a href="https://coreyms.com/tag/data-analysis" rel="tag">
           data analysis
          </a>
          ,
          <a href="https://coreyms.com/tag/data-science" rel="tag">
           Data Science
          </a>
          ,
          <a href="https://coreyms.com/tag/stack-overflow" rel="tag">
           stack overflow
          </a>
         </span>
        </p>
       </footer>
      </article>
      <article class="post-1661 post type-post status-publish format-standard has-post-thumbnail category-development category-python tag-asynchronous tag-concurrent-futures tag-multiprocessing tag-parallel tag-threading entry" itemscope="" itemtype="https://schema.org/CreativeWork">
       <header class="entry-header">
        <h2 class="entry-title" itemprop="headline">
         <a class="entry-title-link" href="https://coreyms.com/development/python/python-multiprocessing-tutorial-run-code-in-parallel-using-the-multiprocessing-module" rel="bookmark">
          Python Multiprocessing Tutorial: Run Code in Parallel Using the Multiprocessing Module
         </a>
        </h2>
        <p class="entry-meta">
         <time class="entry-time" datetime="2019-09-21T10:59:18-04:00" itemprop="datePublished">
          September 21, 2019
         </time>
         by
         <span class="entry-author" itemprop="author" itemscope="" itemtype="https://schema.org/Person">
          <a class="entry-author-link" href="https://coreyms.com/author/coreymschafer" itemprop="url" rel="author">
           <span class="entry-author-name" itemprop="name">
            Corey Schafer
           </span>
          </a>
         </span>
         <span class="entry-comments-link">
          <a href="https://coreyms.com/development/python/python-multiprocessing-tutorial-run-code-in-parallel-using-the-multiprocessing-module#respond">
           <span class="dsq-postid" data-dsqidentifier="1661 http://coreyms.com/?p=1661">
            Leave a Comment
           </span>
          </a>
         </span>
        </p>
       </header>
       <div class="entry-content" itemprop="text">
        <p>
         In this Python Programming video, we will be learning how to run code in parallel using the multiprocessing module. We will also look at how to process multiple high-resolution images at the same time using a ProcessPoolExecutor from the concurrent.futures module. Let’s get started…
        </p>
        <figure class="wp-block-embed-youtube wp-block-embed is-type-video is-provider-youtube wp-embed-aspect-16-9 wp-has-aspect-ratio">
         <div class="wp-block-embed__wrapper">
          <span class="embed-youtube" style="text-align:center; display: block;">
           <iframe allowfullscreen="true" class="youtube-player" height="360" src="https://www.youtube.com/embed/fKl2JW_qrso?version=3&amp;rel=1&amp;fs=1&amp;autohide=2&amp;showsearch=0&amp;showinfo=1&amp;iv_load_policy=1&amp;wmode=transparent" style="border:0;" width="640">
           </iframe>
          </span>
         </div>
        </figure>
       </div>
       <footer class="entry-footer">
        <p class="entry-meta">
         <span class="entry-categories">
          Filed Under:
          <a href="https://coreyms.com/category/development" rel="category tag">
           Development
          </a>
          ,
          <a href="https://coreyms.com/category/development/python" rel="category tag">
           Python
          </a>
         </span>
         <span class="entry-tags">
          Tagged With:
          <a href="https://coreyms.com/tag/asynchronous" rel="tag">
           asynchronous
          </a>
          ,
          <a href="https://coreyms.com/tag/concurrent-futures" rel="tag">
           concurrent.futures
          </a>
          ,
          <a href="https://coreyms.com/tag/multiprocessing" rel="tag">
           multiprocessing
          </a>
          ,
          <a href="https://coreyms.com/tag/parallel" rel="tag">
           parallel
          </a>
          ,
          <a href="https://coreyms.com/tag/threading" rel="tag">
           threading
          </a>
         </span>
        </p>
       </footer>
      </article>
      <article class="post-1658 post type-post status-publish format-standard has-post-thumbnail category-development category-python tag-asynchronous tag-concurrency tag-multiprocessing tag-threading entry" itemscope="" itemtype="https://schema.org/CreativeWork">
       <header class="entry-header">
        <h2 class="entry-title" itemprop="headline">
         <a class="entry-title-link" href="https://coreyms.com/development/python/python-threading-tutorial-run-code-concurrently-using-the-threading-module" rel="bookmark">
          Python Threading Tutorial: Run Code Concurrently Using the Threading Module
         </a>
        </h2>
        <p class="entry-meta">
         <time class="entry-time" datetime="2019-09-12T10:49:54-04:00" itemprop="datePublished">
          September 12, 2019
         </time>
         by
         <span class="entry-author" itemprop="author" itemscope="" itemtype="https://schema.org/Person">
          <a class="entry-author-link" href="https://coreyms.com/author/coreymschafer" itemprop="url" rel="author">
           <span class="entry-author-name" itemprop="name">
            Corey Schafer
           </span>
          </a>
         </span>
         <span class="entry-comments-link">
          <a href="https://coreyms.com/development/python/python-threading-tutorial-run-code-concurrently-using-the-threading-module#respond">
           <span class="dsq-postid" data-dsqidentifier="1658 http://coreyms.com/?p=1658">
            Leave a Comment
           </span>
          </a>
         </span>
        </p>
       </header>
       <div class="entry-content" itemprop="text">
        <p>
         In this Python Programming video, we will be learning how to run threads concurrently using the threading module. We will also look at how to download multiple high-resolution images online using a ThreadPoolExecutor from the concurrent.futures module. Let’s get started…
        </p>
        <figure class="wp-block-embed-youtube wp-block-embed is-type-video is-provider-youtube wp-embed-aspect-16-9 wp-has-aspect-ratio">
         <div class="wp-block-embed__wrapper">
          <span class="embed-youtube" style="text-align:center; display: block;">
           <iframe allowfullscreen="true" class="youtube-player" height="360" src="https://www.youtube.com/embed/IEEhzQoKtQU?version=3&amp;rel=1&amp;fs=1&amp;autohide=2&amp;showsearch=0&amp;showinfo=1&amp;iv_load_policy=1&amp;wmode=transparent" style="border:0;" width="640">
           </iframe>
          </span>
         </div>
        </figure>
       </div>
       <footer class="entry-footer">
        <p class="entry-meta">
         <span class="entry-categories">
          Filed Under:
          <a href="https://coreyms.com/category/development" rel="category tag">
           Development
          </a>
          ,
          <a href="https://coreyms.com/category/development/python" rel="category tag">
           Python
          </a>
         </span>
         <span class="entry-tags">
          Tagged With:
          <a href="https://coreyms.com/tag/asynchronous" rel="tag">
           asynchronous
          </a>
          ,
          <a href="https://coreyms.com/tag/concurrency" rel="tag">
           concurrency
          </a>
          ,
          <a href="https://coreyms.com/tag/multiprocessing" rel="tag">
           multiprocessing
          </a>
          ,
          <a href="https://coreyms.com/tag/threading" rel="tag">
           threading
          </a>
         </span>
        </p>
       </footer>
      </article>
      <article class="post-1655 post type-post status-publish format-standard category-general entry" itemscope="" itemtype="https://schema.org/CreativeWork">
       <header class="entry-header">
        <h2 class="entry-title" itemprop="headline">
         <a class="entry-title-link" href="https://coreyms.com/general/update-2019-09-03" rel="bookmark">
          Update (2019-09-03)
         </a>
        </h2>
        <p class="entry-meta">
         <time class="entry-time" datetime="2019-09-03T16:42:01-04:00" itemprop="datePublished">
          September 3, 2019
         </time>
         by
         <span class="entry-author" itemprop="author" itemscope="" itemtype="https://schema.org/Person">
          <a class="entry-author-link" href="https://coreyms.com/author/coreymschafer" itemprop="url" rel="author">
           <span class="entry-author-name" itemprop="name">
            Corey Schafer
           </span>
          </a>
         </span>
         <span class="entry-comments-link">
          <a href="https://coreyms.com/general/update-2019-09-03#respond">
           <span class="dsq-postid" data-dsqidentifier="1655 http://coreyms.com/?p=1655">
            Leave a Comment
           </span>
          </a>
         </span>
        </p>
       </header>
       <div class="entry-content" itemprop="text">
        <p>
         Hey everyone. I wanted to give you an update on my videos. I will be releasing videos on threading and multiprocessing within the next week. Thanks so much for your patience. I currently have a temporary recording studio setup at my Airbnb that will allow me to record and edit the threading/multiprocessing videos. I am going to be moving into my new house in 10 days and once I have my recording studio setup then you can expect much faster video releases. I really appreciate how patient everyone has been while I go through this move, especially those of you who are contributing monthly through YouTube
        </p>
       </div>
       <footer class="entry-footer">
        <p class="entry-meta">
         <span class="entry-categories">
          Filed Under:
          <a href="https://coreyms.com/category/general" rel="category tag">
           General
          </a>
         </span>
        </p>
       </footer>
      </article>
      <article class="post-1651 post type-post status-publish format-standard has-post-thumbnail category-development category-python tag-vs-is tag-equality tag-identity entry" itemscope="" itemtype="https://schema.org/CreativeWork">
       <header class="entry-header">
        <h2 class="entry-title" itemprop="headline">
         <a class="entry-title-link" href="https://coreyms.com/development/python/python-quick-tip-the-difference-between-and-is-equality-vs-identity" rel="bookmark">
          Python Quick Tip: The Difference Between “==” and “is” (Equality vs Identity)
         </a>
        </h2>
        <p class="entry-meta">
         <time class="entry-time" datetime="2019-08-06T12:17:28-04:00" itemprop="datePublished">
          August 6, 2019
         </time>
         by
         <span class="entry-author" itemprop="author" itemscope="" itemtype="https://schema.org/Person">
          <a class="entry-author-link" href="https://coreyms.com/author/coreymschafer" itemprop="url" rel="author">
           <span class="entry-author-name" itemprop="name">
            Corey Schafer
           </span>
          </a>
         </span>
         <span class="entry-comments-link">
          <a href="https://coreyms.com/development/python/python-quick-tip-the-difference-between-and-is-equality-vs-identity#respond">
           <span class="dsq-postid" data-dsqidentifier="1651 http://coreyms.com/?p=1651">
            Leave a Comment
           </span>
          </a>
         </span>
        </p>
       </header>
       <div class="entry-content" itemprop="text">
        <p>
         In this Python Programming Tutorial, we will be learning the difference between using “==” and the “is” keyword when doing comparisons. The difference between these is that “==” checks to see if values are equal, and the “is” keyword checks their identity, which means it’s going to check if the values are identical in terms of being the same object in memory. We’ll learn more in the video. Let’s get started…
        </p>
        <figure class="wp-block-embed-youtube wp-block-embed is-type-video is-provider-youtube wp-embed-aspect-16-9 wp-has-aspect-ratio">
         <div class="wp-block-embed__wrapper">
          <span class="embed-youtube" style="text-align:center; display: block;">
           <iframe allowfullscreen="true" class="youtube-player" height="360" src="https://www.youtube.com/embed/mO_dS3rXDIs?version=3&amp;rel=1&amp;fs=1&amp;autohide=2&amp;showsearch=0&amp;showinfo=1&amp;iv_load_policy=1&amp;wmode=transparent" style="border:0;" width="640">
           </iframe>
          </span>
         </div>
        </figure>
       </div>
       <footer class="entry-footer">
        <p class="entry-meta">
         <span class="entry-categories">
          Filed Under:
          <a href="https://coreyms.com/category/development" rel="category tag">
           Development
          </a>
          ,
          <a href="https://coreyms.com/category/development/python" rel="category tag">
           Python
          </a>
         </span>
         <span class="entry-tags">
          Tagged With:
          <a href="https://coreyms.com/tag/vs-is" rel="tag">
           == vs is
          </a>
          ,
          <a href="https://coreyms.com/tag/equality" rel="tag">
           equality
          </a>
          ,
          <a href="https://coreyms.com/tag/identity" rel="tag">
           identity
          </a>
         </span>
        </p>
       </footer>
      </article>
      <article class="post-1647 post type-post status-publish format-standard has-post-thumbnail category-development category-python tag-standard-library tag-subprocess entry" itemscope="" itemtype="https://schema.org/CreativeWork">
       <header class="entry-header">
        <h2 class="entry-title" itemprop="headline">
         <a class="entry-title-link" href="https://coreyms.com/development/python/python-tutorial-calling-external-commands-using-the-subprocess-module" rel="bookmark">
          Python Tutorial: Calling External Commands Using the Subprocess Module
         </a>
        </h2>
        <p class="entry-meta">
         <time class="entry-time" datetime="2019-07-24T15:26:19-04:00" itemprop="datePublished">
          July 24, 2019
         </time>
         by
         <span class="entry-author" itemprop="author" itemscope="" itemtype="https://schema.org/Person">
          <a class="entry-author-link" href="https://coreyms.com/author/coreymschafer" itemprop="url" rel="author">
           <span class="entry-author-name" itemprop="name">
            Corey Schafer
           </span>
          </a>
         </span>
         <span class="entry-comments-link">
          <a href="https://coreyms.com/development/python/python-tutorial-calling-external-commands-using-the-subprocess-module#respond">
           <span class="dsq-postid" data-dsqidentifier="1647 http://coreyms.com/?p=1647">
            Leave a Comment
           </span>
          </a>
         </span>
        </p>
       </header>
       <div class="entry-content" itemprop="text">
        <p>
         In this Python Programming Tutorial, we will be learning how to run external commands using the subprocess module from the standard library. We will learn how to run commands, capture the output, handle errors, and also how to pipe output into other commands. Let’s get started…
        </p>
        <figure class="wp-block-embed-youtube wp-block-embed is-type-video is-provider-youtube wp-embed-aspect-16-9 wp-has-aspect-ratio">
         <div class="wp-block-embed__wrapper">
          <span class="embed-youtube" style="text-align:center; display: block;">
           <iframe allowfullscreen="true" class="youtube-player" height="360" src="https://www.youtube.com/embed/2Fp1N6dof0Y?version=3&amp;rel=1&amp;fs=1&amp;autohide=2&amp;showsearch=0&amp;showinfo=1&amp;iv_load_policy=1&amp;wmode=transparent" style="border:0;" width="640">
           </iframe>
          </span>
         </div>
        </figure>
       </div>
       <footer class="entry-footer">
        <p class="entry-meta">
         <span class="entry-categories">
          Filed Under:
          <a href="https://coreyms.com/category/development" rel="category tag">
           Development
          </a>
          ,
          <a href="https://coreyms.com/category/development/python" rel="category tag">
           Python
          </a>
         </span>
         <span class="entry-tags">
          Tagged With:
          <a href="https://coreyms.com/tag/standard-library" rel="tag">
           standard library
          </a>
          ,
          <a href="https://coreyms.com/tag/subprocess" rel="tag">
           subprocess
          </a>
         </span>
        </p>
       </footer>
      </article>
      <article class="post-1642 post type-post status-publish format-standard has-post-thumbnail category-development category-python tag-development-environment tag-visual-studio-code tag-visual-studios tag-vs-code tag-vscode entry" itemscope="" itemtype="https://schema.org/CreativeWork">
       <header class="entry-header">
        <h2 class="entry-title" itemprop="headline">
         <a class="entry-title-link" href="https://coreyms.com/development/python/visual-studio-code-windows-setting-up-a-python-development-environment-and-complete-overview" rel="bookmark">
          Visual Studio Code (Windows) – Setting up a Python Development Environment and Complete Overview
         </a>
        </h2>
        <p class="entry-meta">
         <time class="entry-time" datetime="2019-05-01T14:03:24-04:00" itemprop="datePublished">
          May 1, 2019
         </time>
         by
         <span class="entry-author" itemprop="author" itemscope="" itemtype="https://schema.org/Person">
          <a class="entry-author-link" href="https://coreyms.com/author/coreymschafer" itemprop="url" rel="author">
           <span class="entry-author-name" itemprop="name">
            Corey Schafer
           </span>
          </a>
         </span>
         <span class="entry-comments-link">
          <a href="https://coreyms.com/development/python/visual-studio-code-windows-setting-up-a-python-development-environment-and-complete-overview#respond">
           <span class="dsq-postid" data-dsqidentifier="1642 http://coreyms.com/?p=1642">
            Leave a Comment
           </span>
          </a>
         </span>
        </p>
       </header>
       <div class="entry-content" itemprop="text">
        <p>
         In this Python Programming Tutorial, we will be learning how to set up a Python development environment in VSCode on Windows. VSCode is a very nice free editor for writing Python applications and many developers are now switching over to this editor. In this video, we will learn how to install VSCode, get the Python extension installed, how to change Python interpreters, create virtual environments, format/lint our code, how to use Git within VSCode, how to debug our programs, how unit testing works, and more. We have a lot to cover, so let’s go ahead and get started…
        </p>
        <p>
         VSCode on MacOS – https://youtu.be/06I63_p-2A4
        </p>
        <p>
         Timestamps for topics in this tutorial:
         <br/>
         Installation – 1:13
         <br/>
         Python Extension – 5:48
         <br/>
         Switching Interpreters – 10:04
         <br/>
         Changing Color Themes – 12:35
         <br/>
         VSCode Settings – 16:16
         <br/>
         Set Default Python – 21:33
         <br/>
         Using Virtual Environments – 25:10
         <br/>
         IntelliSense – 29:45
         <br/>
         Code Formatting – 32:13
         <br/>
         Code Linting – 37:06
         <br/>
         Code Runner Extension – 39:42
         <br/>
         Git Integration – 47:44
         <br/>
         Use Different Terminal – 51:07
         <br/>
         Debugging – 58:45
         <br/>
         Unit Testing – 1:03:25
         <br/>
         Zen Mode – 1:09:55
        </p>
        <figure class="wp-block-embed-youtube wp-block-embed is-type-video is-provider-youtube wp-embed-aspect-16-9 wp-has-aspect-ratio">
         <div class="wp-block-embed__wrapper">
          <span class="embed-youtube" style="text-align:center; display: block;">
           <iframe allowfullscreen="true" class="youtube-player" height="360" src="https://www.youtube.com/embed/-nh9rCzPJ20?version=3&amp;rel=1&amp;fs=1&amp;autohide=2&amp;showsearch=0&amp;showinfo=1&amp;iv_load_policy=1&amp;wmode=transparent" style="border:0;" width="640">
           </iframe>
          </span>
         </div>
        </figure>
       </div>
       <footer class="entry-footer">
        <p class="entry-meta">
         <span class="entry-categories">
          Filed Under:
          <a href="https://coreyms.com/category/development" rel="category tag">
           Development
          </a>
          ,
          <a href="https://coreyms.com/category/development/python" rel="category tag">
           Python
          </a>
         </span>
         <span class="entry-tags">
          Tagged With:
          <a href="https://coreyms.com/tag/development-environment" rel="tag">
           Development Environment
          </a>
          ,
          <a href="https://coreyms.com/tag/visual-studio-code" rel="tag">
           visual studio code
          </a>
          ,
          <a href="https://coreyms.com/tag/visual-studios" rel="tag">
           visual studios
          </a>
          ,
          <a href="https://coreyms.com/tag/vs-code" rel="tag">
           vs code
          </a>
          ,
          <a href="https://coreyms.com/tag/vscode" rel="tag">
           vscode
          </a>
         </span>
        </p>
       </footer>
      </article>
      <article class="post-1639 post type-post status-publish format-standard has-post-thumbnail category-development category-python tag-development-environment tag-visual-studio-code tag-visual-studios tag-vs-code tag-vscode entry" itemscope="" itemtype="https://schema.org/CreativeWork">
       <header class="entry-header">
        <h2 class="entry-title" itemprop="headline">
         <a class="entry-title-link" href="https://coreyms.com/development/python/visual-studio-code-mac-setting-up-a-python-development-environment-and-complete-overview" rel="bookmark">
          Visual Studio Code (Mac) – Setting up a Python Development Environment and Complete Overview
         </a>
        </h2>
        <p class="entry-meta">
         <time class="entry-time" datetime="2019-05-01T14:01:45-04:00" itemprop="datePublished">
          May 1, 2019
         </time>
         by
         <span class="entry-author" itemprop="author" itemscope="" itemtype="https://schema.org/Person">
          <a class="entry-author-link" href="https://coreyms.com/author/coreymschafer" itemprop="url" rel="author">
           <span class="entry-author-name" itemprop="name">
            Corey Schafer
           </span>
          </a>
         </span>
         <span class="entry-comments-link">
          <a href="https://coreyms.com/development/python/visual-studio-code-mac-setting-up-a-python-development-environment-and-complete-overview#respond">
           <span class="dsq-postid" data-dsqidentifier="1639 http://coreyms.com/?p=1639">
            Leave a Comment
           </span>
          </a>
         </span>
        </p>
       </header>
       <div class="entry-content" itemprop="text">
        <p>
         In this Python Programming Tutorial, we will be learning how to set up a Python development environment in VSCode on MacOS. VSCode is a very nice free editor for writing Python applications and many developers are now switching over to this editor. In this video, we will learn how to install VSCode, get the Python extension installed, how to change Python interpreters, create virtual environments, format/lint our code, how to use Git within VSCode, how to debug our programs, how unit testing works, and more. We have a lot to cover, so let’s go ahead and get started…
        </p>
        <p>
         VSCode on Windows – https://youtu.be/-nh9rCzPJ20
        </p>
        <p>
         Timestamps for topics in this tutorial:
         <br/>
         Installation – 1:11
         <br/>
         Python Extension – 6:21
         <br/>
         Switching Interpreters – 10:16
         <br/>
         Changing Color Themes – 13:08
         <br/>
         VSCode Settings – 17:12
         <br/>
         Set Default Python – 22:24
         <br/>
         Using Virtual Environments – 25:52
         <br/>
         IntelliSense – 30:28
         <br/>
         Code Formatting – 33:08
         <br/>
         Code Linting – 38:01
         <br/>
         Code Runner Extension – 40:45
         <br/>
         Git Integration – 49:05
         <br/>
         Debugging – 58:15
         <br/>
         Unit Testing – 1:02:38
         <br/>
         Zen Mode – 1:10:42
        </p>
        <figure class="wp-block-embed-youtube wp-block-embed is-type-video is-provider-youtube wp-embed-aspect-16-9 wp-has-aspect-ratio">
         <div class="wp-block-embed__wrapper">
          <span class="embed-youtube" style="text-align:center; display: block;">
           <iframe allowfullscreen="true" class="youtube-player" height="360" src="https://www.youtube.com/embed/06I63_p-2A4?version=3&amp;rel=1&amp;fs=1&amp;autohide=2&amp;showsearch=0&amp;showinfo=1&amp;iv_load_policy=1&amp;wmode=transparent" style="border:0;" width="640">
           </iframe>
          </span>
         </div>
        </figure>
       </div>
       <footer class="entry-footer">
        <p class="entry-meta">
         <span class="entry-categories">
          Filed Under:
          <a href="https://coreyms.com/category/development" rel="category tag">
           Development
          </a>
          ,
          <a href="https://coreyms.com/category/development/python" rel="category tag">
           Python
          </a>
         </span>
         <span class="entry-tags">
          Tagged With:
          <a href="https://coreyms.com/tag/development-environment" rel="tag">
           Development Environment
          </a>
          ,
          <a href="https://coreyms.com/tag/visual-studio-code" rel="tag">
           visual studio code
          </a>
          ,
          <a href="https://coreyms.com/tag/visual-studios" rel="tag">
           visual studios
          </a>
          ,
          <a href="https://coreyms.com/tag/vs-code" rel="tag">
           vs code
          </a>
          ,
          <a href="https://coreyms.com/tag/vscode" rel="tag">
           vscode
          </a>
         </span>
        </p>
       </footer>
      </article>
      <article class="post-1634 post type-post status-publish format-standard has-post-thumbnail category-development category-python tag-common-errors tag-common-mistakes tag-functions tag-mutable-default-arguments entry" itemscope="" itemtype="https://schema.org/CreativeWork">
       <header class="entry-header">
        <h2 class="entry-title" itemprop="headline">
         <a class="entry-title-link" href="https://coreyms.com/development/python/clarifying-the-issues-with-mutable-default-arguments" rel="bookmark">
          Clarifying the Issues with Mutable Default Arguments
         </a>
        </h2>
        <p class="entry-meta">
         <time class="entry-time" datetime="2019-04-24T11:46:42-04:00" itemprop="datePublished">
          April 24, 2019
         </time>
         by
         <span class="entry-author" itemprop="author" itemscope="" itemtype="https://schema.org/Person">
          <a class="entry-author-link" href="https://coreyms.com/author/coreymschafer" itemprop="url" rel="author">
           <span class="entry-author-name" itemprop="name">
            Corey Schafer
           </span>
          </a>
         </span>
         <span class="entry-comments-link">
          <a href="https://coreyms.com/development/python/clarifying-the-issues-with-mutable-default-arguments#respond">
           <span class="dsq-postid" data-dsqidentifier="1634 http://coreyms.com/?p=1634">
            Leave a Comment
           </span>
          </a>
         </span>
        </p>
       </header>
       <div class="entry-content" itemprop="text">
        <p>
         In this Python Programming Tutorial, we will be clarifying the issues with mutable default arguments. We discussed this in my last video titled “5 Common Python Mistakes and How to Fix Them”, but I received many comments from people who were still confused. So we will be doing a deeper dive to explain exactly what is going on here. Let’s get started…
        </p>
        <figure class="wp-block-embed-youtube wp-block-embed is-type-video is-provider-youtube wp-embed-aspect-16-9 wp-has-aspect-ratio">
         <div class="wp-block-embed__wrapper">
          <span class="embed-youtube" style="text-align:center; display: block;">
           <iframe allowfullscreen="true" class="youtube-player" height="360" src="https://www.youtube.com/embed/_JGmemuINww?version=3&amp;rel=1&amp;fs=1&amp;autohide=2&amp;showsearch=0&amp;showinfo=1&amp;iv_load_policy=1&amp;wmode=transparent" style="border:0;" width="640">
           </iframe>
          </span>
         </div>
        </figure>
       </div>
       <footer class="entry-footer">
        <p class="entry-meta">
         <span class="entry-categories">
          Filed Under:
          <a href="https://coreyms.com/category/development" rel="category tag">
           Development
          </a>
          ,
          <a href="https://coreyms.com/category/development/python" rel="category tag">
           Python
          </a>
         </span>
         <span class="entry-tags">
          Tagged With:
          <a href="https://coreyms.com/tag/common-errors" rel="tag">
           common errors
          </a>
          ,
          <a href="https://coreyms.com/tag/common-mistakes" rel="tag">
           common mistakes
          </a>
          ,
          <a href="https://coreyms.com/tag/functions" rel="tag">
           functions
          </a>
          ,
          <a href="https://coreyms.com/tag/mutable-default-arguments" rel="tag">
           mutable default arguments
          </a>
         </span>
        </p>
       </footer>
      </article>
      <div class="archive-pagination pagination">
       <ul>
        <li class="active">
         <a aria-current="page" aria-label="Current page" href="https://coreyms.com/">
          1
         </a>
        </li>
        <li>
         <a href="https://coreyms.com/page/2">
          2
         </a>
        </li>
        <li>
         <a href="https://coreyms.com/page/3">
          3
         </a>
        </li>
        <li class="pagination-omission">
         …
        </li>
        <li>
         <a href="https://coreyms.com/page/17">
          17
         </a>
        </li>
        <li class="pagination-next">
         <a href="https://coreyms.com/page/2">
          Next Page »
         </a>
        </li>
       </ul>
      </div>
     </main>
     <aside aria-label="Primary Sidebar" class="sidebar sidebar-primary widget-area" itemscope="" itemtype="https://schema.org/WPSideBar" role="complementary">
      <section class="widget widget_text" id="text-5">
       <div class="widget-wrap">
        <h4 class="widget-title widgettitle">
         Main Contributor
        </h4>
        <div class="textwidget">
         <ul>
          <li>
           <b>
            Andre Nevares
           </b>
          </li>
         </ul>
         <h4 style="margin-top: 25px; font-size: 17px;">
          Top Contributors (17)
         </h4>
         <ul>
          <li>
           Andre Nevares
          </li>
          <li>
           Cyril Hediger
          </li>
          <li>
           Abhilash Rajan
          </li>
          <li>
           Hien Nguyen
          </li>
          <li>
           Alan Hawse – iotexpert.com
          </li>
          <li>
           Just a Guy
          </li>
          <li>
           Alex Canady
          </li>
          <li>
           Sergey Trubin
          </li>
          <li>
           Justin Presley
          </li>
          <li>
           Sirake
          </li>
          <li>
           chris
          </li>
          <li>
           Jerome Massey
          </li>
          <li>
           Robert Butler
          </li>
          <li>
           Jonathan Llovet
          </li>
          <li>
           David Myers
          </li>
          <li>
           Karthik
          </li>
          <li>
           Michael Zoitas
          </li>
         </ul>
         <hr style="border: 0; border-bottom: 1px dotted #ddd;"/>
         <p>
          <b>
           Thank You!
          </b>
          If you would like to have your name listed as a contributor and support the website, you can do so through
          <a href="https://www.patreon.com/coreyms" rel="noopener noreferrer" target="_blank">
           my Patreon Page
          </a>
          . I am extremely grateful for any support.
         </p>
        </div>
       </div>
      </section>
      <section class="widget widget_search" id="search-3">
       <div class="widget-wrap">
        <h4 class="widget-title widgettitle">
         Search CoreyMS.com
        </h4>
        <form action="https://coreyms.com/" class="search-form" itemprop="potentialAction" itemscope="" itemtype="https://schema.org/SearchAction" method="get" role="search">
         <input class="search-form-input" id="searchform-5f699085432363.95677964" itemprop="query-input" name="s" placeholder="Search this website" type="search"/>
         <input class="search-form-submit" type="submit" value="Search"/>
         <meta content="https://coreyms.com/?s={s}" itemprop="target"/>
        </form>
       </div>
      </section>
      <section class="widget enews-widget" id="enews-ext-4">
       <div class="widget-wrap">
        <div class="enews">
         <h4 class="widget-title widgettitle">
          Subscribe to Future Posts
         </h4>
         <form action="//coreyms.us9.list-manage.com/subscribe/post?u=f4df8a0f0be5d3754ed52b1ef&amp;id=5b06358625" id="subscribeenews-ext-4" method="post" name="enews-ext-4" onsubmit="if ( subbox1.value == 'First Name') { subbox1.value = ''; } if ( subbox2.value == 'Last Name') { subbox2.value = ''; }" target="_blank">
          <label class="screenread" for="subbox1">
           First Name
          </label>
          <input class="enews-subbox" id="subbox1" name="FNAME" placeholder="First Name" type="text" value=""/>
          <label class="screenread" for="subbox">
           E-Mail Address
          </label>
          <input id="subbox" name="EMAIL" placeholder="E-Mail Address" required="required" type="email" value=""/>
          <input id="subbutton" type="submit" value="Subscribe"/>
         </form>
        </div>
       </div>
      </section>
      <section class="widget widget_text" id="text-2">
       <div class="widget-wrap">
        <h4 class="widget-title widgettitle">
         Recommended Books
        </h4>
        <div class="textwidget">
         <a href="https://www.amazon.com/gp/product/1449355730/ref=as_li_tl?ie=UTF8&amp;camp=1789&amp;creative=9325&amp;creativeASIN=1449355730&amp;linkCode=as2&amp;tag=coreyms-20&amp;linkId=2f9ceaf471d7d35f2c2657051780fc6f" rel="noopener noreferrer" target="_blank">
          <img border="0" class="widget_book" src="//ws-na.amazon-adsystem.com/widgets/q?_encoding=UTF8&amp;MarketPlace=US&amp;ASIN=1449355730&amp;ServiceVersion=20070822&amp;ID=AsinImage&amp;WS=1&amp;Format=_SL250_&amp;tag=coreyms-20"/>
         </a>
         <img alt="" border="0" height="1" src="//ir-na.amazon-adsystem.com/e/ir?t=coreyms-20&amp;l=am2&amp;o=1&amp;a=1449355730" style="border:none !important; margin:0px !important;" width="1"/>
         <a href="https://www.amazon.com/gp/product/1491946008/ref=as_li_tl?ie=UTF8&amp;camp=1789&amp;creative=9325&amp;creativeASIN=1491946008&amp;linkCode=as2&amp;tag=coreyms-20&amp;linkId=39335cdc340fb7ce5bd51d59c57e7e54" rel="noopener noreferrer" target="_blank">
          <img border="0" class="widget_book" src="//ws-na.amazon-adsystem.com/widgets/q?_encoding=UTF8&amp;MarketPlace=US&amp;ASIN=1491946008&amp;ServiceVersion=20070822&amp;ID=AsinImage&amp;WS=1&amp;Format=_SL250_&amp;tag=coreyms-20"/>
         </a>
         <img alt="" border="0" height="1" src="//ir-na.amazon-adsystem.com/e/ir?t=coreyms-20&amp;l=am2&amp;o=1&amp;a=1491946008" style="border:none !important; margin:0px !important;" width="1"/>
         <a href="https://www.amazon.com/gp/product/1593276036/ref=as_li_tl?ie=UTF8&amp;camp=1789&amp;creative=9325&amp;creativeASIN=1593276036&amp;linkCode=as2&amp;tag=coreyms-20&amp;linkId=75ff844a147bc8cb5fb325608b286158" rel="noopener noreferrer" target="_blank">
          <img border="0" class="widget_book" src="//ws-na.amazon-adsystem.com/widgets/q?_encoding=UTF8&amp;MarketPlace=US&amp;ASIN=1593276036&amp;ServiceVersion=20070822&amp;ID=AsinImage&amp;WS=1&amp;Format=_SL250_&amp;tag=coreyms-20"/>
         </a>
         <img alt="" border="0" height="1" src="//ir-na.amazon-adsystem.com/e/ir?t=coreyms-20&amp;l=am2&amp;o=1&amp;a=1593276036" style="border:none !important; margin:0px !important;" width="1"/>
         <a href="https://www.amazon.com/gp/product/0984782850/ref=as_li_tl?ie=UTF8&amp;camp=1789&amp;creative=9325&amp;creativeASIN=0984782850&amp;linkCode=as2&amp;tag=coreyms-20&amp;linkId=e2f7c21906426f17958a1d04718e7d02" rel="noopener noreferrer" target="_blank">
          <img border="0" class="widget_book" src="//ws-na.amazon-adsystem.com/widgets/q?_encoding=UTF8&amp;MarketPlace=US&amp;ASIN=0984782850&amp;ServiceVersion=20070822&amp;ID=AsinImage&amp;WS=1&amp;Format=_SL250_&amp;tag=coreyms-20"/>
         </a>
         <img alt="" border="0" height="1" src="//ir-na.amazon-adsystem.com/e/ir?t=coreyms-20&amp;l=am2&amp;o=1&amp;a=0984782850" style="border:none !important; margin:0px !important;" width="1"/>
         <a href="https://www.amazon.com/gp/product/020161622X/ref=as_li_tl?ie=UTF8&amp;camp=1789&amp;creative=9325&amp;creativeASIN=020161622X&amp;linkCode=as2&amp;tag=coreyms-20&amp;linkId=a2699f6b6cb5814da54f71140c52f2ca" rel="noopener noreferrer" target="_blank">
          <img border="0" class="widget_book" src="//ws-na.amazon-adsystem.com/widgets/q?_encoding=UTF8&amp;MarketPlace=US&amp;ASIN=020161622X&amp;ServiceVersion=20070822&amp;ID=AsinImage&amp;WS=1&amp;Format=_SL250_&amp;tag=coreyms-20"/>
         </a>
         <img alt="" border="0" height="1" src="//ir-na.amazon-adsystem.com/e/ir?t=coreyms-20&amp;l=am2&amp;o=1&amp;a=020161622X" style="border:none !important; margin:0px !important;" width="1"/>
         <a href="https://www.amazon.com/gp/product/0201835959/ref=as_li_tl?ie=UTF8&amp;camp=1789&amp;creative=9325&amp;creativeASIN=0201835959&amp;linkCode=as2&amp;tag=coreyms-20&amp;linkId=c3de80ab4a4761f7634751cf323af13f" rel="noopener noreferrer" target="_blank">
          <img border="0" class="widget_book" src="//ws-na.amazon-adsystem.com/widgets/q?_encoding=UTF8&amp;MarketPlace=US&amp;ASIN=0201835959&amp;ServiceVersion=20070822&amp;ID=AsinImage&amp;WS=1&amp;Format=_SL250_&amp;tag=coreyms-20"/>
         </a>
         <img alt="" border="0" height="1" src="//ir-na.amazon-adsystem.com/e/ir?t=coreyms-20&amp;l=am2&amp;o=1&amp;a=0201835959" style="border:none !important; margin:0px !important;" width="1"/>
        </div>
       </div>
      </section>
      <section class="widget widget_text" id="text-3">
       <div class="widget-wrap">
        <h4 class="widget-title widgettitle">
         Podcasts I Listen To
        </h4>
        <div class="textwidget">
         <u>
          Tech Related
         </u>
         :
         <br/>
         <a href="http://talkpython.fm/">
          Talk Python To Me
         </a>
         <br/>
         <a href="http://shoptalkshow.com/">
          Shoptalk Show
         </a>
         <br/>
         <a href="http://www.se-radio.net/">
          Software Engineering Radio
         </a>
         <br/>
         <a href="http://hanselminutes.com/">
          HanselMinutes
         </a>
         <br/>
         <a href="https://blog.codepen.io/radio/">
          CodePen Radio
         </a>
         <br/>
         <br/>
         <u>
          Non-Tech Related
         </u>
         :
         <br/>
         <a href="http://www.dancarlin.com/hardcore-history-series/">
          Dan Carlin's Hardcore History
         </a>
         <br/>
         <a href="http://www.billburr.com/podcast">
          Bill Burr's Monday Morning Podcast
         </a>
         <br/>
         <a href="http://www.samharris.org/podcast">
          Waking Up with Sam Harris
         </a>
         <br/>
         <a href="http://www.startalkradio.net/shows-archive/">
          StarTalk Radio
         </a>
         <br/>
         <a href="http://carasantamaria.com/podcast/">
          Talk Nerdy with Cara Santa Maria
         </a>
        </div>
       </div>
      </section>
     </aside>
    </div>
   </div>
   <footer class="site-footer" itemscope="" itemtype="https://schema.org/WPFooter">
    <div class="wrap">
     <p>
      © 2020 ·
      <a href="http://coreyms.com">
       CoreyMS
      </a>
      · Corey Schafer
     </p>
    </div>
   </footer>
  </div>
  <link href="//cdnjs.cloudflare.com/ajax/libs/highlight.js/8.4/styles/zenburn.min.css" rel="stylesheet"/>
  <script src="//cdnjs.cloudflare.com/ajax/libs/highlight.js/8.4/highlight.min.js">
  </script>
  <script>
   hljs.initHighlightingOnLoad();
  </script>
  <script type="text/javascript">
   /* <![CDATA[ */
var wpcf7 = {"apiSettings":{"root":"https:\/\/coreyms.com\/wp-json\/contact-form-7\/v1","namespace":"contact-form-7\/v1"},"cached":"1"};
/* ]]> */
  </script>
  <script src="https://coreyms.com/wp-content/cache/minify/0fef6.js">
  </script>
  <script type="text/javascript">
   /* <![CDATA[ */
var countVars = {"disqusShortname":"coreyms"};
/* ]]> */
  </script>
  <script src="https://coreyms.com/wp-content/cache/minify/9b739.js">
  </script>
  <script async="async" defer="defer" src="https://stats.wp.com/e-202039.js" type="text/javascript">
  </script>
  <script type="text/javascript">
   _stq = window._stq || [];
	_stq.push([ 'view', {v:'ext',j:'1:8.9.1',blog:'70676981',post:'0',tz:'-4',srv:'coreyms.com'} ]);
	_stq.push([ 'clickTrackerInit', '70676981', '0' ]);
  </script>
 </body>
</html>
<!--
Performance optimized by W3 Total Cache. Learn more: https://www.w3-edge.com/products/

Page Caching using disk: enhanced (SSL caching disabled)
Minified using disk

Served from: coreyms.com @ 2020-09-22 01:49:57 by W3 Total Cache
-->


-------------------------------------------------------------------------------

- Now that we have the source code of this fools site, lets figure the exact structure of our syntax to pull exactly what we need 

 
- In the first example, we are going to figure out the how each artile is structured so that we can pull the ONLY the header and summary of each article:

source = requests.get('https://coreyms.com/').text
	* The site we re pulling from

soup = BeautifulSoup(source,'lxml')
	* (website,request)

article = soup.find('article')
	* keyword of what we are looking for

print(article.prettify())
	* .pretify() will print it out in more readable format


OUTPUT:

<article class="post-1670 post type-post status-publish format-standard has-post-thumbnail category-development category-python tag-gzip tag-shutil tag-zip tag-zipfile entry" itemscope="" itemtype="https://schema.org/CreativeWork">
 <header class="entry-header">
  <h2 class="entry-title" itemprop="headline">
   <a class="entry-title-link" href="https://coreyms.com/development/python/python-tutorial-zip-files-creating-and-extracting-zip-archives" rel="bookmark">
    Python Tutorial: Zip Files – Creating and Extracting Zip Archives
   </a>
  </h2>
  <p class="entry-meta">
   <time class="entry-time" datetime="2019-11-19T13:02:37-05:00" itemprop="datePublished">
    November 19, 2019
   </time>
   by
   <span class="entry-author" itemprop="author" itemscope="" itemtype="https://schema.org/Person">
    <a class="entry-author-link" href="https://coreyms.com/author/coreymschafer" itemprop="url" rel="author">
     <span class="entry-author-name" itemprop="name">
      Corey Schafer
     </span>
    </a>
   </span>
   <span class="entry-comments-link">
    <a href="https://coreyms.com/development/python/python-tutorial-zip-files-creating-and-extracting-zip-archives#respond">
     <span class="dsq-postid" data-dsqidentifier="1670 http://coreyms.com/?p=1670">
      Leave a Comment
     </span>
    </a>
   </span>
  </p>
 </header>
 <div class="entry-content" itemprop="text">
  <p>
   In this video, we will be learning how to create and extract zip archives. We will start by using the zipfile module, and then we will see how to do this using the shutil module. We will learn how to do this with single files and directories, as well as learning how to use gzip as well. Let’s get started…
   <br/>
  </p>
  <span class="embed-youtube" style="text-align:center; display: block;">
   <iframe allowfullscreen="true" class="youtube-player" height="360" src="https://www.youtube.com/embed/z0gguhEmWiY?version=3&amp;rel=1&amp;fs=1&amp;autohide=2&amp;showsearch=0&amp;showinfo=1&amp;iv_load_policy=1&amp;wmode=transparent" style="border:0;" width="640">
   </iframe>
  </span>
 </div>
 <footer class="entry-footer">
  <p class="entry-meta">
   <span class="entry-categories">
    Filed Under:
    <a href="https://coreyms.com/category/development" rel="category tag">
     Development
    </a>
    ,
    <a href="https://coreyms.com/category/development/python" rel="category tag">
     Python
    </a>
   </span>
   <span class="entry-tags">
    Tagged With:
    <a href="https://coreyms.com/tag/gzip" rel="tag">
     gzip
    </a>
    ,
    <a href="https://coreyms.com/tag/shutil" rel="tag">
     shutil
    </a>
    ,
    <a href="https://coreyms.com/tag/zip" rel="tag">
     zip
    </a>
    ,
    <a href="https://coreyms.com/tag/zipfile" rel="tag">
     zipfile
    </a>
   </span>
  </p>
 </footer>
</article>



_______________________________________________________________________________

source = requests.get('https://coreyms.com/').text

soup = BeautifulSoup(source,'lxml')

article = soup.find('article')

headline = article.h2.a.text

  (ARE AREA OF FOCUS) 


	<article class="post-1670 post type-post status-publish format-standard has-post-thumbnail category-development category-python tag-gzip tag-shutil tag-zip tag-zipfile entry" itemscope="" itemtype="https://schema.org/CreativeWork">
 <header class="entry-header">
  <h2 class="entry-title" itemprop="headline">
   <a class="entry-title-link" href="https://coreyms.com/development/python/python-tutorial-zip-files-creating-and-extracting-zip-archives" rel="bookmark">
    Python Tutorial: Zip Files – Creating and Extracting Zip Archives
   </a>
  </h2>


print(headline)


>> OUTPUT: Python Tutorial: Zip Files – Creating and Extracting Zip Archives


_______________________________________________________________________________

- Now we are going to focus on pulling the summary of the DIV/HEADER above: 

source = requests.get('https://coreyms.com/').text
	* our souce/website from which we are pulling from

soup = BeautifulSoup(source,'lxml')
	
article = soup.find('article')
	* keyword of DIV 

summary = article.find('div',class_="entry-content").p.text
		* within article(div) .find(div, class of the div in which we d like to pull from)

		*.p.text: only pull paragraph and text

print(summary)

>> OUTPUT:

In this video, we will be learning how to create and extract zip archives. We will start by using the zipfile module, and then we will see how to do this using the shutil module. We will learn how to do this with single files and directories, as well as learning how to use gzip as well. Let’s get started…

_______________________________________________________________________________

Now we will pul the link/video from that area as well.

	source = requests.get('https://coreyms.com/').text
	
	soup = BeautifulSoup(source,'lxml')
	
	article = soup.find('article')
	
	vid_src = article.find('iframe',class_='youtube-player')
	print(vid_src)


>> OUTPUT:

<iframe allowfullscreen="true" class="youtube-player" height="360" src="https://www.youtube.com/embed/z0gguhEmWiY?version=3&amp;rel=1&amp;fs=1&amp;autohide=2&amp;showsearch=0&amp;showinfo=1&amp;iv_load_policy=1&amp;wmode=transparent" style="border:0;" width="640"></iframe>

- Now we if we only want to pull the embeded video:


	vid_src = article.find('iframe',class_='youtube-player')['src']


>> OUTPUT:
https://www.youtube.com/embed/z0gguhEmWiY?version=3&rel=1&fs=1&autohide=2&showsearch=0&showinfo=1&iv_load_policy=1&wmode=transparent
_______________________________________________________________________________

source = requests.get('https://coreyms.com/').text

soup = BeautifulSoup(source,'lxml')

article = soup.find('article')

vid_src = article.find('iframe',class_='youtube-player')['src']

vid_id = vid_src.split('/')
print(vid_id)

>>OUTPUT:
['https:', '', 'www.youtube.com', 'embed', 'z0gguhEmWiY?version=3&rel=1&fs=1&autohide=2&showsearch=0&showinfo=1&iv_load_policy=1&wmode=transparent']

- As you can see in the output above, our video ID is right after 'embed' and right before "?version="

- Now in the dict above, as we know they are indexed starting with 0 so let us that in a syntax to only pull that ID:


	vid_id = vid_src.split('/')[4]
	print(vid_id)


>> OUTPUT: 
z0gguhEmWiY?version=3&rel=1&fs=1&autohide=2&showsearch=0&showinfo=1&iv_load_policy=1&wmode=transparent


- We re getting closer! Now lets split the above where ? begins since we know that our ID starts right before it:


	vid_id = vid_src.split('/')[4]
	vid_id = vid_id.split('?')
	print(vid_id)


>> OUTPUT:

['z0gguhEmWiY', 'version=3&rel=1&fs=1&autohide=2&showsearch=0&showinfo=1&iv_load_policy=1&wmode=transparent']


- NOW LETS GO FOR THE KILL:

	vid_id = vid_src.split('/')[4]
	vid_id = vid_id.split('?')[0]
	print(vid_id)
		* since we split it where ? begins, we now know that the ID is indexed in 0

>> OUTPUT:

	z0gguhEmWiY


- With the needed ID we can now create our own YOUTUBE link

	from bs4 import BeautifulSoup
	import requests
	
	source = requests.get('https://coreyms.com/').text
	
	soup = BeautifulSoup(source,'lxml')
	
	article = soup.find('article')
	
	vid_src = article.find('iframe',class_='youtube-player')['src']
	
	vid_id = vid_src.split('/')[4]
	vid_id = vid_id.split('?')[0]
	
	yt_link = f'http://youtube.com/watch?v={vid_id}'
	print(yt_link)

			* f: formatted string
			* ?: QUERY parameter 
			* v={}: video
			* v={vid_id}: We are setting video to the video ID we exrated from our LONG ass parse    


>> OUTPUT: 
http://youtube.com/watch?v=z0gguhEmWiY

NOTE: That f strings are only available on Python 3.6 and up 



_______________________________________________________________________________

- Now for the grand final! Lets put together our code to scrape up exactly what we want from the site:


	from bs4 import BeautifulSoup
	import requests
	
	source = requests.get('https://coreyms.com/').text
	
	soup = BeautifulSoup(source,'lxml')
	
	for article in soup.find_all('article'):
		headline = article.h2.a.text
		print(headline)
		print()
		
		summary = article.find('div',class_="entry-content").p.text
		print(summary)
		
		vid_src = article.find('iframe',class_='youtube-player')['src']
	
		vid_id = vid_src.split('/')[4]
		vid_id = vid_id.split('?')[0]
		
		yt_link = f'http://youtube.com/watch?v={vid_id}'
		print(yt_link)

		print()

>> OUTPUT: 

Python Tutorial: Zip Files – Creating and Extracting Zip Archives
In this video, we will be learning how to create and extract zip archives. We will start by using the zipfile module, and then we will see how to do this using the shutil module. We will learn how to do this with single files and directories, as well as learning how to use gzip as well. Let’s get started…

http://youtube.com/watch?v=z0gguhEmWiY

Python Data Science Tutorial: Analyzing the 2019 Stack Overflow Developer Survey
In this Python Programming video, we will be learning how to download and analyze real-world data from the 2019 Stack Overflow Developer Survey. This is terrific practice for anyone getting into the data science field. We will learn different ways to analyze this data and also some best practices. Let’s get started…

http://youtube.com/watch?v=_P7X8tMplsw

Python Multiprocessing Tutorial: Run Code in Parallel Using the Multiprocessing Module
In this Python Programming video, we will be learning how to run code in parallel using the multiprocessing module. We will also look at how to process multiple high-resolution images at the same time using a ProcessPoolExecutor from the concurrent.futures module. Let’s get started…

http://youtube.com/watch?v=fKl2JW_qrso

Python Threading Tutorial: Run Code Concurrently Using the Threading Module
In this Python Programming video, we will be learning how to run threads concurrently using the threading module. We will also look at how to download multiple high-resolution images online using a ThreadPoolExecutor from the concurrent.futures module. Let’s get started…

http://youtube.com/watch?v=IEEhzQoKtQU

Update (2019-09-03)
Hey everyone. I wanted to give you an update on my videos. I will be releasing videos on threading and multiprocessing within the next week. Thanks so much for your patience. I currently have a temporary recording studio setup at my Airbnb that will allow me to record and edit the threading/multiprocessing videos. I am going to be moving into my new house in 10 days and once I have my recording studio setup then you can expect much faster video releases. I really appreciate how patient everyone has been while I go through this move, especially those of you who are contributing monthly through YouTube

Traceback (most recent call last):
  File "scrape.py", line 18, in <module>
    vid_src = article.find('iframe',class_='youtube-player')['src']
TypeError: 'NoneType' object is not subscriptable


-------------------------------------------------------------------------------

- As you can see in the output above, it's not entirely perfect. At the end of the output it appears that we have gotten back a trace back, this can be due to one of the posts not containing an img/video or maybe it has been changed. This can be corrected with the TRY/EXCEPT block:


 	from bs4 import BeautifulSoup
import requests
# with open('index.html') as hmtl_file:
source = requests.get('https://coreyms.com/').text

soup = BeautifulSoup(source,'lxml')

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
	else:
		pass
	finally:
		pass

	print()


>> OUTPUT: 


Python Tutorial: Zip Files – Creating and Extracting Zip Archives

In this video, we will be learning how to create and extract zip archives. We will start by using the zipfile module, and then we will see how to do this using the shutil module. We will learn how to do this with single files and directories, as well as learning how to use gzip as well. Let’s get started…

http://youtube.com/watch?v=z0gguhEmWiY


Python Data Science Tutorial: Analyzing the 2019 Stack Overflow Developer Survey

In this Python Programming video, we will be learning how to download and analyze real-world data from the 2019 Stack Overflow Developer Survey. This is terrific practice for anyone getting into the data science field. We will learn different ways to analyze this data and also some best practices. Let’s get started…

http://youtube.com/watch?v=_P7X8tMplsw


Python Multiprocessing Tutorial: Run Code in Parallel Using the Multiprocessing Module

In this Python Programming video, we will be learning how to run code in parallel using the multiprocessing module. We will also look at how to process multiple high-resolution images at the same time using a ProcessPoolExecutor from the concurrent.futures module. Let’s get started…

http://youtube.com/watch?v=fKl2JW_qrso


Python Threading Tutorial: Run Code Concurrently Using the Threading Module

In this Python Programming video, we will be learning how to run threads concurrently using the threading module. We will also look at how to download multiple high-resolution images online using a ThreadPoolExecutor from the concurrent.futures module. Let’s get started…

http://youtube.com/watch?v=IEEhzQoKtQU


Update (2019-09-03)

Hey everyone. I wanted to give you an update on my videos. I will be releasing videos on threading and multiprocessing within the next week. Thanks so much for your patience. I currently have a temporary recording studio setup at my Airbnb that will allow me to record and edit the threading/multiprocessing videos. I am going to be moving into my new house in 10 days and once I have my recording studio setup then you can expect much faster video releases. I really appreciate how patient everyone has been while I go through this move, especially those of you who are contributing monthly through YouTube


Python Quick Tip: The Difference Between “==” and “is” (Equality vs Identity)

In this Python Programming Tutorial, we will be learning the difference between using “==” and the “is” keyword when doing comparisons. The difference between these is that “==” checks to see if values are equal, and the “is” keyword checks their identity, which means it’s going to check if the values are identical in terms of being the same object in memory. We’ll learn more in the video. Let’s get started…

http://youtube.com/watch?v=mO_dS3rXDIs


Python Tutorial: Calling External Commands Using the Subprocess Module

In this Python Programming Tutorial, we will be learning how to run external commands using the subprocess module from the standard library. We will learn how to run commands, capture the output, handle errors, and also how to pipe output into other commands. Let’s get started…

http://youtube.com/watch?v=2Fp1N6dof0Y


Visual Studio Code (Windows) – Setting up a Python Development Environment and Complete Overview

In this Python Programming Tutorial, we will be learning how to set up a Python development environment in VSCode on Windows. VSCode is a very nice free editor for writing Python applications and many developers are now switching over to this editor. In this video, we will learn how to install VSCode, get the Python extension installed, how to change Python interpreters, create virtual environments, format/lint our code, how to use Git within VSCode, how to debug our programs, how unit testing works, and more. We have a lot to cover, so let’s go ahead and get started…

http://youtube.com/watch?v=-nh9rCzPJ20


Visual Studio Code (Mac) – Setting up a Python Development Environment and Complete Overview

In this Python Programming Tutorial, we will be learning how to set up a Python development environment in VSCode on MacOS. VSCode is a very nice free editor for writing Python applications and many developers are now switching over to this editor. In this video, we will learn how to install VSCode, get the Python extension installed, how to change Python interpreters, create virtual environments, format/lint our code, how to use Git within VSCode, how to debug our programs, how unit testing works, and more. We have a lot to cover, so let’s go ahead and get started…

http://youtube.com/watch?v=06I63_p-2A4


Clarifying the Issues with Mutable Default Arguments

In this Python Programming Tutorial, we will be clarifying the issues with mutable default arguments. We discussed this in my last video titled “5 Common Python Mistakes and How to Fix Them”, but I received many comments from people who were still confused. So we will be doing a deeper dive to explain exactly what is going on here. Let’s get started…

http://youtube.com/watch?v=_JGmemuINww




______________________________________________________________________________


- Now that we have our data, lets save this bitch to a CSV



from bs4 import BeautifulSoup
import requests
import csv

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