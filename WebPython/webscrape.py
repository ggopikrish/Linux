from lxml import html
import requests
page = requests.get('http://docs.python-guide.org/en/latest/scenarios/scrape/')
tree = html.fromstring(page.content)
buy=tree.xpath('/html/body/div[1]/div[1]')
print(buy)