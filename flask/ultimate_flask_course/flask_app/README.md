                ______________________________________

                Setting Up A Flask Virtual Enviroment 

                ______________________________________

- Create a directory
    * Mine is in  bin2rong/flask/ultimate_flask_course/flask app

- We will create a virtual enviroment 
    * This will contain all the needed installments to be contained in one enviroment. So it doesnt affect any other enviroments

- Now once we are in our destined enviroment in our terminal, we will enter in the following;
   FOR MAC: 
        >> python3 -m venv env
                
                * VENV stands for "Virtual Enviroment"
                * Typical name: 'env' for enviroment

- If the install was successful then a folder called "env" should appear within your destined directory, within it you will see the following directories;

        1.bin
        2.include
        3.lib 

- Now we must activate our virtual enviroment; 
        >>  source env/bin/activate

        * If activation was successful then you termianl will appear like so;
            (env) (base) edgars-iMac :: flask/ultimate_flask_course/flask_app ‹master*› » 
                * As you can see in the far left you will see what you named your enviroment in parenthases

- Now we need to install Flask
    >> pip install flask

- A file will need to be created in our flask app directory 
        >> app.py

- Since "app.py" will be our main app file, We re going to set an enviroment. This will allow Flask to which file to look for when it wants to run
     >> set FLASK_APP=app.py 

# Now we will move over to our app.py file

__________

  app.py
__________

from flask import Flask

    * flask = Libary 
    * Flask = class 
    
app = Flask(__name__)

    * Flask(__name__) = the current module you are working in which is app.py


@app.rout('/<name>')
    
    * The route, which is the URL endpoint "for your app"
    * <name> allows for a name, this is basically  a placeholder. And any placeholder here will need to placed in your index function below as a parameter

def index(name):   
    
    * Our function, the name we give it is the base URL for whatever our site is  
     * the 'name' prarameter 

return '<h1 {} ><h1>'.format(name) 

    * This will be what is presented on our webpage 
    * {} will act as a placeholder for our parameter
    * .format will create a hiearchy of which parameters should go in which placeholder

  __________

  end app.py
  __________


- And to run your app in your terminal, enter in the following:

    >> flask run

    * And since we "set FLASK_APP=app.pys", Flask run knows what to run


- If the run was successful then the following will appear;

 * Environment: production
   WARNING: This is a development server. Do not use it in a production deployment.
   Use a production WSGI server instead.
 * Debug mode: off
 * Running on http://127.0.0.1:5000/ (Press CTRL+C to quit)


- Copy http://127.0.0.1:5000/<name of your choosing> and place it in your browser




Complete code for simple app below
____________________________________-

from flask import Flask 
app = Flask(__name__)

@app.route('/<name>')
def index(name):
    return '<h1>Is {} An Art Fag!<h1>'.format(name) 



                
                ______________________________________

                     Two Ways of Running Flask

                ______________________________________


- The first way of having your Flask app run is with the following



if __name__ == '__main__':
    app.run()


- With this you can run the app through the terminal with the following;

    >> python app.py

    * Since the name of our app file is "app.py"


        So you code in its entirety should like this before you excecute the above


                    from flask import Flask 
                    app = Flask(__name__)
                    
                    @app.route('/<name>')
                    def index(name):
                        return '<h1>{} Is An Art Fag!<h1>'.format(name) 
                    
                    if __name__ == '__main__':
                        app.run()



- And the second way to run your code is flask run 
     >> flask run

     * But what if you wanted run different py file called script.py, you will need to set up a new enviroment for said file;

       >> export FLASK_APP=script.py

    * Once env has exported our new file 

    >> flask run


- Now in these examples we have left debug mode off, in order to turn debug mode on, you will need to enter in the following (note this will need to be done before runninh Flask); 

    >> export FLASK_DEBUG=1 

    then 

    >> flask run

    * And once ran you will see the following appear;

        * Debug mode: on <-- AS YOU CAN SEE DEBUG IS ON!
        * Running on http://127.0.0.1:5000/ (Press CTRL+C to quit)
        * Restarting with stat
        * Debugger is active!
        * Debugger PIN: 275-183-351





                ______________________________________

                            Intro to Routes
                ______________________________________

- Routes are an essential component to your app 

    * This will allow people to access differnt areas of your app or the differnt parts of your API 

- Say we wanted to create a route to our "home" we would include the add the following to our app.py;


@app.route('/home') 
def home():
    return '<h1>You are now on the home page...Art Fag <h1>'


@app.route('/home') 

    * As you can see we have added home to our route (/). This will a create a path to THIS PAGE, THIS DIRECTORY, "home"


- Once added, flask run in terminal and copy paster http://127.0.0.1:5000/ into your browser search which should bring up 

                    Art Fag


- Now to access our new 'home' route, enter the following in your browser url or just add;

             http://127.0.0.1:5000/home


- Now in the example below we re going to return a json, and in order to do this we have to import the 'jsonify' function;

from flask import Flask, jsonify 


- Then we will need to create a 'json' route

@app.route('/json')
def json():
    return jsonify({'key' : 'values', 'listkey' : [1,2,3]})

    * will then create a route to a jsonified version of Python data structures. And to access this you will need to enter the following in your browser URL; 

        http://127.0.0.1:5000/json


        * which will then take you to a page which shows the followin;



            {
              "key": "values", 
              "keyTwo": [
                1, 
                2, 
                3
              ]
            }


_________________________

The comlete code below:
__________________________


from flask import Flask, jsonify

