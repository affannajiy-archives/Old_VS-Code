
hehe = open("kopisusu.txt", "w") #writing the textfile

hehe.write("Kopi O\n")
hehe.write("Kopi Tarik\n")
hehe.write("Kopi Susu Tambah\n")
hehe.write("Kopi Milo Ais\n")
hehe.write("Kopi Gula")

hehe.close()

'''
k = open("kopisusu.txt", "r")
list1 = k.readlines()
print(list1[3])

'''
'''
print(k.readline(2)) #same as read(2)
print(k.readline())

print(k.read(7)) #it will continue after the 7 char including the space
print(k.read(8))
'''