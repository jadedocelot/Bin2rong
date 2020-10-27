from flask import Flask, jsonify, request, url_for, redirect

app = Flask(__name__)

app.config['DEBUG'] = True
app.config['TESTING'] = True

#WORKS 10/26
@app.route('/', methods=['GET','POST'])
def index():
	return '<h1>This is the index page</h1>'
#WORKS 10/26
@app.route('/home', methods=['GET','POST'], defaults = {'name' : 'Defualt'})
@app.route('/home/<string:name>', methods=['GET','POST'])
def home(name):
	return '<h1>Welcome {}! You Are Now an Art Fag! This is the home page</h1>'.format(name)

@app.route('/theform', methods=['POST','GET'])
def theform():
	if request.method == 'GET':
		return '''<form method="POST" action="/theform">
						<input name="name" type="text">
						<input type="submit" value="Submit">
			      	  </form>'''
	else:
		name = request.form.get('name')
		return redirect(url_for('home',name=name)) 
		#return '<h1>Greetings {}, you have landed on the query page!</h1>'.format(name)
		# the commented return above will go to the 'query' page

#WORKS 10/26
@app.route('/info') 
def info():
	name = request.args.get('name')
	location = request.args.get('location')
	return '<h1>Greetings {}, you have landed on the query page from {}</h1>'.format(name,location)

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