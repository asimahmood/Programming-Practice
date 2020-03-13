class Card:
    def __init__(self, suit, val):
        self.suit = suit
        self.val = val

    def __str__(self):
        return str(self.val) + " of " + self.suit

class Deck:
    def __init__(self):
        self.cards = []
        self.build()

    def build(self):
        for s in ["Spades", "Hearts", "Diamonds", "Clubs"]:
            for v in range(1, 14):
                self.cards.append(Card(s, v))


    def __str__(self):
        ret = " "
        for c in self.cards:
            ret += str(c) + "\n"
        return ret


c = Card("hearts", 5)
# print(c)
d = Deck()
print(d)
