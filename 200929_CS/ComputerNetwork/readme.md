# Netword edge

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

## TCP (Transmission Control <u>Protocol</u>)

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

## Protocol

서로간의 규약, 준비동작

<br/> 

## Network Core

: 라우터들끼리 얽힌 망

<br/>

*<u>**메시지를 어떻게 전달하냐 ?**</u>*

1. **Circuit switching**
   - 출발지 - 목적지까지 가는길을 미리 예약해놓고 특정 사용자만을 위해 사용하도록 만들어 놓은 것.
   - 예전 유선 전화망
2. **Packet switching**
   - 인터넷 방식에서는 이 방법을 사용
   - user가 보내는 데이터를 패킷단위로 받아 그때그때 올바른 방향으로 보내주는 방식

<br/> 

<u>**어떠한 장단점이 있는가 ?**</u> 

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

     : 인터넷에서의 유실은 대부분 queueing delay