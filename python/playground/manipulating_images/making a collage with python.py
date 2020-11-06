from PIL import Image

paws = Image.open("croppedCat.png")
catTemplate = Image.open("messy_cat.png")

catTempWidth, catTempHeight =  catTemplate.size
pawsWidth, pawsHeight = paws.size

for left in range(0, catTempWidth,pawsWidth):
    for top in range(0, catTempWidth,pawsWidth):
        print(left,top)
        catTemplate.paste(paws, (left,top))

catTemplate.save('cat_collage.png')

openIm = Image.open('cat_collage.png')
openIm.rotate(0).show()


# OUTPUT
'''

# ROW 1
0 0
0 230
0 460
0 690
0 920

# ROW 2
230 0
230 230
230 460
230 690
230 920

# ROW 3
460 0
460 230
460 460
460 690
460 920

# ROW 4
690 0
690 230
690 460
690 690
690 920

# ROW 5
920 0
920 230
920 460
920 690
920 920
'''