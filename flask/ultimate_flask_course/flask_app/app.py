from flask import Flask, jsonify, request, url_for, redirect, session, render_template

app = Flask(__name__)

app.config['DEBUG'] = True
app.config['TESTING'] = True
app.config['SECRET_KEY'] = 'SSHH'

x = 'Banker'

#WORKS 10/26
@app.route('/', methods=['GET','POST'])
def index():
	session.pop('name', None)
	return '<h1>This is the index page</h1>'

#WORKS 10/26
# Template variable
@app.route('/home', methods=['GET','POST'], defaults = {'name' : 'Defualt'})
@app.route('/home/<string:name>', methods=['GET','POST'])
def home(name):
	session['name'] = name
	return render_template('app.html', name=name, display= True, myList=['one','two','three','four'],myHarwdware=[{'name': 'Edgar','OS':'Mac','Terminal' : 'Xterm2','IDE':'Sublime'}])	 

## This should be the users starting positio 
@app.route('/theform', methods=['POST','GET'])
def theform():
	if request.method == 'GET':
		return render_template('form.html')
	else:
		name = request.form.get('name')
		return redirect(url_for('home',name=name)) 

#WORKS 10/26
@app.route('/info') 
def info():
	if 'name' in session:	
		name = session['name']
	else:
		name = '(Wait...who are you?)' 
	return '<h1>Greetings {}, you have landed on the query page</h1>'.format(name)

#WORKS 10/26
@app.route('/postmanjson',methods=['POST','GET'])
def postmanjson(): 
	data = request.get_json()

	name = data['name']
	location = data['location']
	randomlist = data['randomlist']

	return jsonify({'key' : 'values','name':  name, 'location': location, 'Random Item': randomlist})

if __name__ == '__main__':
	app.run() 




# See folder README for notes