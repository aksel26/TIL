### **텔레그램 설치**

1. chrome 확장 프로그램에서 telegram 설치

2. botfather에서 Tokken 번호 부여 받는다.



### **가상환경 구축**

1. C드라이브에서 TIL폴더 생성 후 시작



2. `virtualenv env`
   가상환경 구축



3. `$ source venv/Scripts/activate`
   `(venv) ` : 구축 완료됨을 의미



4. flask 설치

   $ pip install flask` 

   

5. .env 파일 생성

   `TOKEN=851541472:AAFs8py0ejLoI2yf1rBUd4o1TLB5bQbDcGE`



### telegram bot document

1. telegram bot api 검색



2. request로 telegram에 접근

   `https://api.telegram.org/bot/METHOD_NAME`



3. getme 메서드 호출

   `https://api.telegram.org/bot851541472:AAFs8py0ejLoI2yf1rBUd4o1TLB5bQbDcGE/getMe`



![image-20191108100837207](C:\Users\student\Documents\GitHub\TIL\(1108~) Python\가상환경 구축.assets\image-20191108100837207.png)



4. getUpdates 메서드 호출

   ``https://api.telegram.org/bot851541472:AAFs8py0ejLoI2yf1rBUd4o1TLB5bQbDcGE/getUpdates`

![image-20191108100806638](C:\Users\student\Documents\GitHub\TIL\(1108~) Python\가상환경 구축.assets\image-20191108100806638.png)



​	<u>sendMessage</u>**?**chat_id=851541472&text=안녕하세요

​	?는 쿼리의 시작

` https://api.telegram.org/bot851541472:AAFs8py0ejLoI2yf1rBUd4o1TLB5bQbDcGE/sendMessage?chat_id=945069316&text=안녕하세요!!! `

![image-20191108101215161](C:\Users\student\Documents\GitHub\TIL\(1108~) Python\가상환경 구축.assets\image-20191108101215161.png)

![image-20191108101329735](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108101329735.png)





5. `pip intall python-decouple`



cf ) request(args.get) vs requests(.get url)



![image-20191108104131481](C:\Users\student\Documents\GitHub\TIL\(1108~) Python\가상환경 구축.assets\image-20191108104131481.png)

![image-20191108104218122](C:\Users\student\Documents\GitHub\TIL\(1108~) Python\가상환경 구축.assets\image-20191108104218122.png)



새로고침 하면 나온다! 참고로 pprint 하면 깔끔하게 나옴

![image-20191108104648525](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108104648525.png)



6. 챗 아이디만 뽑아오기

   `chat_id=res['result'][0]['message']['chat']['id']`

![image-20191108104901346](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108104901346.png)

7. 로또 번호 불러오기

   ` list1=range(1,47)`

   `  lotto=random.sample(list1,6)`

   ![image-20191108111559034](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108111559034.png)

![image-20191108111714235](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108111714235.png)





8. 메세지 보내기

![image-20191108113645399](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108113645399.png)



텔레그램 화면

<img src="C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108113621352.png" alt="image-20191108113621352"  />

<img src="C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108113850285.png" alt="image-20191108113850285" style="zoom:80%;" />

```python
from flask import Flask,render_template,request
import requests
from decouple import config
from pprint import pprint
import random 

app =Flask(__name__)
token=config('TOKEN')
base_url=f"https://api.telegram.org/bot{token}"
    
@app.route('/telegram')
 
def telegram():
    #토큰값을 받아오자 
    #telegram bot api 문서에 request url
    
    
    #telegram 서버에 data 요청
    #.json() 이 없으면 응답코드만 받음
    res=requests.get(f'{base_url}/getUpdates').json()


    # chat id 추출 (sendMessage 할 때 필요하기 때문)
    chat_id=res['result'][0]['message']['chat']['id']
    pprint(res)
    print(chat_id)

    list1=range(1,47)
    lotto=random.sample(list1,6)
    print(lotto)

    res=requests.get(f'{base_url}/sendMessage?chat_id={chat_id}&text={lotto}').json()

    return ''
    
@app.route('/chat')
def chat():
    return render_template('chat.html')

@app.route('/send_msg')
def send_message():
    req = request.args.get("chat")

    res=requests.get(f'{base_url}/getUpdates').json()
    chat_id=res['result'][0]['message']['chat']['id']

    send_url=f'/sendMessage?chat_id={chat_id}&text={req}'
    response=requests.get(base_url+send_url)

    return "보내기 완료"
if __name__ =="__main__":
        app.run(debug=True)
```



chat.html

