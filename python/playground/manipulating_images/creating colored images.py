from PIL import Image

im = Image.new('RGBA', (300,500), 'pink')
im.save('the_pink.png')

openIm = Image.open('the_pink.png')
openIm.rotate(0).show()