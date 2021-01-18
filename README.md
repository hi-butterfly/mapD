# mapD
mapD **decrypts substitution encrypted** packet data and **provides embedded seller and buyer information**.  
mapD does **not** include **packet capture**.

## 0. Warning
### This code is written for study purposes. I am not responsible for the problems caused by abuse.<br>Notifies you that this may be a violation of operational policy.
 
> **https://member.nexon.com/policy/stipulation.aspx**<br>
> **https://maplestory.nexon.com/Common/Footer/OperationPolicy**
><details>
> <summary><b>Details</b></summary>
>  <div markdown="1">
> 
> ```
> <제4장 계약당사자의 의무>
> 제20조(회원의 의무)
> ② 회원은 회사가 제공하는 서비스를 이용함에 있어 다음 각 호의 행위 또는 다음 각호에 해당 하는 내용을 목적으로 하거나 의도하는 행위를 하여서는 안됩니
> 다.
>   1. 회원 가입 신청이나 회원정보 변경 시 실명이 아닌 정보 또는 다른 사람의 정보를 사용하거나, 허위 사실 기재
>   2. 다른 회원의 ID 및 비밀 번호를 도용, 부정하게 사용
>   3. 회원의 ID 또는 회원 ID에 축적된 게임 아이템, 게임 머니 등을 타인과 매매
>   4. 회사의 서비스 또는 서비스를 이용하여 얻은 정보를 회사의 사전 승낙 없이 복제, 유통, 조장하거나 상업적으로 이용
>   5. 회사의 서비스를 이용하여 자기 또는 타인에게 재산상의 이익을 발생
>   6. 타인의 명예를 훼손하거나 손해를 가하는 행위
>   7. 명의자의 동의나 승낙 없이 결제 수단을 무단 도용하여 요금 결제
>   8. 회사의 지적재산권, 제3자의 지적재산권, 초상권 등 기타 권리를 침해
>   9. 회사의 승인을 받지 않고 다른 회원의 개인정보를 수집, 저장, 유포, 게시
>   10. 프로그램의 버그를 악용
>   11. 회사 서비스 운영을 고의로 방해하거나 서비스의 안정적 운영을 방해할 수 있는 정보 및 수신자의 명시적인 수신거부 의사에 반하여 광고성 정보를 전송
>   12. 타인으로 가장하는 행위 및 타인과의 관계를 허위로 명시
>   13. 음란, 저속한 정보를 교류, 게재하거나 음란사이트를 연결(링크), 승인되지 않은 광고 및 홍보물 게재
>   14. 재물을 걸고 도박하는 등 사행 행위를 유도하거나 참여하는 경우
>   15. 수치심이나 혐오감 또는 공포심을 일으키는 말이나 음향, 글이나 화상 또는 영상을 상대방에게 전송, 도달, 유포
>   16. 서비스에 게시된 정보를 변경하는 행위
>   17. 관련 법령에 의하여 그 전송 또는 게시가 금지되는 정보(컴퓨터프로그램) 또는 컴퓨터소프트웨어, 하드웨어, 전기통신 장비의 정상적인 가동을 방해, 
>   파괴할 목적으로 고안된 소프트웨어 바이러스, 기타 다른 컴퓨터 코드, 파일, 프로그램을 포함하고 있는 자료를 전송, 게시, 유포, 사용
>   18. 회사의 직원이나 운영자를 가장하거나 사칭하여 또는 타인의 명의를 도용하여 글을 게시하거나 메일을 발송하는 행위
>   19. 기타 공공질서 및 미풍양속을 위반하거나 불법적, 부당한 행위 및 관계법령에 위배되는 행위
> ③ 회원은 관계 법령 및 본 약관의 규정을 비롯하여 회사가 통지하는 사항 등을 준수하여야 하며, 기타 회사의 업무에 방해되는 행위를 하여서는 안됩니다.
> 
> <제5장 서비스이용제한 및 계약해지 등>
> 제22조(서비스이용제한 및 계약해지)
> ③ 회사는 회원이 다음 각 호에 해당하는 경우, 제11조 제2항의 방법 또는 기타 유효한 수단을 통해 해당 회원에게 통지하고 각 게임별 운영정책에 의거하여 
> 해당 사유가 해소될 때까지 회원의 서비스 이용을 중지 또는 제한하는 등 합당한 조치를 취할 수 있습니다. 단, 각 게임별 운영정책에 규정되지 않는 사항에 
> 대해서는 사전 경고 후 본 약관에 의거하여 합당한 조치를 취할 수 있습니다.
>   1. 넥슨 회원 가입 시 등록한 개인정보의 일부가 허위이거나 타인의 개인정보를 도용한 경우
>   2. 사이트 및 게임 내에서 타인에게 불쾌감을 주는 행위를 할 경우
>   3. 원활한 게임 진행 및 운영을 방해하는 경우
>   4. 회사가 허락하지 않은 프로그램의 사용 및 배포, 시스템의 버그이용, 해킹 또는 기타 시스템을 훼손시키려는 행위를 할 경우
>   5. ID 및 비밀번호의 유출로 인하여 제3자에 의한 부정 사용 등이 발생한 경우
>   6. 본 약관 및 회사의 타 약관에 의해 ID 사용이 중지 또는 제한된 경우
>   7. 본 약관 제20조 제2항의 제1, 4, 7, 10, 16, 17호를 제외한 각 호 사항을 위반한 경우
> ④ 회사는 회원이 다음 각 호에 해당하는 경우, 회사는 제 11조 제2항의 방법 또는 기타 유효한 수단을 통해 해당 회원에게 통지하고 회원자격을 박탈할 수 
> 있습니다.
>   1. 넥슨 회원 가입 시 등록한 개인정보의 전체가 허위인 경우
>   2. 타인의 명의나 개인정보를 도용하여 서비스를 이용하는 경우
>   3. 타인의 결제정보 등을 도용하거나 부정한 행위로 거래를 하는 경우
>   4. 넥슨 캐시를 매매하거나 양도 또는 이를 유도하는 행위를 하는 경우
>   5. 회사가 허락하지 않은 프로그램의 사용, 시스템의 버그이용, 해킹 또는 기타 시스템을 훼손시킨 경우
>   6. 본 약관 제20조 제2항의 제1, 4, 7, 10, 16, 17호에 기재된 행위를 한 경우
>   7. 본 조 제3항에 해당하는 행위를 계속하여 회사로부터 2회 이상 서비스 이용 중지 또는 제한을 받은 경우
> ```
> ```
> 2. 고객의 권리와 의무
> [2.2] 고객의 의무
> [2.2.1] 고객은 다른 고객에게 피해를 주거나 질서유지에 부정적인 영향을 주어서는 안되며, 이를 위해 GM의 요청에 최대한 협조하여야 합니다. 만약 운영정
> 책을 위반하거나 사회적 통념에 맞지 않는 행동을 할 경우에는 규정에 따라 서비스 이용이 제한될 수 있습니다. 이용 제한 기간 동안 아래와 같은 불이익이 있
> 더라도 GM의 도움을 받을 수 없습니다. 
> ① 이벤트/컨텐츠 참여 등 모든 게임 플레이 불가 
> ② 택배, 경매장, 1:1거래 등 모든 거래 불가, 거래 불가로 인한 아이템 삭제
> ③ 기간제 아이템(게임, 캐시 등) 사용 불가, 기간 만료로 인한 삭제
> ④ 유효기간이 존재하는 아이템(게임, 캐시 등) 사용 불가로 인한 삭제
>
> 4. 게임, 모바일 콘텐츠, 게임홈페이지 이용제한
> [4.1] 게임, 모바일 콘텐츠, 게임홈페이지 이용 시 주의사항
> [4.1.1] GM은 원활한 게임운영을 방해하거나 게임환경을 파괴하는 모든 행위를, 고객과 GM이 공유하는 일반적인 질서와 규범에 따라 신속하게 대응하여 다른
> 고객을 보호하기 위해 적절히 조치할 수 있습니다.
> [4.2] 비매너 행위 또는 게임 내 질서를 어지럽히는 행위
> [4.3] 비정상적인 게임이용
> ```
>  </div>
></details>
  
