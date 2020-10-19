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












