from PIL  import Image,ImageEnhance,ImageMath

#im = Image.open("277456.jpg")
#im.rotate(45).show()

im1 = Image.open("WBR-Series.jpg")
im2 = Image.open("MV-MIM-Series.jpg")

out = ImageMath.eval("convert(min(a,b), 'L')", a=im1, b=im2)
out.save("result.png")


# The PixelAccess class provides read and write access to PIL.Image data at a pixel level

# with Image.open("277456.jpg") as im:
   # px = im.load()

# print(px[4,4])
# px[-4,-4] = (0,0,0)
# print (px[-4,-4])

#PIL.Image data at a pixel level
#(137, 133, 121)
#(0, 0, 0)





# TO DO 

# The commented code below is to sharpen an image
# nhancer = ImageEnhance.Sharpness("cat.jpg")

#for i in range(8):
#    factor = i / 4.0
#    enhancer.enhance(factor).show(f"Sharpness {factor:f}")

