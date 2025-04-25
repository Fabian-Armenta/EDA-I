def recursivo(a):
    if len(a) ==1:
        return a[0]
    else:
        return a[0] if a[0] > recursivo(a[1:]) else recursivo(a[1:])
    
print("Elemento mas grande forma recursiva es:",recursivo([4,2,16,1,5,8]))

#Forma iterativa

a = [1,2,3,4,6,7,32,8,14]
max_num = 0
for i in a:
    if i > max_num:
        max_num = i

print(max_num)