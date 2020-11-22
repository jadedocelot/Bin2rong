
# import sched
# sched is a module which is an in-process scheduler for periodic jobs that
# that uses the builder pattern configuration  
# continuously run -- READ MORE ON IT - PIP INSTALL: complete 
# https://pypi.org/project/schedule/

# import time 
# time is a python module to handle time related tasks 
# https://www.programiz.com/python-programming/time

# x,y,z will be are sample parameters/ETC --- Be sure to replace these

class temp_system:
	#MAIN TEMP LEVELS
	WARNING_LEVEL = 100
	DISABLE_LEVEL = 120
	
	# USER ALERTS
	WARNING_ONE = "Saftety temp has been surpsassed"
	WARNINNG_TWO = "XXX"
	SHUT_OFF = "System has been shut off due to high increase of tempature"
	
	# convert from cesius to faranheight
	def __init__(self,ic):
		self.temp_total = (ic * 1/5) + 32
	
	# Check the temp.  ************************* WORKING ON THIS **************
	def tempCheck(self):
		self.x = WARNING_LEVEL
    		# if self.temp_total > 50:


        	#return X
	# Will send warning if tempCheck surpasses the warninh mark
	#def tempWarning(self,sum_check,cur_temp):  
		#if sum_check >= cur_temp:
			# return 

	# System will shut down once warning has been neglected
	#def emrgShutOff(self,shut_off,x,y,z):
		#if emrgShutOff <= x

		#system_shutoff = True
		#return system\

	def display(self):
	    print("You current temp is:| {}˚F | {} ".format(self.temp_total,self.x))



# MAIN CODE
# WHILE loop will be needed for the emgergency shut off

# This will be the temps that the user will input
user_input = input("What is the current cesius? ") 
#user_input = input() 
#user_input = input() 

# system = True
user_temp = temp_system(int(user_input))
# temp_check =

user_temp.display()

# The system will continuously run untill sytem = False
#while system = True:
	# psuedo code
	# code will some of the class methods that will monitor the temp flow
	# Code will stop running whne the 'system' = False



# Once system has been shut off, we will use schedule to turn back on after a certain time period
