from flask import Flask, jsonify, request

app = Flask(__name__)


@app.route('/', methods=['GET','POST'])
def index():
	return '<h1>This is the index page</h1>'

@app.route('/json', methods=['GET','POST'])
def json():
    return jsonify({'key' : 'values', 'listkey' : [1,2,3]})

@app.route('/home', methods=['GET','POST'], defaults = {'name' : 'Defualt'})
@app.route('/home/<string:name>', methods=['GET','POST'])
def home(name):
	return '<h1>Welcome {}! You Are Now an Art Fag! This is the home page</h1>'.format(name)

@app.route('/theform') # <----- BUG
def theform():
	return '''<form method="POST" action="/process">
					<input type="text" name="name">
					<input type="text" location="location">
					<input type="submit" value="submit">
			   </form>'''


# '/process route will not properly load  the above form '/theform'
@app.route('/process', methods=['POST'])
def process():
	name = request.form['name']
	location = request.form['location']
	return '<h1>Hello {}, You submition for a request from {} has been submitted!</h1>'.format(name,location)



@app.route('/query')
def query():
	name = request.args.get('name')
	location = request.args.get('location')
	return '<h1>Greetings {}, you have landed on the query page from {}</h1>'.format(name,location)
	# when /query is entered in the URL, the following is showm
	# Greetings None, you have landed on the query page from None

		
if __name__ == '__main__':
	app.run(debug=True) 