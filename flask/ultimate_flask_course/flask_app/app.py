from flask import Flask, jsonify
app = Flask(__name__)

@app.route('/')
def index():
 	return '<h1>Art BAG! ART BAG! <h1>'

@app.route('/home')
def home():
	return '<h1>You are now on the home page...Art BAG! <h1>'

@app.route('/json')
def json():
	return jsonify({'key' : 'values', 'keyTwo' : [1,2,3]})

if __name__ == '__main__':
	app.run(debug=True)

