terms = ['eraser', 'erase', 'dreamer', 'dream']
s = str(input())

for t in terms:
    try:
        s = s.replace(t, '')
    except:
        pass

if s == '':
    print('YES')
else:
    print('NO')