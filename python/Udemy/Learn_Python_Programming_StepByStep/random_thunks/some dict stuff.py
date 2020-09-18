
mathcedColors = {1:"Blood",2:"Sadness",3:"joy",4:"summer"}

print(mathcedColors)
# {1: 'Blood', 2: 'Sadness', 3: 'joy', 4: 'summer'}



print(mathcedColors[3])
# joy
print(mathcedColors.keys())

print(mathcedColors.items())

# for laser in mathcedColors.values():
# 		print(laser, end="•")

for k,l in mathcedColors.items():
	print(k,"º",l)