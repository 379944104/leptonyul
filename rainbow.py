import math

def hsl(h, s, l):
	r = 0
	g = 0
	b = 0

	if s == 0:
		r = 1
		g = 1
		b = 1
	else:
		def hue2rgb(p, q, t):
			if t < 0:
				t += 1
			if t > 1:
				t -= 1
			if t < 1/6:
				return p + (q - p) * 6 * t
			if t < 1/2:
				return q
			if t < 2/3:
				return p + (q - p) * (2/3 - t) * 6
			return p

		q = 0
		if l < 0.5:
			q = l * (1 + s)
		else:
			q =  l + s - l * s
		p = 2 * l - q
		r = hue2rgb(p, q, h + 1/3)
		g = hue2rgb(p, q, h)
		b = hue2rgb(p, q, h - 1/3)
	return (round(r * 31), round(g * 31), round(b * 31))

LENGTH = 32

for n in range(LENGTH):
	rgb = hsl(n/LENGTH, 1, 0.5)
	print("  RGB_Color %d, %d, %d" % (rgb[0], rgb[1], rgb[2]))
