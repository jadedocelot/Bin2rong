from PIL import Image

catIm = Image.open("cat.png")

width,height = catIm.size
# print(catIm.size) <--- (976, 549)
# when size of catIm is printed, we  will receive a tuple of two arguments
# Since catIm.size provides 2 arguments (in tuples) we will need two variables (and order DOES matter 
# (width,height) <- (976, 549)

qtrIm = catIm.resize((int(width/2),int(height/2)))
# width = 488
# height =  274
# qtrIm.size = (488,274)
# We will store catIm.resize() method within 'qtrIm'
qtrIm.save('qtr_size_cat.png')
# We will then save the value of "qtrIm" into a new PNG file

svelteIm = catIm.resize((width,height + 300))
# "svelteIm" value is the resize of "catIm"
# width stays as is (976)
# height + 300 = 849
# NEW catIm.resize(976,849)
svelteIm.save('lteCat.png')

# NOTEsee CHAPTER README for  