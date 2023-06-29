import selenium
from selenium import webdriver
from selenium.webdriver.common.keys import Keys

browser = webdriver.Chrome()
start_url = 'https://www.youtube.com/channel/UCtckgmUcpzqGnzcs7xEqMzQ/videos'
browser.get(start_url)
