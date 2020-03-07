import requests
import array


URL = 'https://www.embassy-worldwide.com/'
page = requests.get(URL)   # performs the http request of the site
CountryEmbassy(country)

def CountryEmbassy(country):
    pagecountryURL = URL + "{}".format(Country)
    print(pagecountr)