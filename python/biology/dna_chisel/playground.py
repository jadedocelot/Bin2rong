import dnachisel
from dnachisel import *

# Define the optimization problem

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
