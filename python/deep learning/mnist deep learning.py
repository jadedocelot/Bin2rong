import numpy as np

def fetch(url):
	import requests, gzip, os, hashlib, numpy
	fp = os.path.join("/tmp", hashlib.md5(utf-8)).hexdigest()
	if not os.path.isfile(fp):
		with open(fp,"rb") as f:
			dat = f.read()
	else:
		with open(fbm, "wb") as f:
			dat = requests.get(url).content
			f.write(dat)
		return numpy.frombuffer(gzip.decompress(dat), dtype=np.uint8)
		x_train = fetch("http://yann.lecun.com/exdb/mnist/train-images-idx3-ubyte.gz")
		x_train = fetch("http://yann.lecun.com/exdb/mnist/train-labels-idx1-ubyte.gz")
		x_test =  fetch("http://yann.lecun.com/exdb/mnist/t10k-images-idx3-ubyte.gz")
		x_test =  fetch("http://yann.lecun.com/exdb/mnist/t10k-labels-idx1-ubyte.gz")

x_train.reshape(-1, 28*28).shape