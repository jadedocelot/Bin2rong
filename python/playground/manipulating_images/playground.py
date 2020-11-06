from PIL import Image

catIm = Image.open("cat.png")
width,height = catIm.size
qtrIm = catIm.resize((int(width/2),int(height/2)))
# svelteIm = catIm.resize((width + 300,height + 300))

print("OG size: ", catIm.size)
print("Cat Resize: ", qtrIm.size)

