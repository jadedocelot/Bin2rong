# https://edinburgh-genome-foundry.github.io/DnaChisel/

import re

f = open('access_log.log')

log_contents = filter(None, f.read().split('\n'))

for line in (log_contents):
    entries = re.findall(r'"([ˆ"]*)"', line)
    url = entries[0].split(' ')[1]
    url_parts = url.split('?')

if (len(url_parts) > 1):
    query = url_parts[1]
    if (query.find('password') > -1):
        print("Likely credentials found:")
        print(query)
        print("\n")˚


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