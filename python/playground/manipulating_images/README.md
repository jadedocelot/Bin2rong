
                                                    ______________________________________________________

 #                                                                   Manipulating Images
                                                    ______________________________________________________

- Python provides a 3rd party module called Pillow
    * The module has several functions that make it easy to crop, resize, and edit the content of the image. This will allow you to manipulate images like paint



                                                    ______________________________________________________

 #                                                                Computer Image Fundamentals
                                                    ______________________________________________________

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