
# import sched
# sched is a module which is an in-process scheduler for periodic jobs that
# that uses the builder pattern configuration  
# continuously run -- READ MORE ON IT - PIP INSTALL: complete 
# https://pypi.org/project/schedule/

# import time 
# time is a python module to handle time related tasks 
# https://www.programiz.com/python-programming/time

class safety_scanner:

	WARNING_ONE = "Saftety temp has been surpsassed"
	WARNINNG_TWO = "XXX"
	SHUT_OFF = ""

	def __init__(self,tempOne,tempTwo,tempThree):
		
		self.tempOne = tempOne
		self.tempTwo = tempTwo
		self.tempThree =  tempThree


	# Check the temp
	def tempCheck(self,x,y):
		sum_check = x + y
		return sum_check


	# Will send warning if tempCheck surpasses the warninh mark
	def tempWarning(self,sum_check,cur_temp):  
		if sum_check >= cur_temp:



	# System will shut down once warning has been neglected
	def emrgShutOff(self):





