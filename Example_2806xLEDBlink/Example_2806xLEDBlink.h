/* =========================================================================
 ***
 *** The MIT License (MIT)
 ***
 *** Copyright (c) 2016 uGrid
 ***
 *** Permission is hereby granted, free of charge, to any person obtaining a copy
 *** of this software and associated documentation files (the "Software"), to deal
 *** in the Software without restriction, including without limitation the rights
 *** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *** copies of the Software, and to permit persons to whom the Software is
 *** furnished to do so, subject to the following conditions:
 ***
 *** The above copyright notice and this permission notice shall be included in all
 *** copies or substantial portions of the Software.
 ***
 *** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *** SOFTWARE.
 ***
  ========================================================================= */

#define PIX1  		(float)3.1415926535897932384626433832795
#define PIX2 		(float)3.1415926535897932384626433832795*2

#define	TS_PLL	2.5025025025025e-005



//-----------------------------------------------------------------------------/
// Estrutura para geração de sinais trigonométricos
//-----------------------------------------------------------------------------/

struct TRIGONOMETRICO
{
	float wt;
	float amp;
	float senoA;
	float senoB;
	float senoC;
	float coseA;
	float coseB;
	float coseC;
};



//-----------------------------------------------------------------------------/
// Estrutura de depuração gráfica
//-----------------------------------------------------------------------------/
#define PT	666
#define dec_max 1

struct GRAFICOS
{
	float graf1[PT];
	float graf2[PT];
	float graf3[PT];
	float *g1;
	float *g2;
	float *g3;
	int g;
	int dec;
};


