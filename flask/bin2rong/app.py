from flask import Flask, session,render_template,url_for,request
from datetime import datetime
import os

app=Flask(__name__)
∂
app.config['DEBUG'] = True	
app._static_folder = os.path.abspath("static/style.css")

@app.route('/')
def index():
	return render_template('home.html')

# clean things up in templates
@app.route('/home', methods=['POST','GET']) 
def home():
	name = request.form.get('name')∂
	return render_template('index.html', name=name)

if __name__== '__main__':
	app.run()


# Python assigns the name "__main__" when the script is executed
	