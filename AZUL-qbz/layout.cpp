/*3456789012345678901234567890123456789012345678901234567890
|  Korongok:               |  Asztal:  |  Zs�k:           | 0
|  1.   2.   3.   4.   5.  |  A: 2     |  A  B  C  D  E   | 1
|  AB   CC   ED   AC   CE  |  B: 3     |  20 20 20 20 20  | 2
|  CD   DD   BA   BB   AD  |  C: 1     |                  | 3
|                          |  D: 0     |  Dobott:         | 4
|  6.   7.   8.   9.       |  E: 2     |                  | 5
|  AA   EA   CD   BE       |           |  A  B  C  D  E   | 6
|  BB   CB   AE   AA       |  +Kezd�   |  0  0  0  0  0   | 7

| ---------------- | ---------------- | **************** | ---------------- | 0
| 1. JATEKOS:      | 2. JATEKOS:      | 3. JATEKOS:      | 4. JATEKOS:      | 1
| Kati             | Zoli             | Pisti            | Kinga            | 2
| (0 pont)         | (0 pont)         | (0 pont)         | (0 pont)         | 3
| ---------+------ | ---------+------ | ---------+------ | ---------+------ | 4
|          | 12345 |          | 12345 |          | 12345 |          | 12345 | 5
| ---------+------ | ---------+------ | ---------+------ | ---------+------ | 6
| 1.     . | ..... | 1.     . | ..... | 1.     . | ..... | 1.     . | ..... | 7
| 2.    AA | CB... | 2.    .. | ..... | 2.    .. | ..... | 2.    .. | ..... | 8
| 3.   DDD | .D... | 3.   ... | ..... | 3.   ... | ..... | 3.   ... | ..... | 9
| 4.  DD.. | ..... | 4.  .... | ..... | 4.  .... | ..... | 4.  .... | ..... | 10
| 5. ..... | ..C.. | 5. ..... | ..... | 5. ..... | ..... | 5. ..... | ..... | 11
| ---------+------ | ---------+------ | ---------+------ | ---------+------ | 12
| Padlo: .......   | Padlo: .......   | Padlo: .......   | Padlo: .......   | 13
| ---------------- | ---------------- | **************** | ---------------- | 14
         1         2
123456789012345678901234
| ------+-----------   | --------+----------- | ******************** | --------+----------- | 1
| 1 - Kati             | 2. JATEKOS:          | 3. JATEKOS:          | 4. JATEKOS:          | 1
| Kati               | Zoli                 | Pisti                | Kinga                | 2
| 0 pont             | 0 pont               | 0 pont               | 0 pont               | 3
|          1 2 3 4 5 |            1 2 3 4 5 |            1 2 3 4 5 |            1 2 3 4 5 | 4
|     . 1  . . . . . |      .  1  . . . . . |      .  1  . . . . . |      .  1  . . . . . | 5
|    .. 2  C B . . . |     ..  2  . . . . . |     ..  2  . . . . . |     ..  2  . . . . . | 6
|   DDD 3  . D . . . |    ...  3  . . . . . |    ...  3  . . . . . |    ...  3  . . . . . | 7
|  .... 4  . . . . . |   ....  4  . . . . . |   ....  4  . . . . . |   ....  4  . . . . . | 8
| ..... 5  . . C . . |  .....  5  . . . . . |  .....  5  . . . . . |  .....  5  . . . . . | 9
|-------+------------| --------+----------- | --------+----------- | --------+----------- | 10
| .  .  .  .  .  .  .|  .  .  .  .  .  .  . | .  .  .  .  .  .  .  | .  .  .  .  .  .  .  | 11
|-1 -1 -2 -2 -2 -3 -3| -1 -1 -2 -2 -2 -3 -3 | -1 -1 -2 -2 -2 -3 -3 | -1 -1 -2 -2 -2 -3 -3 | 12

Most v�laszthatsz a korongokr�l vagy az asztal k�zep�r�l!
Pisti (3.) k�vetkezik
*/




/*
|  Korongok:                |  Asztal:   |  Zs�k:
|  1.   2.   3.   4.   5.   |  A: 0       |  A  B  C  D  E
|  CA   DC   DE   AC   CB   |  B: 0       |  13 16 12 10 13
|  ED   CD   BC   AE   BB   |  C: 0       |
|                           |  D: 0       |  Dobott:
|  6.   7.   8.   9.        |  E: 0       |  A  B  C  D  E
|  CE   AE   EA   DD                 |  0 0 0 0 0
|  AD   DD   CA   DE        +Kezd�   |

| **************** | ---------------- | ---------------- | ---------------- |
| 1. J�T�KOS:      | 2. J�T�KOS:      | 3. J�T�KOS:      | 4. J�T�KOS:      |
| 1                | 2                | 3                | 4                |
| (0 pont)         | (0 pont)         | (0 pont)         | (0 pont)         |
| ---------+------ | ---------+------ | ---------+------ | ---------+------ |
|          | 12345 |          | 12345 |          | 12345 |          | 12345 |
| ---------+------ | ---------+------ | ---------+------ | ---------+------ |
| 1.     . | ..... | 1.     . | ..... | 1.     . | ..... | 1.     . | ..... |
| 2.    .. | ..... | 2.    .. | ..... | 2.    .. | ..... | 2.    .. | ..... |
| 3.   ... | ..... | 3.   ... | ..... | 3.   ... | ..... | 3.   ... | ..... |
| 4.  .... | ..... | 4.  .... | ..... | 4.  .... | ..... | 4.  .... | ..... |
| 5. ..... | ..... | 5. ..... | ..... | 5. ..... | ..... | 5. ..... | ..... |
| ---------+------ | ---------+------ | ---------+------ | ---------+------ |
| Padlo: .......   | Padlo: .......   | Padlo: .......   | Padlo: .......   |
| **************** | ---------------- | ---------------- | ---------------- |
1, v�lassz csemp�ket egy korongr�l vagy az asztalr�l! (Pl. 1.korong A csempe: 1A | Az asztalt a 0 jel�li: 0D)

*/


/*
Korongok:		Asztal:		Zs�k:		Dobott:
1. ADBC			A: 1		A: 17		A: 0
2. EDBC			B: 0		B: 09		B: 0
3. ABED			C: 2		C: 14		C: 0
4. DDEE			D: 4		D: 18		D: 0
5. ABBA			E: 1		E: 12		E: 0
				+Kezd�




|---------------------------------------------------------------|
                  17         10       5   3                    20 = 74
                        23^
|--------A0--------|----B1---|



              AC
              */
/*

  A   ZZZZZ U   U L        b               QQQ  BBBB  ZZZZZ
 A A      Z U   U L        b     y   y    Q   Q B   B     Z
A   A    Z  U   U L        b bb  y   y    Q   Q B   B    Z
A   A   Z   U   U L        bb  b y   y    Q   Q BBBB    Z
AAAAA  Z    U   U L        b   b  yyyy    Q   Q B   B  Z
A   A Z     U   U L        bbbb      y     QQQ  B   B Z
A   A ZZZZZ  UUU  LLLLL           yyy     Q     BBBB  ZZZZZ

-----------------------------------------------------------

K�sz�tette: Borsodi Zolt�n
            (SZE, m�rn�kinformatika, levelez�)

Neptun k�d: b7pk8z

E-mail:     borsodi.zoltan@gmail.com


K�sz�net az �tletek�rt �s a tesztel�s�rt
Eszenyi �kosnak, Tenk Norbertnek,
Pergel D�nielnek �s Varga L�szl�nak!
*/