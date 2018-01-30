import re
import requests
from bs4 import BeautifulSoup
search=input();
n=[]
n1=[]
r1=requests.get('https://in.udacity.com/courses/all')
soup = BeautifulSoup(r1.content, 'html.parser')
#print(soup.prettify())
n1=soup.find_all(class_="col-xs-12")
print ("************************Udacity*********************************")
for i in range(3,len(n1)):
	if(re.search(search,n1[i].text)):
		print(n1[i].text)