import py3Dmol
from biopandas.pdb import PandasPdb
from IPython.display import IFrame
import warnings
import pytraj as pt
import nglview as nv

view_two = py3Dmol.view(query='pdb:7C7L')
view_two.setStyle({'cartoon':{'color':'spectrum'}})
print(view_two)