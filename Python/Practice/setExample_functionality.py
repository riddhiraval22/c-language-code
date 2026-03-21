s1={1,2,3,4,10,1,2}
s2=set([1,2,3,4,1,2])

print(s1)
print(s2)
s1.add(100)
print(s1)
s2.add("tops")
print(s2)
print(s2 ^ s1) # unmatched record
print(s2 - s1)
print(s2 & s1)
print(s2 | s1)
s1.remove(1)
print(s1)
#s1.remove(1000) -- throw error 
s1.discard(1000) # while this not throw error
print(s1)
