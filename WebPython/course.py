import requests
from bs4 import BeautifulSoup
r=requests.get('https://www.coursera.org/browse/computer-science?languages=en')
soup = BeautifulSoup(r.content, 'html.parser')
#print(soup.prettify())
n=soup.find_all("div",class_="color-primary-text headline-1-text flex-1")
ina=[]
ina.append(n[0].text)
print(ina)