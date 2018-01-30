import re
import requests
from bs4 import BeautifulSoup
search=input();
n=[]
n1=[]
r=requests.get('https://www.coursera.org/browse/computer-science?languages=en')
soup = BeautifulSoup(r.content, 'html.parser')
#print(soup.prettify())
n=soup.find_all(class_="color-primary-text headline-1-text flex-1")
print ("************************Coursera***********************************")
print(n[1].text)




