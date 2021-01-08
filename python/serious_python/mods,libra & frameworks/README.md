# Chapter 2
## Modules, Libraries, And Frameworks


#### The Import System



#### Meta Path Finders 

 - The 'meta path finder' is an object that will allow you to load custom objects as well as standard .py files. A meta path finder object must expose a find_module(fullname, path=None) method responsoble for loading the module from a source file.