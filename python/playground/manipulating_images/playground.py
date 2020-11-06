from PIL import Image

paws = Image.open("croppedCat.png")
catTemplate = Image.open("messy_cat.png")

catTempWidth, catTempHeight =  catTemplate.size
pawsWidth, pawsHeight = paws.size

for left in range(0, catTempWidth,pawsWidth):
    for top in range(0, catTempWidth,pawsWidth):
        print(left,top)
        catTemplate.paste(paws, (left,top))

