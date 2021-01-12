import dnachisel
from dnachisel import *

# Define the optimization problem

#

# We generate a random sequence and optimize it ('problem')
problem = DnaOptimizationProblem(
	sequence=random_dna_sequence(10000),
	constraints=[
		AvoidPattern("BsaI_site"),
		EnforceGCContent(mini=0.3, maxi=0.7, window=50),
		EnforceTranslation(location=(500, 1400))
	],
	objectives=[CodonOptimize(species='e_coli', location=(500, 1400))]
)

# Solve the constraints, optimize with respect to the objective

problem.resolve_constraints()
problem.optimize()

# Print sumarries to check that constraints

print(problem.constraints_text_summary())
print(problem.objectives_text_summary())



'''
===> SUCCESS - all constraints evaluations pass                                                                                                     
✔PASS ┍ AvoidPattern[0-10000](pattern:BsaI(GGTCTC))                                                                                                 
      │ Passed. Pattern not found !
✔PASS ┍ EnforceGCContent[0-10000](mini:0.30, maxi:0.70, window:50)
      │ Passed !
✔PASS ┍ EnforceTranslation[500-1400(+)]
      │ Enforced by nucleotides restrictions


===> TOTAL OBJECTIVES SCORE:     -8.83
     -8.83 ┍ MaximizeCAI[500-1400](e_coli) 
           │ Codon opt. on window 500-1400 scored -8.83E+00

'''