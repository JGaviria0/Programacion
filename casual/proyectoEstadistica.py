import scipy.stats as st
import numpy as np
import matplotlib.pyplot as plt
from statistics import stdev,mean
import pandas as pd
import os

def graficarCurvaDeDistribucionNormal(media,desviacion,X1,X2):
    normal = st.norm(media, desviacion)
    x = np.linspace(normal.ppf(0.01),normal.ppf(0.99), 100)
    fp = normal.pdf(x)
    plt.plot(x, fp)
    plt.fill_between(x,0, fp,where=(X2>x) & (x>X1))
    plt.title('Distribución Normal'+"\nProbabilidad = ")
    plt.ylabel('Probabilidad')
    plt.xlabel('Valores')
    plt.show()

def mostrarContenido(archivos):
    j = 1
    print("Elija el archivo a procesar: \n")
    for i in archivos:
        print( j , ". ", i)
        j += 1

def columnaATrabajar(df):
    print("Elija la columna en la que quiere trabajar: ")
    columna = []
    j = 1
    for i in df:
        columna.append(i)
        print(j, ". ", i)
        j+=1
    res = int(input())
    return columna[res-1]


def respectoExcel():
    pwd = os.getcwd() + '/Datos' 
    contenido = os.listdir(pwd)
    mostrarContenido(contenido)
    archivo = int (input())
    datos = pd.read_csv(pwd + "/" + contenido[archivo-1])
    df = pd.DataFrame(datos)
    columna = columnaATrabajar(df)

    promedio = df[columna].mean()
    desviacion = df[columna].std()
    filas = df.shape[0]
    calculo(desviacion, promedio, filas)

def calculo(desviacion, promedio, ndatos):
    hNula = input("Ingrese la hipotesis nula: ")
    print("Elija la hipotesis alternativa: ")
    print("1. H1 < ", hNula, "\n2. H1 != ", hNula, "\n3. H1 > ", hNula)
    ele = int(input())
    pError = int(input("Ingrese el porcentaje de error: "))
    if ele == 1:
        menorque(desviacion, promedio, ndatos, pError,hNula)
    # elif ele == 2:
    #     diferentede()
    # elif ele == 3:
    #     mayorque()

def menorque(desviacion, promedio, ndatos, pError,hNula):
    pValor = st.norm.ppf(pError/100)
    print(pValor)
    graficarCurvaDeDistribucionNormal(promedio,desviacion,-1,1)

    
    
   

def menu():
    while(True):
        print("Menu Principal: \n")
        print("""
1. Teoria de hipotesis respecto a tabla de excel.
2. Teroia de hipotesis respecto a media.
        """)

        ele = int(input())

        if ele == 1:
            respectoExcel()
        else:
            print("Escoger una opcion valida.")
    
    
    # print(st.norm.ppf(0.05))

menu()