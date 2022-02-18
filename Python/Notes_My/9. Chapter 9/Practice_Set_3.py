for i in range(2,11):
    f = open(f"Tables/Table_of_{i}","w")
    for j in range(1,11):
        f.write(f"{i}x{j}={i*j}\n")
    