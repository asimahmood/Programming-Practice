class Card:
    def __init__(self,suit,value):
        self.suit=suit
        self.value=value

    def __str__(self):
        return str(self.value)+" of "+self.suit
# In[85]:
class Decks:
    def __init__(self):
        self.cards=[]
        self.build()

    def build(self):
        for s in ["spades","hearts","daimonds","clubs"]:
            for v in range(1,14):
                self.cards.append(Card(s,v))

    def __str__(self):
        ret=""
        for c in self.cards:
            ret+=str(c)+"\n"
            return ret
# In[86]:
c=Card("hearts",5)
print (c)
# In[87]:
d=Decks()
print (d)
# In[88]:
import random

def shuffle(self):
    for i in range(0,len(self.cards)):
        r=random.randint(0,i)
        self.cards[i],self.cards[r]=self.cards[r],self.cards[i]#swaping of cards here
Decks.shuffle=shuffle
# In[89]:
print (d)
d.shuffle()
print (d)
# In[90]:
def draw(self):
    r=random.randint(0,len(self.cards))
    c=self.cards.pop(r)
    return c
Decks.draw=draw
# In[91]:
c=d.draw()
print (c)
print (d)