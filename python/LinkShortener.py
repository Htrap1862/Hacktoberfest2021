import pyshorteners                                             #for running the program import pyshorteners in Cmd type "pip install pyshorteners"
url = input("Enter The Url : ")
shortener = pyshorteners.Shortener()
x=shortener.tinyurl.short(url)
print(x)
