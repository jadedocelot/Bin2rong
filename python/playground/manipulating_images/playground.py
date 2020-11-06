from PIL import Image

paws = Image.open("croppedCat.png")
catTemplate = Image.open("messy_cat.png")

catTempWidth, catTempHeight =  catTemplate.size
pawsWidth, pawsHeight = paws.size

print(catTempWidth) #976
print(catTempHeight) #549

print(pawsWidth) #230
print(pawsHeight) #215
