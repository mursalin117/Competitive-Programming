class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        
        ans = []
        for i in range(n):
            s = ''
            if ((i + 1) % 3 == 0):
                s += 'Fizz'

            if ((i + 1) % 5 == 0):
                s += 'Buzz'
            
            if ((i + 1) % 3 != 0 and (i + 1) % 5 != 0):
                s += str(i+1)
            
            ans.append(s)

        return ans


        # l=[]
        # for i in range(1,n+1):
        #     a=(i%3==0)
        #     b=(i%5==0)
        #     l.append(str(i)*(not(a or b))+"Fizz"*(a)+"Buzz"*b)
        # return l


        # liste=[str(i) for i in range(1,n+1)]
        # k=1  
        # while 3*k-1 < n : #check condition
        #     liste[3*k-1]="Fizz"
        #     k+=1
        # l=1
        # while 5*l-1 < n:
        #     liste[5*l-1]="Buzz"
        #     l+=1
        # m=1
        # while 15*m-1<n:
        #     liste[15*m-1]="FizzBuzz"
        #     m+=1
        # return liste