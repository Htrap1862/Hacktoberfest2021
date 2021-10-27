import pyshorteners                                                                       #import pyshorteners CMD "pip install pyshorteners"
url = input("Enter The Url : ")
shortener = pyshorteners.Shortener()
x=shortener.tinyurl.short(url)
print(x)                                                                          
