from PIL import Image

paws = Image.open("croppedCat.png")
catTemplate = Image.open("messy_cat.png")

catTempWidth, catTempHeight =  catTemplate.size
pawsWidth, pawsHeight = paws.size

for left in range(0, catTempWidth,pawsWidth):
    for top in range(0, catTempHeight,pawsHeight):
        print(left,top)
        catTemplate.paste(paws, (left,top))

catTemplate.save('cat_collage.png')

openIm = Image.open('cat_collage.png')
openIm.rotate(0).show()


# OUTPUT
'''
0 0 <-- OUTER FOR LOOP - -LEFT
0 215 <-- INNER FOR LOOP
0 430 <-- INNER FOR LOOP

230 0 <-- OUTER FOR LOOP - -LEFT
230 215 <-- INNER FOR LOOP
230 430 <-- INNER FOR LOOP

460 0 <-- OUTER FOR LOOP - -LEFT
460 215 <-- INNER FOR LOOP
460 430 <-- INNER FOR LOOP

690 0 <-- OUTER FOR LOOP - -LEFT
690 215 <-- INNER FOR LOOP
690 430 <-- INNER FOR LOOP

920 0 <-- OUTER FOR LOOP - -LEFT
920 215 <-- INNER FOR LOOP
920 430 <-- INNER FOR LOOP

'''
