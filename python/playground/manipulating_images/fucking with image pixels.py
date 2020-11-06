from PIL import Image, ImageColor

im = Image.new('RGBA',(100,100))
# We are basicaly creating 'frame' for an image, with WIDTH = 100 and HEIGHT = 100 (100,100)
# And storing it into "im" variable
im.getpixel((0,0))
# This will output: (0,0,0,0)
for x in range(100):
    for y in range(50):
        im.putpixel((x,y),(210,210,210))
        # putpixel((x,y),(210,210,210)) is taking in arguments for the color which is "Light Grey"
        # which will be placed along the x and y coordinates
        # im.putpixel((x,y),ImageColor.getcolor('pink','RGBA'))

for x in range(100):
    for y in range (50,100):
        im.putpixel((x,y),ImageColor.getcolor('darkgray','RGBA'))
        # putpixel((x,y),() is taking in arguments for the color which is "Light Grey"
        
im.getpixel((0,0))
im.getpixel((0,50))

im.save('putPixelPink.png')