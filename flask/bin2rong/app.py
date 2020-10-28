from flask import Flask, session,render_template,url_for,request
from datetime import datetime
import os

app=Flask(__name__)
# app.config['SQLAlCHEMY_DATABASE_URI'] = 'sqlite:///test.db'
# db = SQLAlchemy(app)

app.config['DEBUG'] = True	
app._static_folder = os.path.abspath("static/style.css")

@app.route('/')
def index():
	return render_template('home.html')


@app.route('/home', methods=['POST','GET']) # <- BUG: WONT RETURN H1 and CSS files
def home():
	name = request.form.get('name')
	return '<h1>Greetings {}! Welcome to the index page you damn coq!</h1>'.format(name)

if __name__== '__main__':
	app.run()
# Python assigns the name "__main__" when the script is executed
	