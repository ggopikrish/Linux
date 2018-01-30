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
for i in range(len(n)):
	if(re.search(search,n[i].text)):
	       print(n[i].text)

r1=requests.get('https://in.udacity.com/courses/all')
soup = BeautifulSoup(r1.content, 'html.parser')
#print(soup.prettify())
n1=soup.find_all(class_="col-xs-12")
print ("************************Udacity*********************************")
for i in range(3,len(n1)):
	if(re.search(search,n1[i].text)):
		print(n1[i].text)


