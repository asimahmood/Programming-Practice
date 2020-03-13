def is_matched(string):
	opening = "({["
	closing = ")}]"

	mapping = dict(zip(opening, closing))

	stack = []

	for c in string:
		# case 1
		if c not in mapping.values() and c not in mapping.keys():
			continue



		# case 2
		if c in mapping:
			stack.append(mapping[c])

		# case 3

		elif len(stack) == 0 or c != stack.pop():
			return false


	return len(stack) == 0

string = " 2 + (3 * 5) * ((2 * 2) + 5) "
print(is_matched(string))
