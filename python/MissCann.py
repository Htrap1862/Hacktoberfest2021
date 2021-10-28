# -*- coding: utf-8 -*-
"""
Created on Mon Aug  9 20:15:24 2021

@author: Divyabrata
"""

repeatQueue=[[0,0]]
c=0

class MissCann:
   
    def __init__(self,a,b,c):
        self.leftState=a
        self.rightState=b
        self.boat=c
        self.carry=[(2,0,0),(1,0,0),(1,1,0),(0,1,0),(0,2,0)]       
        #[Miss,Cann,Bank]
        
    def disp(self,i):
        if i==(0,1,0) and self.leftState==[3,2]:
            return
        for j in range(self.leftState[0]):
            print('M',end=' ')
        for j in range(self.leftState[1]):
            print('C',end=' ')
        if self.boat=='Left':
            print('|___|',end='')
        print("~~~~~~~~~~",end='')
        if self.boat=='Right':
            print('|___|',end=' ')
        for j in range(self.rightState[0]):
            print('M',end=' ')
        for j in range(self.rightState[1]):
            print('C',end=' ')
        print()
    
    def dispBoat(self,i):
        if i==(0,1,0) and self.leftState==[3,2]:
            return
        b=['|M_M|','|_M_|','|M_C|','|_C_|','|C_C|']
        if self.boat=='Left':
            for j in range(self.setleftState(i)[0]):
                print('M',end=' ')
            for j in range(self.setleftState(i)[1]):
                print('C',end=' ')
            print("~~~~~",end='')
            print(b[self.carry.index(i)],end='')
            print("->~~~",end='')
            for j in range(self.rightState[0]):
                print('M',end=' ')
            for j in range(self.rightState[1]):
                print('C',end=' ')
            print()
        else:
            for j in range(self.leftState[0]):
                print('M',end=' ')
            for j in range(self.leftState[1]):
                print('C',end=' ')
            print("~~~<-",end='')
            print(b[self.carry.index(i)],end='')
            print("~~~~~",end='')
            for j in range(self.setrightState(i)[0]):
                print('M',end=' ')
            for j in range(self.setrightState(i)[1]):
                print('C',end=' ')
            print()
            
    def setleftState(self,i):
        lst=[0,0]
        if self.boat=='Left':
           lst[0]=self.leftState[0]-i[0]
           lst[1]=self.leftState[1]-i[1]
        else:
            lst[0]=self.leftState[0]+i[0]
            lst[1]=self.leftState[1]+i[1]
        return lst
    def setrightState(self,i):
        lst=[0,0]
        if self.boat=='Left':
            lst[0]=self.rightState[0]+i[0]
            lst[1]=self.rightState[1]+i[1]
        else:
            lst[0]=self.rightState[0]-i[0]
            lst[1]=self.rightState[1]-i[1]
        return lst
    def setBank(self):
        if self.boat=='Left':
            return'Right'
        else:
            return'Left'
    def total(self,i,j):
        if (i[0]+j[0])<=3 and (i[1]+j[1])<=3:
            return True
        else:
            return False
    def feasibility(self,i):
        if self.boat=='Left':
            if i[0]<=self.leftState[0] and i[1]<=self.leftState[1] and self.total(i,self.rightState):
                return True
            else:
                return False
        elif self.boat=='Right':
            if i[0]<=self.rightState[0] and i[1]<=self.rightState[1] and self.total(i,self.leftState):
                return True
            else:
                return False
    def legality(self,i):
        if self.boat=='Left' and ((self.leftState[0]-i[0]==0) or (self.leftState[0]-i[0]>=self.leftState[1]-i[1])) and ((self.rightState[0]+i[0]==0) or (self.rightState[0]+i[0]>=self.rightState[1]+i[1])):
            return True
        elif self.boat=='Right' and ((self.leftState[0]+i[0]==0) or (self.leftState[0]+i[0]>=self.leftState[1]+i[1])) and ((self.rightState[0]-i[0]==0) or (self.rightState[0]-i[0]>=self.rightState[1]-i[1])):
            return True
        else:
            return False
    def gameMove(self):
        global repeatQueue
        global c
        while self.rightState != [3,3]:
            for i in self.carry:
                #print('5')
                if self.feasibility(i) and self.legality(i) and (self.setrightState(i) not in repeatQueue):
                    #
                    if c==3:
                        if [1,1] in repeatQueue:
                            repeatQueue.remove([1,1])
                        if [3,1] in repeatQueue:
                            repeatQueue.remove([3,1])
                        if [3,2] in repeatQueue:
                            repeatQueue.remove([3,2])
                        c=0
                    c+=1
                    repeatQueue.append(self.rightState)
                    self.disp(i)
                    self.dispBoat(i)
                    obj=MissCann(self.setleftState(i), self.setrightState(i), self.setBank())
                    obj.gameMove()
                   # print('6',i,self.leftState,self.rightState,self.setrightState(i),self.setleftState(i),self.boat,self.feasibility(i),self.legality(i),self.setrightState(i) not in self.repeatQueue)
            return
        self.disp(0)

def main():
    print("Divyabrata Das Gupta","19BBS0099",sep='\n')
    print ("Missionaries and Cannibals solution:")
    obj=MissCann([3,3],[0,0],'Left')
    obj.gameMove()

 

# if called from the command line, call main()
if __name__ == "__main__":
    main()        
                        
                        
                    
                    
                        
            