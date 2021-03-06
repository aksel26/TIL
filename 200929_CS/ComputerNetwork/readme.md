# 목차

[강의1](#1번째-수업)

[강의2](#2번째-수업)

[강의3](#3번째-수업)

[강의4](#4번째-수업)

[강의5](#5번째-수업)

[강의6](#6번째-수업)

[강의7](#7번째-수업)

[강의8](#8번째-수업)

[강의9](#9번째-수업)

---

<br/>

# 1번째 수업

## Netword edge

- End systems(hosts):
  - run application programs
  - Web, email, ...
- Client  / server model
  - client host requests, receives services from always-on server
  - Web browser / server, email client / server, ...
- peer - peer model
  - minimal use of dedicated servers
  - Skype, BitTorrent, ...

<br/> 

### TCP (Transmission Control <u>Protocol</u>)

> Connection - oriented Service

- Reliable, in - order byte stream data transfer
  - loss : acknowledgements and retransmission
  - 메시지가 유실되지 않고 신뢰성 있게 전송됨
  - 메시지 순서를 지키며 전송됨
- flow control
  - sender won't  overwhelm receiver
  - sender가 receiver 에게 보내는 속도를 알맞게 조절해줌.
- congestion control
  - senders "slow down sending rate" when network congested
  - 메시지의 양을 적당하게 받을 수 있게 컨트롤해준다.
- 이러한 것들을 서비스 해주기 때문에 UDP에 비해 **리소스를 많이 소모**한다 





---

**참고** **(TCP vs UDP)**

### **UDP (User Datagram <u>Protocol</u>)**

> Connectionless Service

- unreliabe data transfer
- No flow control 
- No congestion control



*UDP는 다 서비스를 안해주는데 장점은 무엇이냐 ?*

굳이 장점이라고 하자면,

**속도가 빠르다.**

받아들이는 입장에 상관없이 보내는 쪽은 속도에 관계없이 보낼 수 있다.

하지만 **안정성은 보장할 수 없다.**

그래서 속도는 장점이라고 할 수는 없지만,

**선택적으로 사용**하면 된다. 

**<u>메시지가 유실되도 상관없을 경우 UDP 사용</u>** (예.보이스톡)

---

<br/> 

### Protocol

서로간의 규약, 준비동작

<br/> 

### Network Core

: 라우터들끼리 얽힌 망

<br/>

*<u>**메시지를 어떻게 전달하냐 ?**</u>*

1. **Circuit switching**
   - 출발지 - 목적지까지 가는길을 미리 예약해놓고 특정 사용자만을 위해 사용하도록 만들어 놓은 것.
   - 예전 유선 전화망
2. **Packet(bit들의 묶음) switching**
   - 인터넷 방식에서는 이 방법을 사용
   - user가 보내는 데이터를 패킷단위로 받아 그때그때 올바른 방향으로 보내주는 방식

<br/> 

*<u>**어떠한 장단점이 있는가 ?**</u>*  

**장점**

1 Mbps link 의 bandwidth가 있고  100kbps 속도의 여러명의 유저가 있을 경우.

Circuit switching 이면 10명에게만 제공 가능하다.

반면, packet switching 은 제약이 없다.



인터넷 사용 패턴을 보면 항상 데이터를 요청하는 것이 아닌 필요할 때만 데이터를 요청한다. 실질적으로 사용안하는 시간이 더 길기 때문에 동시에 같은 요청이 몰리지 않는다면 더 packet switching이 보다 더 효율적이다 



<br/> 

**단점 ?**

**Packet delay** 

> <u>동시에 몰리는 경우</u>에 발생

다음 패킷으로 보내는데 까지 걸리는 dalay

1. nodal proceesing (들어오고)

   : 새로운 패킷을 받으면 패킷 **검사**하는 processing delay

2. Queueing (기다리고)

   : 나가는 것보다 들어오는 양이 더 많을 경우 대기줄(?)이 생긴다. 이에 대한 **유실을 방지하기 위해 buffer or queue에 저장**

3. Transmission Delay (나가기 전)

   : 한 비트가 뿜어져 나가는 순간부터 완전히 다 나갈때까지 걸리는 시간

   `Transmission delay = 패킷 크기 / link band width`

   Band width가 클수록 delay가 작아진다.

4. Propagation delay (나온 후)

   : 비트가 나와서 다음 라우터까지 도달하는 시간

   속도는 단순히 빛의 속도.(컨트롤 불가)

<br/> 

**delay를 줄이기 위해서?**

1. router를 좋은거 산다. --> processing delay 이슈 

2. 케이블 공사해서 band width를 늘려버려 ---> transmission delay 이슈

3. queueing dealy는 client에 의해 좌우되므로 조절하기가 매우 까다로움 --> Queueing delay 이슈

   - 정해진 queue사이제를 넘치면 뒤에 들어오는 데이터는 버린다. (packet 유실)

     : 인터넷에서의 유실은 대부분 queueing delay 과정에서 발생

<br/>

*<u>**근데 TCP는 이런 유실을 방지한다고 했는데 ?**</u>*

**재전송**밖에 답이 없다

<br/> 

누가 재전송할건지에 관한 선택할 수 있는 옵션 2가지

1. 유실이 일어난 라우터 바로 직전의 라우터가 재전송
2. 처음부터 재전송

<br/> 

인터넷에서는 **처음부터 재전송**하는 것으로 디자인됨.

중간에 라우터들은 "no - brain"이다 ==> **dumb core** (전달만해)

<br/>

*왜 ?*

중간 라우터들이 할일이 너무나 많아진다.. (너무 느려진다)

---

<br/>

# 2번째 수업

## 프로토콜

> 각 네트워크 계층마다 수 많은 프로토콜이 존재

| 네트워크 계층  | 대표적인 프로토콜 |
| :------------: | :---------------: |
|      App       |       HTTP        |
|   Transport    |     TCP , UDP     |
|    Network     |        IP         |
|      Link      | Wifi, LTE, 이더넷 |
| Physical Layer |                   |

- App - 프로세스 자체

*코딩할땐 중간에 라우터 통신들에 대해 전혀 신경쓸 필요가 없다.*

<br/>

### Client -- Server 구조

1. Server
   - 고정된 IP주소
   - Always on

---

*IPC (Interprocess comunication)  : Process 사이의 통신 (한 컴퓨터 내), OS가 통신을 위해 인터페이스를 만들어 놓음*

다른 컴퓨터와의 프로세스와 프로세스 사이의 통신

다른 컴퓨터상에 위차한다는 것 뿐이지 같은 개념

인터페이스 - **Socket** 같은 개념

---

<br/>

통신을 위해 사전에 연결시켜야 하는 무언가가 있어야 한다.

이를 위해서는 **상대편의 소켓 주소**를 알아야 한다.

이것의 주소를 인덱싱하는 것 : **IP 주소, Port**

- IP 주소 : 어떤 컴퓨터인지 지칭, 

- Port :  컴퓨터 안에. 프로세싱이 많은데 **어떤 프로세스**인지 지칭해주는 역할 ( 포트에 물려져 있는 소켓 )

<br/>예를들면, 우리가 네이버에 접속하기 위해 naver.com을 입력하는데 사실 ip주소:포트번호(123.23.23:**80**)를 입력해야 된다.

대부분의 웹사이트는 기본적으로 80번 포트를 사용한다. 왜 ?

1. 서버는 always-on, 주소가 변함이 없어야 함.
2. 네이버와 구글은 주소가 다름

==> <u>DNS가 도메인을 바꿔주는대신 80번까지는 공통으로 하자. (안그러면 너무 포트까지 다 만들어줘야하기 때문.)</u>

<br/>

각 계층에서는 하위 계층에서 제공하는 기능들을 사용함.

Transport Layer(현재의 TCP) 에서 제공하는 서비스는 **Data Integrity만 제공**

그래서 이것저것 깔아라 하는 것들이 App(웹브라우저) 에서 나오는 것이다.

그 밖의 서비스들

- timing
- throughput
- security

---

*timing VS throughput* 

- timing 
  - 내가보낸 패키지가 그 시간 범위 안에 도착해야 한다. (시간)

- Throughput
  - 단위 시간안에 처리할 수 있는 정보의 양 (양에 대한 얘기)

---



<br/> 

### HTTP

> 단순히 링크된 텍스트들을 전송하는 프로토콜

- **request, respose**
  - 이런 과정 이전에 TCP 커넥션을 해주어야한다. )APP의 하위 레이어인 transport)
- **stateless**
  - request가 들어오면 response해서 보내면 끝 (기억을 하지 않음)

<br/> 

HTTP가 TCP커넥션을 사용하는 방식에 따라 2가지로 나뉜다.

1. **non-persistant**

   : 주고받고 나서 TCP연결을 끊을 때

2. **persistant**

   : 주고받고 나서도 TCP연결을 끊지 않을 때 (현재 웹프라우저의 default값)





---



# 3번째 수업

## Multiplexing, Demultiplexing

connection - oriented demux

TCP socke은 4가지 특징

- source IP address
- source port number
- dest.IP address
- dest.port number



- demux:  리시버는 위 4가지 값을을 모두 사용해서 적절한 소켓에 세그먼트를 보내기 위한 행동
- 각각의 socket이 4개의 tuple로 구분된다.
- Web- servers는 각각 다른 소켓을 가지고 있다.



# 4번째 수업

## Application Layer2



---

*저번시간 요약*

UDP 기능 2가지

1. App에게 multiplexing 제공
2. Error checking

---

<br/> 

### TCP 

> reliable data transer
>
> reliabe : 하나도 유실없이 전달되는 것



<img src="readme.assets/image-20201028023856803.png" alt="image-20201028023856803" width ="40%"/>

- reliable 한 것처럼 보이지만 사실 환경은 아래쪽 (unreliable)과 같으며, 이로인해 reliable한 것처럼 느껴지게 된다.

- Unreliable 하면 ?
  - Packet loss
  - Packet error

<br/> 

#### rdt1.0

만약 완벽히 reliable하면 딱히 할 일은 없다.

#### rdt2.0 : packet error 발생 (no loss 전제)

1. 에러 detection

   checksum bits

2. 에러가 있다면 ? **feedback** 필수

   1. 잘 받았다 : ACKs (Acknowlegement)
   2. 아니다 : NAKs (Negative Acknowlegement)

3. Retransmission



<br/>

---

*이 방식이 정말 완전 (complete) 한가 ?*

<u>그렇지 않다.</u>

feedback이 잘못된 메세지일 경우때문

sender는 다시 받은 메세지가 ACK 인지 NAK인지 모른다. 즉, 새거인지 중복(duplicate) 된 것인지 모른다.

--> 이를 위해 구분하는 번호인 **Sequence Number**가 필요

<img src="readme.assets/image-20201028185440838.png" alt="image-20201028185440838" width ="40%"/>

---



<br/> 

#### rdt2.1

- Seq# 는 패킷의 header부분에 들어간다  (부가정보니까 )
- 이때, 시퀀스 넘버를 번호순으로 부여하게 되면 ?
  -  패킷 헤더부분의 시퀀스넘버를 담는 부분이 매우매우 커지게 된다. 부가정보를 담는 부분이니까 최소화 해야하는데...
  - 그럼 얼마나 최소화 가능한가 ?
    - **사실 0과 1이면 충분함**
      - 받았으면 0, 보내는건 1

<img src="readme.assets/image-20201028191607282.png" alt="image-20201028191607282" width ="50%"/>

- sender 
  - 시퀀스넘버를 부여하고
  - ACK/NAK 인지 체크
  - NAK이면 재전송
- revceiver
  - duplicate인지 반드시 체크
  - NAK 또는 ACK을 전송



<br/> 

#### rdt2.2

> NAK을 없애는 protocol

- Loss된 상황
- 오직 ACK만 사용한다.

<img src="readme.assets/image-20201028192829279.png" alt="image-20201028192829279" width ="20%" />



1. NAK대신 receiver는 seq#를 보낸다 (가장 마지막으로 성공적으로 받은 seq#를 )
2. 1번(PKT(1)) 보냈는데 성공했던 0번이 왔다. -> Nagative Feedback



<br/> 

#### rdt3.0

- Loss & Error 상황

- loss되면 receiver가 받지 못한다.

  : 반응이 없게 됨을 의미

- **Timer**로 해결

  - Sender 는 packet을 보낼 때마다 timer를 함께 실행

- Timer는 얼마나 맞춰야 하나 ?

  - 산술적으로는 어려움..
  - 매우 짧을 경우 
    - 장점 : recovery reaction이 짧다.
    - 단점 : 중복 패킷 발생
  - 매우 긴 경우
    - 단점 : loss반응이 느림

<br/> 

- **상황 1 : packet이 유실된 경우**

  <img src="readme.assets/image-20201028194109007.png" alt="image-20201028194109007" width="20%" />

  

<br/> 

- **상황 2 : ACK이 유실된 경우**

  <img src="readme.assets/image-20201028194639826.png" alt="image-20201028194639826" width ="25%" />

<br/> 

- **상황 3 : 성급한 timeout**

  <img src="readme.assets/image-20201028195210780.png" alt="image-20201028195210780" width ="25%" />

  

<br/>

#### 마무리

**packet** 

: **|Header | Data|**

**Header 부분**

1. Error detection
2. feedback
3. retransmission
4. Sequence Number

<br/> UDP와는 다르게 많은 정보를 담고 있다.

실제 TCP에서는 rdt와 다르게 한번에 보내고 한번에 받는 구조이다.





<br/> 

<br/>  

# 5번째 수업

## 전송계층

### rdt 3.0 : stop -and - wait operation

<img src="readme.assets/image-20201211230024830.png" alt="image-20201211230024830" width ="70%" />

- 실제로는 RTT 시간이 매우 길어질 수 있기 때문에 이러한 경우 매우 비효율적



<br/>

### pipelined protocols 

<img src="readme.assets/image-20201211230210942.png" alt="image-20201211230210942" width ="50%" />



- Pipelined protocol 방식 (한번에 보내는) 을 지향해야 한다.

<br/> 

#### pipeline을 동작하게 하는 방식 

1. go - Back - N
2. selective repeat

<br/> 

##### 1. Go-Back-N

- 한꺼번에 보낼것이다.

  - 얼마나 많이 ? 에 대한 기준 : window
  - Window size만큼은 피드백 받지않고 보낸다.

- Go- Back-N에서의 ACK 의미

  Ex ) ACK11

  :  11번까지 모두 잘 받았다. 12번을 기다리고 있다.

<img src="readme.assets/image-20201211234912125.png" alt="image-20201211234912125" width ="70%"/>

<br/>

- Window Size 만큼 버퍼에 저장하고 있어야 한다
- 왜 ?
  - Receiver가 받았는지 확인이 안된 데이터이기 때문에 버퍼에 가지고 있어야 한다.
  - window밖에 데이터들은 확인이 된 상태
- Window Size가 매우 커지면 비효율발생
  - **--> Selective Repeat** 으로 보완

- Receiver의 역할이 거의 없다

<br/> 

##### 2. Selective Repeat

- Selective Repeat에서의 ACK의 의미

  - ACK11 : 11번 잘 받았다. GBN과 다름

  <img src="readme.assets/image-20201212002153520.png" alt="image-20201212002153520" width ="70%" />

  - **전송** **순서**

    : 0 1 <u>2</u> 3 4 5 <u>2</u> 6 7 8 9 

<br/> 

- Selective Repeat Dilemma

  - Sequence Number

    - 최소한의 범위를 가진 시퀀스 넘버가 고민

    - 시퀀스넘버 범위를 늘린다.

<br/> <br/>



# 6번째 수업 

## TCP

1. **point to point**

   : one sender - one reciever (full duplex data)

2. **Reliable**, in-order byte stream

3. **pipelined**

   : window size를 설정한다.

4. **send & receiver buffers**

5. flow control

6. Congestion control

---

<br/> 

### flow control

: reveiver buffer에 데이터를 부었을 때, 공간이 없는 경우 receiver가 받을 수 있을 만큼만 (window size) 보내주는 것

- ACK을 수신하면, 다시 보낼 수 있는 세그먼트의 수가 그만큼 늘어난다.(변경) : sliding window flow control
- window 크기가 0이 되면 더이상 전송을 하지 못하고ACK을 받을 때까지 대기한다. (Deadlock)
- 이를 방지하기 위해 보내면서 설정된 **timer가 지나면 재전송**한다
  - 만약 상대방이 아직 버퍼공간이 없어서 그런거라면 더 악화됨.

<br/>

---

*계층구조*

<img src="../../../aksel26.github.io/assets/images/image-20201221231416592.png" alt="image-20201221231416592" width ="50%"/>

*TCP segement 구조*

<img src="../../../aksel26.github.io/assets/images/image-20201221231517623.png" alt="image-20201221231517623" width ="70%" />

- 이론상으로 한 컴퓨터내에서 동시에 동작할 수 있는 애플리케이션 네트워크 2^16 -1 개 (약 65500)

---

<br/>

<img src="../../../aksel26.github.io/assets/images/image-20210107171735803.png" alt="image-20210107171735803" width ="60%" />

- 이 그림에서 receive 쪽이 처리하는 시간이 있는데 보내는 속도가 빨라 쓸데없이 재전송을 하게 된 경우.

- 이를 방지하기 위해,

- 현재 남아있는 버퍼크기를 ACK 전송할 때 window size필드를 통해 알려준다.

  - ack은 세그먼트가 잘 도착했다는 것이고, window size는 현재의 버퍼 크기를 알려주는 것

    <img src="../../../aksel26.github.io/assets/images/image-20210107172433858.png" alt="image-20210107172433858" width ="60%"/>
    
  - 보내는 양 ? 보내는 속도 ? 무엇이 결정되나 ?
  
    - 속도의 단위는 M/bps , 즉 양이 커질수록 속도가 빨라진다는 의미
  
      <br/> 
  
- <img src="../../../aksel26.github.io/assets/images/image-20210107223254169.png" alt="image-20210107223254169" width ="50%"/>

- <img src="../../../aksel26.github.io/assets/images/image-20210107225743688.png" alt="image-20210107225743688" style="zoom:50%;" />

<br/>

#### 3-way handshake

<img src="../../../aksel26.github.io/assets/images/image-20210107224337580.png" alt="image-20210107224337580" width ="70%" />

- 위 과정 이후에 buffer가 생겨짐
- 왜 3 hand 인가 ?
  - 2way 상황을 가정하면 
    - client입장에서 보면 응답을 받을 수 있다.
    - server입장에서는 응답을 받을 수 없다.



<br/> 

#### Closing TCP Connection

<img src="../../../aksel26.github.io/assets/images/image-20210107224640110.png" alt="image-20210107224640110" width ="30%" />

<br/> 

---



### Congestion control

<img src="../../../aksel26.github.io/assets/images/image-20201221225853660.png" alt="image-20201221225853660" width ="35%" />

1. 속도를 높이려고함 (데이터를 많이 보낸다)
2. Network 막힌다
   - TCP에서 막힌다 ? TCP는 악화되면 더욱 나빠진다 (패킷이 떨어지면 재전송하기 때문)
3. NW가 막히지 않도록 하는게 TCP가 해야할 일 중 하나.
4. 양보해서 데이터 속도를 줄여야 한다.

---

1. **End-End Congestion Control**

   : TCP 세그먼트의 왕래를 통해 내부상황을 유추해야 한다.

2. **Network-assisted Congetsion Control**

   : 자신의 N/W 상태를 알려준다



<br/>



---



<br/> 

# 7번째-수업

## Congestion Control

- 수도관을 예로 들어보자
  - 수도관의 너비를 알 수 없는 상황에서 수도관에 물을 과하게 부어버리면 터진다.
  - 그러면 이 수도관의 너비를 알아야 하는데 알 수가 없다.
  - 이러한 상황에서 물을 한바가지씩 붓는다.
  - 문제가 없다면 또 한바가지..
  - 문제가 생간다면 그때만큼 부었던 바가지의 양에서 조절 가능하다.

<br/> 

### 3 main phases

1. **Slow start**
2. **Addictive increases** 
3. **Multiplicative increase**



혼잡을 일으킬 가능성은 가장 적다.

하지만 너무 천천히하면 이것도 문제다.

따라서 1,2,3,4, ... 에서 제곱한 수를 보낸다 . 1,2,4,8, ...

이때, 조심해야 할 지점을 **threshold**라고 부른다

<br/>

<img src="../../../aksel26.github.io/assets/images/image-20210111203358762.png" alt="image-20210111203358762" style="zoom:50%;" />

*왜 절반이나 떨어뜨릴까 ? N/W는 공유자원이므로 확 줄여야 혼란이 풀리기 때문.*



<br/> 

### MSS (Maximum segment Size)

: Segment는 최대 500byte를 가질 수 있다.

하나, 두개, 세개, ... 각각 하나의 MSS단위임.



TCP가 생성되면 두개의 버퍼 (send, receiver)가 생성되고, window size는 한번에 보낼 수 있는 양이다.

가장 처음에는 1MSS로 설정이 되어 있다. 

이러한 과정을 통해 window size가 수시로 조절된다.



<img src="../../../aksel26.github.io/assets/images/image-20210111203705774.png" alt="image-20210111203705774" width ="60%"/>

congWin 사이가 클수록 속도가 빠르다.

`rate = CongWin / RTT `  *RTT : Round Trip Time

<img src="../../../aksel26.github.io/assets/images/image-20210111203905693.png" alt="image-20210111203905693" width ="60%"/>

그림처럼 쭉 이어나가면 안되는건가 ? 

- 항상 N/W상황이 변하기 때문에 알 수가 없다. 즉, 계속해서 알아가는 과정이다.



`rate = CongWin / RTT `

둘 중 변동성이 더 큰 것은 `congWin` 이다. 즉, congWin(N/W환경)에 의해 속도가 좌우된다. 



<br/> 

### TCP Tahoe VS TCP Reno



<img src="../../../aksel26.github.io/assets/images/image-20210111204648090.png" alt="image-20210111204648090" width ="60%"/>

#### TCP Tahoe

- TCP에서 패킷 유실을 감지하는 조건을 생각해보면,
- TCP에서 패킷 유실을 감지하는 조건은 2가지가 있다.
  1. timeout이 발생한 경우
  2. 3 duplicate ACK
- 두가지의 상황에서 N/W상황이 항상 같을까 ? ㄴㄴ
  1. 3 duplicate ACK 은 N/W상황은 원할하지만 특정 패킷만 받지 못한 경우임
  2. timeout은 N/W상황자체가 불안해 총체적 난국.
- 따라서 둘의 상황을 각각 나눠서 생각해야 한다.
- 이를 고려한 TCP가 **TCP Reno**

<br/> 

#### TCP Reno

<img src="../../../aksel26.github.io/assets/images/image-20210111205048574.png" alt="image-20210111205048574" width ="60%" />

- 3 duplicate ACK 상황이면 **TCP Reno**
- timeout이라면 **TCP Taho**를 사용하게 된다.



<br/> 

### TCP fairness

실제로 수많은 TCP 연결을 사용할 것임.

그럼 그 각각의 독립적인 TCP사용에 자원을 공평하게 사용할 수 있는가 ???? ㅇㅇ

<img src="../../../aksel26.github.io/assets/images/image-20210111205418957.png" alt="image-20210111205418957" width ="60%"/>



- 결국 교차점으로 수렴하게 된다. (우연의 일치?일수도?ㅎㅎ)







<br/>



---



<br/>

# 8번째 수업



## Network Layer

### Router

Router가 하는일

1. forwarding

   패킷을 목적지 방향으로 전달한다. (헤더에 적혀있는 목적지로)

   - 과정

     1. 목적지 파악
     2. forwarding table을 보고목적지를 판단한다. 

   - <img src="readme.assets/image-20210121234817472.png" alt="image-20210121234817472" style="zoom:50%;" />

     - Value값과 output을 1:1 매칭시키면 수만개의 데이터가 생기면 너무 많아 검색이 불가능해진다.
     - 이를 개선해 **범위**로 지정한다.
     - 

   - *forwarding table은 누가만드나 ?*

     : Routing algorithm에 의해 만들어진다.

2. Routing



<br/> 

### Longest prefix matching

<img src="readme.assets/image-20210121235315571.png" alt="image-20210121235315571" style="zoom:50%;" />

두번째 예제에서

addr range 두번째와 세번째를 비교해보면

두번째 range가 더 길게 (보다 정확하게) 매칭이되므로 선택이된다.



<br/> 

### IP datagram format

<img src="readme.assets/image-20210121235727844.png" alt="image-20210121235727844" style="zoom:50%;" />

- 패킷의 헤더필드를 모두 합하면 20byte
- IP header 20 + TCP header 20 = 40 byte의 오버헤드가 덧붙여져 전송된다.
- 실제로 단지 40byte가 대부분 -> TCP ACK (ACK만 담긴 패킷들임)



<br/> 

### IP address

#### IPv4

32bit 주소체계,

2^32개의 IP주소를 가진다.

8비트씩 끊어서 255가 최대

<img src="readme.assets/image-20210122000233419.png" alt="image-20210122000233419" style="zoom:50%;" />

**IP주소는 호스트에 들어있는 N/W interface(NAC)를 지칭한다.**

즉 IP주소를 여러개 동시에 가질 수 있다. --> 대표적인 예가 **Router**

<img src="readme.assets/image-20210122000753997.png" alt="image-20210122000753997" style="zoom:50%;" />



#### IP주소는 어떻게 배정되나 ?

1. 막무가내로

   : 문제점 -> forwarding table이 너무너무 커진다.

2. 계층화

   **N/W id**(=prefix=Subnet ID) 와 **Host ID**로 나눔

   <img src="readme.assets/image-20210122000950313.png" alt="image-20210122000950313" style="zoom:50%;" />

#### Subnet Mask

<img src="readme.assets/image-20210122001117747.png" alt="image-20210122001117747" style="zoom:60%;" />

addr와 Mask는 항상 같이다닌다.

같은 prefix끼리 묶인다. forwarding table에서 단순화됨.

<img src="readme.assets/image-20210122001318415.png" alt="image-20210122001318415" style="zoom:50%;" />

Add하기도 쉬워진다. (prefix만 맞춰주면 되므로)

<img src="readme.assets/image-20210122001329632.png" alt="image-20210122001329632" style="zoom:50%;" />





<br/> 

#### Classful Addressing

<img src="readme.assets/image-20210122002813690.png" alt="image-20210122002813690" style="zoom:50%;" />

선정하는데 그렇다고 모두 사용는것도 아님.낭비하게 된다.

Class C로가면 기관은 많아지지만 하나받으면 255개의 host만 처리가능하다. (부족함)

Class간 유연함이 매우 떨어져 Class개념이 사라지고

Classless Inter-Domain Routing(CIDR)이 생겨남



<br/> 

#### Classless Inter-Domain Routing(CIDR)

2개의 32비트 숫자를 사용한다.

**Network number = IP address + Mask**

![image-20210122003216289](readme.assets/image-20210122003216289.png)



##### 계층적인 주소 배분(Router가 하는 일)

<img src="readme.assets/image-20210122004017646.png" alt="image-20210122004017646" style="zoom:50%;" />

Longest prefix matching방식으로 찾는다.



<br/> 

### Subnets

같은 prefix를 가진 device들의 집합

Router를 거치지 않고도 접근 가능한 host들의 집합

Router도 IP주소를 갖는다.

<img src="readme.assets/image-20210122004212011.png" alt="image-20210122004212011" style="zoom:50%;" />

예제)

<img src="readme.assets/image-20210122004245236.png" alt="image-20210122004245236" style="zoom:50%;" />

6개의 서브넷. prefix가 같은 것이 subnet이니까





<br/> 

IP address는 32bit의 주소공간이며 interface를 지칭한다.

2^32개의 host지원가능 ( 약 40 억)

초창기에는 매우 많은 수였으나,

상업화 후에는 부족하게 되어

IPv6로 재디자인하게 되었다.

IPv6는 128bit로 늘림으로 2^128개의 host가 지원 가능하다-> 매우 많음 ( 해변 모래알만큼의 양 .. )



하지만 현재는 iPv4를 사용한다.

왜?

이미 IPv4의 용량은 초과했지만 **재활용**으로 버티고 있다. 

-> **NAT** 라는 기술 (trick 같은 느낌이랄까)



#### NAT

local주소는 글로벌(외부)로 나갈 수 없기 때문에 NAT가 IP 주소를 바꿔준다.

<img src="readme.assets/image-20210122012417177.png" alt="image-20210122012417177" style="zoom:50%;" />



재사용하긴 하지만 **문제점**이 있다.

IP packet (Header | Data) 에서 

Header부분의 source IP -> 헤더정보 & Data부분까지 바꿔버린다. (**계층 violation**)

<br/>

Port 넘버의 기능 : host내부에서 process를 찾아가는 용도

IP주소 : Host를 찾아가는 용도

**Host를 찾는데에 포트번호를 써버림**. 서버를 사용하게 되지 못한게 된다.







---



# 9번째 수업

## DHCP (Dynamic Host Configuration Protocol)

IPv4를 유지하기 위해 NAT의 단점을 안고가지만 고쳐야할 문제.

IPv4의 단점

1. 주소공간 부족 -> 임시방편으로 고쳐갔지만 부족, 
   - IPv6로 갈 것이냐, 아예 새로운 IP프로토콜로 바꿀 것이냐에 대한 문제
   - IPv6의 반대입장 : 약 30년 전에 개발되어 매우 오래됀 디자인이다.
2. Security (애초에 지향점이 없었다고 한다.)



섣불리 새로운 체계를 도입하기 어렵다.

왜냐면, 미래예측이 불가하고, 기존것을 변경하기가 매우 까다롭다. (전세계 라우터가 모두 바뀌어야 함)

동적(Dynamic)으로 변경 가능한 프로토콜을 지향하게 될 수밖에 없다.





<img src="readme.assets/image-20210126180939745.png" alt="image-20210126180939745" style="zoom:50%;" />





*Dynamic ?* 

어딜가든(위치마다 다 다른 설정일 것임) 동적으로 Host설정을 해준다는 의미.

고정IP사용할 경우 필요 없다.

고정IP를 사용하는 인원이 10,000명이라면 10,000개 이상의 IP주소가 필요한 반면,

DHCP는 10,000개까지 필요햐지 않다. (대신, 회수를 꼭 해주어야 한다.)







그렇다면 User의 N/W 정보를 누가 만드는 것이냐 ?

**DHCP**



<img src="readme.assets/image-20210126181656571.png" alt="image-20210126181656571" style="zoom:50%;" />





<img src="readme.assets/image-20210126182437948.png" alt="image-20210126182437948" style="zoom:50%;" />

- **Broadcast** : Subnet에 있는 애들은 이 메세지를 모두 받아라



<br/>

<img src="readme.assets/image-20210126182918812.png" alt="image-20210126182918812" style="zoom:50%;" />

하나의 예를 들면,

<img src="readme.assets/image-20210126183213000.png" alt="image-20210126183213000" style="zoom:50%;" />

통신사로부터 돈을 주고 IP를 부여 받아 다른 가족들이 공유기를 통해 모두 다른 IP로 인터넷을 사용한다.

그리고, 외부로 패킷을 보낼때는 NAT를 통해  하나의 IP로 보내진다.

그렇다면 외부로 나가는 IP주소는 전세계적으로 유일한가 ? 알 수 없다.

왜냐하면 그 이후에도 NAT가 있을수도 있으니까..





<br/>  

## IP Fragmentation

![image-20210126183649707](readme.assets/image-20210126183649707.png)



Link별로 유닛을 보낼 수 있는 Max size가 정해져 있다. (=**MTU**)

이더넷, 와이파이, 3G, 각각 MTU가 다르다.



<br/> 





**Fragmentation 예제**



<img src="readme.assets/image-20210126185648932.png" alt="image-20210126185648932" style="zoom:50%;" />

**offset** : 앞전에 frag의 길이 ( length에서 헤더(20)을 뺀 값)를 합하고 8로 나눈 값