app = Flask(__name__)


@app.route('/')
def index():
    return ('<h1>This is the index page</h1>')

@app.route('/json')
def json():
    return jsonify({'key' : 'values', 'listkey' : [1,2,3]})

@app.route('/home')
def home():
    return ('<h1>Welcome Art Fag! This is the home page</h1>')

if __name__ == '__main__':
    app.run(debug=True)






                    ______________________________________

                                Route Methods
                    ______________________________________


- By default the end points the app.route decorator are for GIT REQUEST only 

        @app.route('/')


- But say you want to make POST request, a 404 error message will be sent your way. In order for this to be done you will have to update the method of desired routed, to allow different http requests to come in 

- So lets change the method for our JSON page

@app.route('/json', methods=['GET'])
def json():
    return jsonify({'key' : 'values', 'listkey' : [1,2,3]})


    * As you can see we have added a method to our route, GET is the defaul which again only allows GET PULL requests, we will need to add POST to make pull requests


     @app.route('/', methods=['POST'])
    

     - Though doing this will only allow POST requests, in order to do both we will need to add GET and POST like so;


    @app.route('/', methods=['GET','POST'])


- By including the above you will now be able to GET and POST with zero 405 messages to appear 


- Now APIs offer a variety of request (PUT,PATCH,DELETE,COPY, ETC}) so be sure to add them to your methods list






                    ______________________________________

                                Route Variable
                    ______________________________________




- A typical feature of a web app is to allow users to input custom information. And in order to do this we will need to pass VARIABLES in the URL iteself. So we will repalce our '/route'



from flask import Flask, jsonify

app = Flask(__name__)


@app.route('home/<name>', methods=['GET','POST'])
def home(name):
    return '<h1>Welcome {}! You Are Now an Art Fag! This is the home page</h1>'.format(name)

- So what we ve added to our route is a custom variable, which when. accessing our rout through our URL we can / any tag which will direct us to our page. IT IS IMPORTANT that the function parameter MATCHES our route variable ('name')


- Now we want our custom variable to appear on our page, we will need to add a placeholder to our sting({}) and include .format()

return '<h1>Welcome {}! You Are Now an Art Fag! This is the home page</h1>'.format(name)



- Though what if we left out the <name> from our URL, well then we would get a 404 error. What we would need is a default route. 



@app.route('/home', methods=['GET','POST'], defaults = {'name' : 'Defualt'}) 

    - As you can see above we have add another (route) decorator above the one below.

    - As you can see its similar to the one below, thought we have left out the /<name>

    - At the end you can see that we have added a new parameter titled 'defaults'

         
             defaults = {'key' : 'value'}      

                    - the parameter takes in a Python dictionary and the key will be the name of the variable ('name') 

                    - And the value will be ne a 'default' value


                    - when you run this in your browser it will run a default value when a specific value is not entered in your route




from flask import Flask, jsonify

app = Flask(__name__)


@app.route('/', methods=['GET','POST'])
def index():
    return '<h1>This is the index page</h1>'

@app.route('/json', methods=['GET','POST'])
def json():
    return jsonify({'key' : 'values', 'listkey' : [1,2,3]})

@app.route('/home', methods=['GET','POST'], defaults = {'name' : 'Defualt'})
@app.route('/home/<name>', methods=['GET','POST'])
def home(name):
    return '<h1>Welcome {}! You Are Now an Art Fag! This is the home page</h1>'.format(name)

if __name__ == '__main__':
    app.run(debug=True)



- Dont know if the below information is really needed

- What if you wanted to enter in a number as opposed to say, in that case we would need to implemnet types. What we do is add the type and colon to our variable name like so;

app.route('/home/<int:name>')

    - This will assign a type to our variable




                    ______________________________________

                            Request Query String
                    ______________________________________


# (Query is another word for question. ... For example, if you need additional information from someone, you might say, "I have a query for you.")


# Aside from passing things throught the URL there are other ways of passing data into the app

# In this section we will see how to pass in data using a query string

# To get started on out query we will add the following to our app



    @app.route('/query')
    def query():
        return '<h1>You Are on The Query Page</h1>'

# On`ce we refresh our web browser we will then see the following appear on our page, the following will appear;



            You Are on The Query Page

# now if you go to the URL, you will see

http://127.0.0.1:5000/query

# And if we were to add the following to it, nothing would happen


http://127.0.0.1:5000/query?name=sara

# Nothing would happen, cause its not reading that query string. To make this work the first thing we gotta do is import the request from flask;

from flask import Flask, jsonify, request


# The we are gonna have to add to add two variables which are going to hold the
# the values from the query string

    name = request.args.get('name')
    location = request.args.get('location')

# To get thesse values we use the request object from flask and args and then g
# get. then we pass in the keys of what we wanna get 


    request.args.get('name')
    request.args.get('location')

# Then we insert placeholders within our string and finish it with a .format


return '<h1>Greetings {}, you have landed on the query page from {}</h1>'.format(name,location)

# Now if we go to our web browser and enter the following into our URL


http://127.0.0.1:5000/query?name=Edgar&location=California

# We should now see the following appear on our page;



Greeting Edgar, you have landed on the query page from California




                    ______________________________________

                                Request From Data
                    ______________________________________


- Now we are going save and retrieve from data, this is what we will be adding to our app.py


@app.route('/theform')
def theform():
    return '''<form methodA="POST" action="/query">
                <input type="text" name="name" >
                <input type="text location="location">'
                <input type="submit" value="coq">
              </form>'''    

