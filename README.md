# VJF125 기어포지션센서 개조
## 1. Topic
VJF125엔진의 변속기 부분을 사용한 DE-20(Team DOS, 2019.9-2021.2) 프로젝트에서 기어포지션센서를 개조하여 N(중립), 3단만 확인가능한 기존의 센서를 N(중립)단 포함 모든 단수를 확인 가능하도록 함
![image](https://user-images.githubusercontent.com/79623246/215319870-a62739fe-3fee-472a-a3d4-b8b6e6b32373.png)
> DE-20 
## 2. Making
### 1) 작동방식
![image](https://user-images.githubusercontent.com/79623246/215315139-a93ebd0b-535b-4688-9e20-0f8c5477d39d.png)
- VJF125 구조상 변속할 시 변속기의 기어를 움직여주는 Camshaft가 회전하게 되고 이 움직임에 따라 센서의 축이 회전

![image](https://user-images.githubusercontent.com/79623246/216294677-52191d54-9126-491a-97a1-a798953d92e1.png)
- 축이 회전하면서 센서 내부의 판 스프링이 함께 움직임
- 판 스프링의 중심부는 GND와 항상 접촉, 스프링 끝부분은 회전에 따라 납땜부(도체)와 접촉하게 됨
- 이 위치에 따라 기어 단수 판별
### 2) 제작
#### (1) 센서 중심부 절단 후 내용물 제거
![image](https://user-images.githubusercontent.com/79623246/215318505-500986b5-20af-42bf-b155-01ee5b14d1e3.png)
![image](https://user-images.githubusercontent.com/79623246/216294857-d275daa9-4f5d-4961-8e96-86e1e05eb956.png)
> 중간에 서로 분리할 수 있게 생겼지만 당시 잘 되지 않아 그라인더로 절단하였습니다.

#### (2) GearPositionSenser.stl 파일을 이용해 3D 프린트 출력
![image](https://user-images.githubusercontent.com/79623246/215318286-46d202b9-f3cd-4956-b925-525cd8ab8c44.png)
#### (3) 츨력물 구멍에 전선을 넣고 끝부분에 남땜을 한 후 평평하도록 사포를 이용하여 간다.
![image](https://user-images.githubusercontent.com/79623246/216295015-628ac649-b0fc-46c5-b1b7-043e17789f1d.png)
> 재료를 PLA로 출력하다보니 납땜시 출력물이 녹는 경우가 있었습니다. 시간적 여유가 된다면 원통형 금속을 가공하거나 자석을 이용해 먼저 전선과 남땜을 한 후 3D 프린트 출력물과 조립하는 방법도 있을거 같습니다.
#### (4) 센서와 3D 프린트 출력물을 접착
> 실제로 큰 효과가 있는거 같진 않지만 중간 오일링을 넣을 수 있는 홈을 만들었습니다.
#### (5) Arduino Nano 와 연결

## 3. Result
### 1) Sensor
![image](https://user-images.githubusercontent.com/79623246/215318865-c01301f4-55c2-43d6-af86-00c829ae999d.png)
> 절단 후 남아 있는 센서의 길이가 짧아 오일링이 보이는데 추가로 에폭시를 이용해 마감하면 좋을거 같습니다.
### 2) 7-Segment Display(FND)
7-Segment Display 를 이용하여 드라이버에게 현재 단수 표시
![image](https://user-images.githubusercontent.com/79623246/215318966-5d1f3baa-6ce8-4324-a893-69860fcf73d3.png)
> 당시 완성본에 대한 사진 및 영상이 남아있지 않아 제작 중 배선 접촉 불량으로 촬영한 사진으로 대체합니다.
