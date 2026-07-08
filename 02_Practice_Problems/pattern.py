# Pattern 1

# n = int(input())

# i = 1
# while i <= n:
#     j = 1
#     while j <= n:
#         print(" * ", end="")
#         j = j+1
#     print()
#     i = i+1


# Pattern 2

# n = int(input())
# i = 1
# ch = 'A'
# while i <=n :
#     j = 1
#     while j<=i:
#         print (ch, end=" ")
#         ch = chr(ord(ch) + 1)
#         j = j + 1
#     print ()
#     i = i + 1    



# Prime Number
n = int(input())
isPrime = bool(1)
i = 2
while i<n:
    if n%i == 0:
        isPrime = bool(0)
        break
    i = i+1

if isPrime == 0:
    print("This Number is not a Prime Number")

else:
    print("This Number is a Prime Number")




    