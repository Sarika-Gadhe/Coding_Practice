# Set

# syntax : {}
# Hetrogenous
# Unordered
# unindex
# duplicate not allowd
# set is mutable
# data is immutable

data = {10,90.67,"Hello",True,10}
print("Datatype is : ",type(data))
print("Length is : ",len(data))
print(data)
data.add(71)
print(data)
data.remove(10)
print(data)

print("Data using loop")

for Value in  data:
    print(Value)
    
# print(data[0])