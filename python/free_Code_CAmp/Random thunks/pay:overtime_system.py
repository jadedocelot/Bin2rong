def computePay(hour,rate):
	print("In Computepay",hour,"|",rate)
	if hour > 40:
		reg = rate * hour
		otp = (hour - 40.0) * (rate * 0.5)
		xp = reg + otp
		print("Pay:",xp)
	else: 
		xp = hour * rate 

sh = input("Enter Hours:")
sr = input("Enter Rate:")
fh = float(sh)
fr = float(sr)

computePay(fh,fr)

