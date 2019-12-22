## Light-Painting with ABB-IRB 120

##### Description

Tool with neo-pixel lights mounted on an ABB-120 robot.

![](Images/004.png)

##### Components

* ABB-IRB-120
* [Neo-pixel LED Strip](https://www.amazon.es/dp/B00H3IX1NK?ref_=pe_3310721_248816181_302_E_DDE_dt_1)
* [Arduino Mega](https://www.amazon.es/ELEGOO-Microcontrolador-ATmega2560-ATmega16U2-Compatible/dp/B06Y3ZHPWC/ref=sr_1_4?__mk_es_ES=%C3%85M%C3%85%C5%BD%C3%95%C3%91&keywords=arduino+Mega&qid=1575988330&sr=8-4)
* [Optocoupler](https://www.amazon.es/ILS-Aislante-Optocoupler-Canales-Aislado/dp/B07PB4498K/ref=sr_1_4?__mk_es_ES=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=3CH6YQE1XY0OM&keywords=optocoupler&qid=1576954202&sprefix=optocou%2Caps%2C159&sr=8-4)
* [Breadboard](https://www.amazon.es/ELEGOO-Breadboard-Prototipo-Soldaduras-Distribuci%C3%B3n/dp/B01MZ1BUL1/ref=sr_1_3?__mk_es_ES=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=2TI2EPS8BV50U&keywords=breadboard&qid=1576954372&sprefix=breadboard%2Caps%2C227&sr=8-3)
* [Jumper Wires](https://www.amazon.es/Jumper-Dupont-Kable-Puentes-Masculino-Masculino/dp/B073X7P6N2/ref=sr_1_5?__mk_es_ES=%C3%85M%C3%85%C5%BD%C3%95%C3%91&keywords=jumper+wires&qid=1576954537&sr=8-5)
* Camera set to an exposure time of several seconds
* A dark room

![](Images/002.png)

##### Software

The robotic movement is controlled by a toolpath developed in grasshopper.
With the use of an Optocoupler, the signal is converted from 24V to 5V for the Arduino. This signal is then translated to the color of the neo-pixel strip.

![](Images/002a.png)

##### Grasshopper

![](Images/011.png)


##### Arduino

![](Images/003.png)

##### Toolpaths used

Barcelona Skyline
![](Images/005.png)
![](Images/006.png)

Squares
![](Images/007.png)
![](Images/008.png)

Face
![](Images/008a.png)
![](Images/008b.png)

Wine Glass
![](Images/009.png)
![](Images/010.png)

##### Robotic Animation

![](Images/Robot.gif)
![](Images/Animation.gif)
![](Images/004a.png)


**Credits**

Based on IAAC publishing guidelines:
"Light-Painting with ABB-IRB 120" is a project of IaaC, Institute for Advanced Architecture of Catalonia. developed at Master in Robotics and Advanced Construction in 2019-2020 by:

Students: Elena Jaramazovic, Irem Yagmur Cebeci, Gjeorgjia Lilo

Faculty: Angel Muñoz

Faculty Assistant: Soroush Garivani
