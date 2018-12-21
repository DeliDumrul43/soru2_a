text = input("Lütfen yazı yazın : ")
kaf = []
say = []
for i in text:
    if not i in kaf:
        kaf.append(i)
        say.append(1)
    else:
        say[kaf.index(i)] = say[kaf.index(i)]+1
print("ne kadar harf var ?")
for j in range(len(kaf)):
    print(kaf[j], " --> ", say[j])
