#print("Ola ", end="")
#print("Mundo")
#numero=67
#print("Numero ", numero,sep="&& ")
#num=0
#num = input("Bem Vindo \n prima 1 para nome cliente \n prima 2 para Iban")

#opc = int(input("Intrud opçao: "))

#match opc:
#    case  1:
#        print("3")
#    
#    case  2:
#        print("4")
#        
#    case default:
#        print("0")
        
        
#if opc == 1:
    #print("Nome")
#elif opc == 2:
    #print("Iban")
#elif opc == 3:
    #print("Iban")
#elif opc == 4:
    #print("Iban")
#else:
    #print("nao existe opc")
    
#num1= int(input("insira o primeiro numero: "))
#num2= int(input("insira o segundo numero: "))
#num3= int(input("insira o terceiro numero: ")) 
    
#if num1>num2 and num2>num3:
#    print("1 é o maior Numero 2 é do meio Numero 3 é o menor")
#if num1>num2:
    
#    if num1>num3:
#        print("Numero 1 é o maior")
#        if num2>num3:
#            print("Numero 2 é do meio Numero 3 é o menor")
#        else:
#            print("Numero 3 é do meio Numero 2 é o menor")

#if num1>num2 and num2>num3 and (num1>num3 or num3>num2):
#    print("Num1 é o maior")
#       
#elif num3>num2 and num2>num1 and (num3>num1 or num1>num2):
#    print("Num3 é o maior")
#    
#elif num2>num1 and num1>num3 and (num2>num3 or num3>num1):
#    print("Num2 ser maior Num1 ser meio Num3 ser menor")
#
#else:
#    print("tem dois numeros iguais")
    
#Pedir um numero de 1 a 13, e analisar se o mesmo é primo (SO IF).
#EX.5- divisel por 1 e por 5
# 5%5==0
# Num=int(input("Intrud numero"))
##     True       True
# if Num%2 !=0 && Num !=2:
#    #print("não primo")
# elif Num%3 !=0 && Num !=3:
#    #print(""não primo")
# else
#    print("primo")
# 4 = 2 4
# 8 = 2 ,4 8
# 9 = 3, 9
# 10 = 2 5 10
# 12= 2 3 4 10


#pergunta = int(input("Escreve um numero que seja primo: "))
#
#if pergunta > 1 and all(pergunta % i for i in range(2, pergunta)):
#    print("Correto, o numero é um numero primo")
#    
#else:
#    print("Errado, o numero não é um numero primo")