x = set(['foo', 'bar', 'baz', 'foo', 'qux'])
print(x)

s = 'quux'
s = set(s)
print(s)



from collections import Counter
cnt = Counter()
for word in ['red', 'blue', 'green', 'blue', 'blue']:
	cnt[word] += 1

print (cnt.most_common(2))
# cnt['orange']
print (cnt.most_common())

# sentence = "asim jans vsjfvns vsfn j njv sfn sjcnsdjkc sdvj sdkjv"
# for word in sentence:
# 	cnt[word] += 1

# print(cnt.most_common())