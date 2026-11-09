#Alma Leticia Douglas Gonzales Guilbert
#Apunte 3 : Funciones en Python

#Escribe una funcion que reciba dos parametros e intente
#intercambie sus valores dentor del cuerpo de la funcion
#Al ejecutar el programa debera visualizar:
#- Los valores de la variable antes del intercambio
#- Los valores de las variables con la funcion
#- Los valores de las variables despues del intercambio

def swap(a,b):
    temp = a
    a = b
    b = temp
    print(f"a = {a}, b = {b}")

a = 2
b = 5

print("Antes del intercambio")
print(f"a = {a}, b = {b}")

print("\nEn el intercambio")
swap(a,b)

print("\nDespues del intercambio")
print(f"a = {a}, b = {b}")