## 1. Introduction
The auction packets are **encrypted** as follows:
```
BC 07 B0 08 F9 05 29 < - Planetext
23 23 23 23 23 23 23 < - Basevalue
DF 2A D3 2B 1C 28 4C < - Cypertext
```
This code **finds the basevalue** through the rule in the packet data and uses it to perform **decoding**.  
It also uses rules to **specify sellers, buyers, and item codes** in the decrypted packet data.

**If** the packet has been **split**, find and enter the basevalue **directly**.  
I **don't know** much about **cryptography**. **But** the rules I found work with **no exception** to the auction packets.

## 2. How to pick a packet
* **Use wiresharks to capture packets. (filter : *tcp.srcport == 12000*)**

## 3. Usage
```
                                   `7MM"""Yb.
                                     MM    `Yb.
`7MMpMMMb.pMMMb.   ,6"Yb. `7MMpdMAo. MM     `Mb
  MM    MM    MM  8)   MM   MM   `Wb MM      MM
  MM    MM    MM   ,pm9MM   MM    M8 MM     ,MP
  MM    MM    MM  8M   MM   MM   ,AP MM    ,dP'
.JMML  JMML  JMML.`Moo9^Yo. MMbmmd'.JMMmmmdP'
                            MM
                          .JMML.
   Written by: @p4nggi

Please enter HEX STREAM : ebc418cdcd1d451717171717171717171717211717173cef9032171717178f17a11d80aa7d181c1717171c171717df088e85caf3dcc0cee5474d17e0c61717171717171717171717171717e0c6171717171717e0c617171717171757d77b884403ed182c48421cd6c0cafc17171717171717191716161616d5a4205a171717175717125d7b02ed18e71e171717171717191717171817171727bbf6877b02ed1819ef7440171717971cd25dfd2e19161616161818171717171717171717201197321717171735420d1cea648b181c1717171c171717c8e4d8ced5dd17474b4e48936a1717171717171717161616161616161617c40be11817171717c40be118171717972d81742f04ed1817171717178b7c84605b934a4748474d4c16161616c8621b6c17171717976d174a6603ed18e71e17171717171718171717171717171757f714524e661818211327171717971cd25dfd2e191616161618531a1f171b171b171b171b171b171b171b2b1717171617181717171717171717171717171717171717171717c9181b17d01b173317171717171717171757f714524e661817171717171717171717171717171717171717171717161617971cd25dfd2e191757f714524e661817971cd25dfd2e19e7668f32171717174e70da1b9d348518171717171c171717cfc5dacaccfcdddbd7e5cfde1717171717171717171616161616161616d786a73d17171717d786a73d1717171707543aaedc03ed18171717171717171717171717171717191716161616d070188c1717171707d466594a02ed18e71e1717171717171d1717171b1717171757f714524e661818fd0f3017189886121f1717171717971cd25dfd2e1916161616181717191727172b171717161718171717171717171717171717171717171717171717171717171717171757f714524e661817171717171717171717171717171717171717171717161617971cd25dfd2e191757f714524e661817971cd25dfd2e190e07973217171717922cd61cb52f5118171717171c171717cfc5cf07171717171717171717171717171717171716161616161616168873ba3a1b1717178873ba3a1b17171777c261e7f704ed1817171717171717171717171717171719171616161693ee1c5b1717171777428e926503ed18e71e17171717171719171717181717171757f714524e66181931dd3d171717971cd25dfd2e1916161616181817171717171717171742ca9332171717173afc5418788b9b18171717171c1717176980837882828c8478178518ca1717171717171717161616161616161617e263171817171717e263171817171727d89c295104ed181717171717861850208718fa2f8718b1461616161623311987171717172758c9d4be02ed18e71e1717171717171d1717171b1717171757f714524e6618188c22271718cb0cd71f1717171717971cd25dfd2e1916161616181717191727172b171717166f18171717171717171717171717171717171717171717171717171717171757f714524e661817171717171717171717171717171717171717171717161617971cd25dfd2e191757f714524e661817971cd25dfd2e1914de503117171717d3a759188d0f32181c1717171c171717c8f2d7f1caeec7cac7c7caee17179bcf241d1717171616161616161616179bcf241d171717179bcf241d171717170f1b93f8d4ed1859c1cc1cdd0edd15171717171717171717161616167e811a7217171717174fb2682fd4ed18e71e1717171717171d1717171b1717174700bb9738d4ed1818602227171807aa9b1a1717171717971cd25dfd2e1916161616171717191727172b171717164f181717171717171717171717171717171717

D4 AD 01 B6 B6 06 2E 00 00 00 00 00 00 00 00 00
00 00 0A 00 00 00 25 D8 79 1B 00 00 00 00 78 00
8A 06 69 93 66 01 05 00 00 00 05 00 00 00 C8 F1
77 6E B3 DC C5 A9 B7 CE 30 36 00 C9 AF 00 00 00
00 00 00 00 00 00 00 00 00 00 00 C9 AF 00 00 00
00 00 00 C9 AF 00 00 00 00 00 00 40 C0 64 71 2D
EC D6 01 15 31 2B 05 BF A9 B3 E5 00 00 00 00 00
00 00 02 00 FF FF FF FF BE 8D 09 43 00 00 00 00
40 00 FB 46 64 EB D6 01 D0 07 00 00 00 00 00 00
02 00 00 00 01 00 00 00 10 A4 DF 70 64 EB D6 01
02 D8 5D 29 00 00 00 80 05 BB 46 E6 17 02 FF FF
FF FF 01 01 00 00 00 00 00 00 00 00 00 09 FA 80
1B 00 00 00 00 1E 2B F6 05 D3 4D 74 01 05 00 00
00 05 00 00 00 B1 CD C1 B7 BE C6 00 30 34 37 31
7C 53 00 00 00 00 00 00 00 00 FF FF FF FF FF FF
FF FF 00 AD F4 CA 01 00 00 00 00 AD F4 CA 01 00
00 00 80 16 6A 5D 18 ED D6 01 00 00 00 00 00 74
65 6D 49 44 7C 33 30 31 30 36 35 FF FF FF FF B1
4B 04 55 00 00 00 00 80 56 00 33 4F EC D6 01 D0
07 00 00 00 00 00 00 01 00 00 00 00 00 00 00 00
40 E0 FD 3B 37 4F 01 01 0A FC 10 00 00 00 80 05
BB 46 E6 17 02 FF FF FF FF 01 3C 03 08 00 04 00
04 00 04 00 04 00 04 00 04 00 04 14 00 00 00 FF
00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 B2 01 04 00 B9 04 00 1C 00 00
00 00 00 00 00 00 00 40 E0 FD 3B 37 4F 01 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 FF FF 00 80 05 BB 46 E6 17 02 00 40
E0 FD 3B 37 4F 01 00 80 05 BB 46 E6 17 02 D0 4F
78 1B 00 00 00 00 37 59 C3 04 86 1D 6E 01 00 00
00 00 05 00 00 00 B8 AE C3 B3 B5 E5 C6 C4 C0 CE
B8 C7 00 00 00 00 00 00 00 00 00 FF FF FF FF FF
FF FF FF C0 6F 90 26 00 00 00 00 C0 6F 90 26 00
00 00 00 F0 3D 23 97 C5 EC D6 01 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 02 00 FF FF FF FF
B9 59 01 75 00 00 00 00 F0 BD 4F 42 33 EB D6 01
D0 07 00 00 00 00 00 00 06 00 00 00 04 00 00 00
00 40 E0 FD 3B 37 4F 01 01 E6 F8 19 00 01 81 6F
FB 08 00 00 00 00 00 80 05 BB 46 E6 17 02 FF FF
FF FF 01 00 00 02 00 10 00 14 00 00 00 FF 00 01
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 40 E0 FD
3B 37 4F 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 FF FF 00 80 05 BB
46 E6 17 02 00 40 E0 FD 3B 37 4F 01 00 80 05 BB
46 E6 17 02 F7 F0 80 1B 00 00 00 00 7B 15 BF 05
9E 18 3A 01 00 00 00 00 05 00 00 00 B8 AE B8 F0
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 FF FF FF FF FF FF FF FF 71 5C A3 23 04 00 00
00 71 5C A3 23 04 00 00 00 60 AB 4A D0 E0 ED D6
01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
02 00 FF FF FF FF 7C D7 05 44 00 00 00 00 60 2B
77 7B 4E EC D6 01 D0 07 00 00 00 00 00 00 02 00
00 00 01 00 00 00 00 40 E0 FD 3B 37 4F 01 02 1A
C6 26 00 00 00 80 05 BB 46 E6 17 02 FF FF FF FF
01 01 00 00 00 00 00 00 00 00 00 2B B3 7C 1B 00
00 00 00 23 E5 3D 01 61 74 84 01 00 00 00 00 05
00 00 00 52 69 6C 61 6B 6B 75 6D 61 00 6E 01 B3
00 00 00 00 00 00 00 00 FF FF FF FF FF FF FF FF
00 CB 4C 00 01 00 00 00 00 CB 4C 00 01 00 00 00
10 C1 85 12 3A ED D6 01 00 00 00 00 00 6F 01 39
09 70 01 E3 18 70 01 9A 2F FF FF FF FF 0C 1A 02
70 00 00 00 00 10 41 B2 BD A7 EB D6 01 D0 07 00
00 00 00 00 00 06 00 00 00 04 00 00 00 00 40 E0
FD 3B 37 4F 01 01 75 0B 10 00 01 B4 F5 C0 08 00
00 00 00 00 80 05 BB 46 E6 17 02 FF FF FF FF 01
00 00 02 00 10 00 14 00 00 00 FF 58 01 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 40 E0 FD 3B 37 4F
01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 FF FF 00 80 05 BB 46 E6 17
02 00 40 E0 FD 3B 37 4F 01 00 80 05 BB 46 E6 17
02 FD C7 39 1A 00 00 00 00 BC 90 42 01 76 F8 1B
01 05 00 00 00 05 00 00 00 B1 DB C0 DA B3 D7 B0
B3 B0 B0 B3 D7 00 00 84 B8 0D 06 00 00 00 FF FF
FF FF FF FF FF FF 00 84 B8 0D 06 00 00 00 00 84
B8 0D 06 00 00 00 00 F8 04 7C E1 BD D6 01 42 AA
B5 05 C6 F7 C6 FE 00 00 00 00 00 00 00 00 00 FF
FF FF FF 67 6A 03 5B 00 00 00 00 00 38 9B 51 18
BD D6 01 D0 07 00 00 00 00 00 00 06 00 00 00 04
00 00 00 30 E9 A4 80 21 BD D6 01 01 49 0B 10 00
01 F0 93 84 03 00 00 00 00 00 80 05 BB 46 E6 17
02 FF FF FF FF 00 00 00 02 00 10 00 14 00 00 00
FF 38 01 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00

The seller : C8 F1 77 6E B3 DC C5 A9 B7 CE 30 36
The buyer : BF A9 B3 E5
Item Code(LE) : D8 5D 29

The seller : B1 CD C1 B7 BE C6
The buyer : no buyer
Item Code(LE) : 0A FC 10

The seller : B8 AE C3 B3 B5 E5 C6 C4 C0 CE B8 C7
The buyer : no buyer
Item Code(LE) : E6 F8 19

The seller : B8 AE B8 F0
The buyer : no buyer
Item Code(LE) : 1A C6 26

The seller : 52 69 6C 61 6B 6B 75 6D 61
The buyer : no buyer
Item Code(LE) : 75 0B 10

The seller : B1 DB C0 DA B3 D7 B0 B3 B0 B0 B3 D7
The buyer : C6 F7 C6 FE
Item Code(LE) : 49 0B 10

Please any key to continue . . .
```

## 4. Analysis
```
In KMS, the seller and buyer information in the packet data is encoded in EUC-KR.
```
### Use this encoding & decoding site. https://dencode.com/