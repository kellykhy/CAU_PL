# CAU_PL final project
22405: 프로그래밍언어론 (Principles of Programming Language) Fall 2022 

과제: 디지털꾸러미만들기 (Digital Object Design)

1. 데이터(data):  kaggle.com에 공개된 데이터 세트를 하나 선택하여 사용한다. 단 클래스를 만들 때 아래에 설명한 프로그래밍 요소가 함께 고려하여 구현해야 하므로 적절한 데이터 세트를 선택하고 데이터 요소의 일부를 나누거나 선택해서 사용할 수 있다. 
- 과제에 사용한 데이터: [Indian Flight Schedule](https://www.kaggle.com/datasets/nikhilkhetan/indian-flight-schedules)
2. 방법(method): 선택한 데이터를 처리하여 유도된 정보를 얻거나, 데이터를 가공하는 함수 등을 클래스 내부에 구현한다. 디지털 꾸러미를 설계하고 구현할 때 반드시 다음의 프로그래밍 요소가 고려되어 설계되고 코드로 구현되어야 한다.
    1. 꾸러미화(encapsulation): 데이터와 방법이 하나의 구조체나 클래스에 함께 구현되어야한다.  
    2. 추상화(abstraction): 데이터의 특정 요소 중에서 필수 요소들이 추상화되어 데이터 구조체를 구성하여야한다.
    3. 이어받기(inheritance): 추상화된 구조체를 이어 받아 필요한 요소나 속성을 덧붙여 구조체를 확대할 수 있어야한다.
    4. 다형성(poly  morphism): 데이터를 구성하는 요소, 또는 파생하는 데이터나 정보가 필요에 따라 여러가지 타입으로 생성될 수 있어야한다.
