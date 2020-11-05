
#                                                    ______________________________________________________

 #                                                                   Manipulating Images
#                                                    ______________________________________________________

- Python provides a 3rd party module called Pillow
    * The module has several functions that make it easy to crop, resize, and edit the content of the image. This will allow you to manipulate images like paint



 #                                                   ______________________________________________________

 #                                                                Computer Image Fundamentals
#                                                    ______________________________________________________

- Computer programs often represent a color in an image as an RGBA value
- An RGBA value is a group of numbers that specify the amounf of red, green, blue, and alpha (or transparancy) in color. 
- Each of the component values is an integer from 0 (none at all) to 255 (the maximum) 
- Thes RGBA values are assigned to individual pixels
- The pixel is the smallest dot of a single color the computer screen can show
- Images also have an alpha value value which determines how much of the background

- In Pillow, RGBA values are represented by a tuple of four integer values, for example the color red is represented by (255,0,0,255l)
    * Green: (0,128,0,255)
    * Blue: (0,0,255,255)

### Pillow offers the ImageColor.getcolor() function so that you dont have to memorize the RGBA values for the colors you want to use
    * This function takes a color name string as its first argument, and the string 'RGBA' as uts second argument, and it returns as RGBA tuple

- Please note that the physics of light uses whats called additive color model. When combining light (such as the light given off by your computer screen) red, green, and blue light can be combined from other color. This is why RGB values represent color in computer programs

- To get started, we re going to need to import ImageColor from module PIL

from PIL import ImageColor

- Then we will need to print out the RGBA of red to verify our its working. And we do this by passing the string name of the color through the 
- ImageColor.getcolor()

print(ImageColor.getcolor('red','RGBA'))

- and passing red will output an RGBA tuple 

 OUTPUT: 
            
 (255, 0, 0, 255)


- Now instead of black if we try BLACK;

 (0, 0, 0, 255)

- You can even pass in 'odd' color names such as 'chocolate' and 'cornflower blue'


#                                                    ______________________________________________________

 #                                                                Coordinate and Box Tuples 
#                                                    ______________________________________________________


- Image pixels are addressed with x- and y-coordinates, which repectively specify the pixels horizontaland vertical location in an image. The origin is the pixel at the top left corner of the image specified with the notation (0,0). The first zero represents the x-coordinates, which starts at zero at the originand incresses going from left to right. The second represents the y-coordinates, which starts at zero  at the origin and increses going down the image.




#                                                  ______________________________________________________

 #                                                                   Manipulating Images (Finally)
#                                                    ______________________________________________________

- Now the first thing we are going to do is open an image, and to do this we are  going to need to import Image from the PIL module. (Note that this shit is case sensitive)

    from PIL import Image 

- After importing Image, you will call image.open() passing the images file name; 'cat.jpg'. You can then store this execution within a variable ('carIm')

- The module name of Pillow is PIL to maie backward compatible with an older module called Python Imaging Library

- It will also be helpful to know that images in seperate directories may be imported by also including the image path and importing os 

 import os
 os.chdir('C:\\folder_with_image_file')

 - Then the image.open() finction returns a value of the image object data type


 #                                                  ______________________________________________________

 #                                                                Working with the Image Data Type
#                                                    ______________________________________________________



>>> from PIL import Image
>>> catIm = Image.open('zophie.png') >>> catIm.size
u(816, 1088)
v>>> width, height = catIm.size
w>>> width
816
x>>> height
1088
>>> catIm.filename 'zophie.png'
>>> catIm.format
'PNG'
>>> catIm.format_description 'Portable network graphics'
>>> catIm.save('zophie.jpg')

After making an Image object from Zophie.png and storing the Image object in catIm, we can see that the object’s size attribute contains a tuple of the image’s width and height in pixelsu. We can assign the values in the tuple to width and height variablesvin order to access with widthwand heightxindividually. The filename attribute describes the original file’s name. The format and format_description attributes are strings that describe the image format of the original file (with format_description being a bit more verbose).
Finally, calling the save() method and passing it 'zophie.jpg' saves a new image with the filename zophie.jpg to your hard drivey. Pillow sees that the file extension is .jpg and automatically saves the image using the JPEG image format. Now you should have two images, zophie.png and zophie.jpg, on your hard drive. While these files are based on the same image, they are not iden- tical because of their different formats.
Pillow also provides the Image.new() function, which returns an Image object—much like Image.open(), except the image represented by Image.new()’s object will be blank. The arguments to Image.new() are as follows:


-  Pillow also provides the Image.new() function, which returns an image object.
- In the next example we will create a PNG of a purple 

from PIL import Image

im = Image.new('RGBA', (100,200), 'purple')
im.save('the_purp.png')

- LINE:119 
    - We make an image that s 100 pixels wide and 200 pixels tall, with a purple background
- LINE:120
    - The image is saved to the the file 'the_purp.png'


 #                                                  ______________________________________________________

 #                                                                      Cropping Images
#                                                    ______________________________________________________

- Cropping an image means selecting a rectangular region inside the image and removing everything outside of the rectangle
- As you would have guessed the PIL module provides a method called crop()
- On image objects takes a box tuple and returns an Image object representing the cropped image


- In this example we will be dealing with the following variable

cropCat= Image.open('cat.png')

- Next we will crop the image to the specifide size within a boxed tuplei of the .crop() method, which will be stored into a variable

 croppedIm = cropCat.crop((335,345,565,560))

- Once cropped we finally proceed to saving this cropped image to a new PNG file

 croppedIm.save('croppedCat.png')

  #                                                  ______________________________________________________

 #                                                                      Cropping Images
#                                                    ______________________________________________________

- The copy() method will return a new Image object with the same image as the Image object it was called on. This is useful if you need to make changes to an image but also want to keep an untouched version of the original. For example, enter the following into the interactive shell:

- In this example we will be using the following; 

 catIm2 = Image.open('croppedCat.png')

- And in order to copy it 

catCopy = catIm2.copy()


- So we opened the image and we copied the damn thing. Which now means that the two variables contain two seperate image objects