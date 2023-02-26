salary=float(input())
if(salary>=0 and salary<=2000):
    print("Isento")
elif(salary>=2000.01 and salary<=3000):
    salary=salary-2000
    salary= salary*.08
    print("R$ %.2f"%salary)
elif(salary>=3000.01 and salary<=4500):
    salary=salary-3000
    salary= salary*.18+80
    print("R$ %.2f"%salary)
else:
   salary=salary-4500
   salary= salary*.28+350
   print("R$ %.2f"%salary)
