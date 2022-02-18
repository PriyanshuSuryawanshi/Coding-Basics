import os

oldname = "sample.txt"
newname = "renamed_by_python.txt"
with open(oldname) as f:
    text = f.read()
with open(newname,'w') as f:
    f.write(text) 

os.remove(oldname)