#Alma Leticia Douglas Gonzales Guilbert
#Apunte 2 : Funciones en Python

a = 0
b = 0
def lectura():
    global a
    global b
    a = int(input("Ingrese el primer valor: "))
    b = int(input("Ingrese el segundo valor: "))
def suma():
    print(f"La suma es: {a+b}")

def resta():
    print(f"La resta es: {a-b}")

def multiplicacion():
    print(f"La multiplicacion es: {a*b}")

def division():
    if b!=0:
        print(f"La division es: {a/b}")
    else:
        print("Division por cero")

print("Operaciones Aritmeticas")
print("1. Suma")
print("2. Resta")
print("3. Multiplicacion")
print("4. Division")
opc = int(input("Que operacion desea realizar: "))

lectura()

if opc == 1:
    suma()
elif opc == 2: 
    resta()
elif opc == 3:
    multiplicacion()
elif opc == 4:
    division()