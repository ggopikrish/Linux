from crawler import Crawler
crawler = Crawler()
crawler.crawl('http://techcrunch.com/')
# displays the urls
print (crawler.content['techcrunch.com'].keys())