```html
<form action="/send_msg" method="GET">
    채팅내용 : <input type="text" name="chat">
    <input type="submit" value="보내기">
</form>
```





### web hook
로컬에서는 접근이 안되기 때문에 ngrok 사용

- ngrok 실행

​	`./ngrok http 5000` 

- set_webhook.py 파일 만들기

```python
#POST방식으로 받기 ()
@app.route('/',methods=['POST'])

def tel_web():
    req=request.get_json().get('message')

    pprint(req)
    return '',200
```

![image-20191108134848610](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108134848610.png)



- 메세지 내용 & chat id 만 받아오기

```python
#POST방식으로 받기 ()
@app.route('/',methods=['POST'])

def tel_web():
    req=request.get_json().get('message')
    
    # 방법 1. 
    print(req['text'],req['chat']['id'])
    
    #방법 2.
    if req is not None:
        chat_id = req.get('chat').get('id')
        text=req.get('text')
    print(chat_id,text)
    return '',200
```



#### **예제 )** 로또라고 치면 로또번호가 나오고 이외의 메세지는 그대로 출력

```python
def tel_web():
    req=request.get_json().get('message')
    chat_id = req.get('chat').get('id')
    text=req.get('text')
    
    list1=range(1,47)
    lotto=random.sample(list1,6)
    
    if req.get('text')=='로또':
        req1=requests.get(f'{base_url}/sendMessage?chat_id={chat_id}&text={lotto}').json()
        
    else:
       req1=requests.get(f'{base_url}/sendMessage?chat_id={chat_id}&text={text}').json()
    return '',200
```

![image-20191108144701574](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108144701574.png)

### 파파고 번역

```python
#============파파고====================
@app.route('/papago')
def papago():
    C_ID=config('C_ID')
    C_SC=config('C_SC')
    url="https://openapi.naver.com/v1/papago/n2mt"

    #헤더정보 입력
    headers={
        "Content-Type": "application/x-www-form-urlencoded; charset=UTF-8",
        "X-Naver-Client-Id": C_ID,
        "X-Naver-Client-Secret": C_SC
    }

    data={
        "source":"ko",
        "target":"en",
        "text":"안녕하세요"
        }

    req=requests.post(url,headers=headers,data=data).json()
    print(req)
    return "FINISH!"
```

![image-20191108154630069](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108154630069.png)

![image-20191108154648593](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108154648593.png)



### 챗봇 번역

```python
def tel_web():
    C_ID=config('C_ID')
    C_SC=config('C_SC')
    url="https://openapi.naver.com/v1/papago/n2mt"

    #헤더정보 입력
    headers={
        "Content-Type": "application/x-www-form-urlencoded; charset=UTF-8",
        "X-Naver-Client-Id": C_ID,
        "X-Naver-Client-Secret": C_SC
    }
    req=request.get_json().get('message')
    
     chat_id = req.get('chat').get('id')
    text=req.get('text')
     list1=range(1,47)
    lotto=random.sample(list1,6)
    
if "로또" in text:
        msg=random.sample(range(1,47),6)
    elif "/번역" in text:
        #번역내용
        re_text=text.replace("/번역","")
        data={
            "source":"ko",
            "target":"en",
            "text":re_text
             }
        res=requests.post(url,headers=headers,data=data).json()
        msg=res.get('message').get('result').get('translatedText')
    else:
        msg=text
    send_url =f'/sendMessage?chat_id={chat_id}&text={msg}'
    res=requests.get(base_url+send_url)
    return '',200
```

![image-20191108163251281](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108163251281.png)

### 배포

` https://www.pythonanywhere.com/ `

.env 파일 업로드하고

pip설치가 되었는지 lib확인하기 위해  `bash control` 에 들어간다

`pip list` : 설치 목록 확인

decouple 설치 : `pip3 intall --user python-decouple` 

![image-20191108172656151](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108172656151.png)

chat.html 업로드



서버 돌리기 성공

![image-20191108172742330](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108172742330.png)



환경설정 바꾸기

![image-20191108172917294](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108172917294.png)

bash 창에서

`python set_webhook.py` 로 실행

배포 성공

![image-20191108173014440](C:%5CUsers%5Cstudent%5CDocuments%5CGitHub%5CTIL%5C(1108~)%20Python%5C%EA%B0%80%EC%83%81%ED%99%98%EA%B2%BD%20%EA%B5%AC%EC%B6%95.assets%5Cimage-20191108173014440.png)

 http://kim.pythonanywhere.com/papago 에 배포되어 있기 때문에 ngrok 없이도 사용 가능하게 됨!

