from PIL import Image

# paws = OG image of paws
paws = Image.open("croppedCat.png")
catTemplate = Image.open("messy_cat.png")

# Pasting paws on the right side
catTemplate.paste(paws,(0,0))
catTemplate.paste(paws,(0,100))
catTemplate.paste(paws,(0,200))
catTemplate.paste(paws,(0,300))
catTemplate.paste(paws,(0,400))
catTemplate.paste(paws,(0,500))

# pasting paws on the left side
catTemplate.paste(paws,(800,0))
catTemplate.paste(paws,(800,100))
catTemplate.paste(paws,(800,200))
catTemplate.paste(paws,(800,300))
catTemplate.paste(paws,(800,400))
catTemplate.paste(paws,(800,500))

catTemplate.save("catgfreak.png")

openIm = Image.open("catgfreak.png")
openIm.rotate(0).show()