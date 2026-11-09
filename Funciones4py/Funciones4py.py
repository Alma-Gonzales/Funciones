#Alma Leticia Douglas Gonzales Guilbert
#Apunte 4 : Funciones en Python

def potencia2 (num):
    return num * num

def esPar(num):
    if(num% 2 == 0):
        return True
    else:
        return False

def calE(anio):
    edad = 2026 - anio
    return "Tu edad " + str(edad) + " años"

x = potencia2(9)
print("Potencia 2  de 9: ", x)

print("Pitencia 2 de (15): ", potencia2(15))

num1 = int(input("Ingrese un valor: "))
print("potencia 2 de (", num1 ,"):", potencia2(num1))

print("9 es par", esPar(9))
print("62 es par", esPar(62))

anioNac = int(input("Ingresa tu año de nacimiento: "))
print(calE(anioNac))