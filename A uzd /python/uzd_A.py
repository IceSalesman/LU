'''
Dāvis Karpovskis, dk24053
A8 Dots naturāls skaitlis n. Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda naturāla skaitļa kvadrāti.
Programma izveidota: 08.09.2024.
'''

print("Dots naturals skaitlis n. Izdrukat tos skaitla n reizinatajus, kuri ir kada naturala skaitla kvadrati.")

n = int(input("Ievadiet naturalu skaitli: "))
for i in range(1, n+1):
    if n % i == 0: 
        sqrt_i = i**0.5 
        if sqrt_i == int(sqrt_i): # lai iegūtu reizinātājus kuri ir kāda naturāla skaitļa kvadrāts 
            print(i, end=" ")     
print()


#    Ievads      Programmas vēlamā      Rezults
#                    reakcija         
#      16             1 4 16               +
#      36            1 4 9 36              +
#     126              1 25                +
#       0               -                  +