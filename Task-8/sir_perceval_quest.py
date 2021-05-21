import json
import os
import requests
username = input()
flag=1
page=1
name=[]
while flag!=0:
	request = requests.get('https://api.github.com/users/'+username+'/repos?page='+str(page))
	page+=1
	json = request.json()
	if not (len(json)):
		flag=0
		continue
	for i in range(0,len(json)):
		name.append(json[i]['svn_url'])		
print(len(name))	
for i in range(0,len(name)):
	os.system('perceval git --json-line '+name[i]+' >>commits.json')
