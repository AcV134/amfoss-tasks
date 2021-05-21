<h1>Task-9</h1>
<h2>Spammer_Spaghetti</h2>

After some googling i found out it was much easier to use class id instead.So,my input was<br>

    document.getElementsByClassName('composer_rich_textarea')[0].innerHTML=message;
then,i found out about mousedown trigger from w3schools,<br>
    
    $('.im_submit').trigger('mousedown');	
and this was the result :)
![Screenshot (1321)](https://user-images.githubusercontent.com/79892617/119152239-c2f57580-ba6d-11eb-94b4-0cc518c59316.png)

