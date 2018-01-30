import requests
from bs4 import BeautifulSoup
r=requests.get('https://www.coursera.org/browse/computer-science?languages=en')
soup = BeautifulSoup(r.content, 'html.parser')
#print(soup.prettify())
n=soup.find_all("div",class_='horizontal-box')
for i in range(4,20):
	print(n[i].text)
