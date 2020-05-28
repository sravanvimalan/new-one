/*
input and output :

test case 1:
sravan@sravan-DL-IPMSB-H61:~/Desktop$ gcc Find2Coils.c
sravan@sravan-DL-IPMSB-H61:~/Desktop$ ./a.out
enter the value for n:
1
Matrix:
1	2	3	4	
5	6	7	8	
9	10	11	12	
13	14	15	16	
Coil 1: 10 6 2 3 4 8 12 16
Coil 2: 7 11 15 14 13 9 5 1

test case2:
sravan@sravan-DL-IPMSB-H61:~/Desktop$ ./a.out
enter the value for n:
2
Matrix:
1	2	3	4	5	6	7	8	
9	10	11	12	13	14	15	16	
17	18	19	20	21	22	23	24	
25	26	27	28	29	30	31	32	
33	34	35	36	37	38	39	40	
41	42	43	44	45	46	47	48	
49	50	51	52	53	54	55	56	
57	58	59	60	61	62	63	64	
Coil 1: 36 28 20 21 22 30 38 46 54 53 52 51 50 42 34 26 18 10 2 3 4 5 6 7 8 16 24 32 40 48 56 64
Coil 2: 29 37 45 44 43 35 27 19 11 12 13 14 15 23 31 39 47 55 63 62 61 60 59 58 57 49 41 33 25 17 9 1

testcase 3:
sravan@sravan-DL-IPMSB-H61:~/Desktop$ ./a.out
enter the value for n:
3
Matrix:
1	2	3	4	5	6	7	8	9	10	11	12	
13	14	15	16	17	18	19	20	21	22	23	24	
25	26	27	28	29	30	31	32	33	34	35	36	
37	38	39	40	41	42	43	44	45	46	47	48	
49	50	51	52	53	54	55	56	57	58	59	60	
61	62	63	64	65	66	67	68	69	70	71	72	
73	74	75	76	77	78	79	80	81	82	83	84	
85	86	87	88	89	90	91	92	93	94	95	96	
97	98	99	100	101	102	103	104	105	106	107	108	
109	110	111	112	113	114	115	116	117	118	119	120	
121	122	123	124	125	126	127	128	129	130	131	132	
133	134	135	136	137	138	139	140	141	142	143	144	
Coil 1: 78 66 54 55 56 68 80 92 104 103 102 101 100 88 76 64 52 40 28 29 30 31 32 33 34 46 58 70 82 94 106 118 130 129 128 127 126 125 124 123 122 110 98 86 74 62 50 38 26 14 2 3 4 5 6 7 8 9 10 11 12 24 36 48 60 72 84 96 108 120 132 144
Coil 2: 67 79 91 90 89 77 65 53 41 42 43 44 45 57 69 81 93 105 117 116 115 114 113 112 111 99 87 75 63 51 39 27 15 16 17 18 19 20 21 22 23 35 47 59 71 83 95 107 119 131 143 142 141 140 139 138 137 136 135 134 133 121 109 97 85 73 61 49 37 25 13 1

program:

*/
# include<stdio.h>
# include<stdlib.h>
void recursivefunctionforcoil1(int *ptr[4],int i , int j,int n,int lim)
{
	int k=1;
	if((i+j) == (2 * (n-1)))
		return;
	//up
	while(k<=lim)
	{
		if(i >= 0)
		{
			printf(" %d",ptr[i][j]);
			i--;
		}
		k++;
	}
	k=1;
	//right
	while(k<=lim)
	{
		if(j < n)
		{
			printf(" %d",ptr[i][j]);
			j++;
		}
		k++;
	}
	lim+=2;
	k=1;
	//down
	while(k<=lim)
	{
		if(i < n)
		{
			printf(" %d",ptr[i][j]);
			i++;

		}
		if((i+j) == (2 * (n-1)))
		{
			printf(" %d",ptr[i][j]);
			return;
		}

		k++;

	}
	k=1;
	//left
	while(k<=lim)
	{
		if(j >= 0)
		{
			printf(" %d",ptr[i][j]);
			j--;
		}
		k++;
	}
	lim+=2;
	recursivefunctionforcoil1(ptr,i,j,n,lim);

}
void recursivefunctionforcoil2(int *ptr[4],int i , int j,int n,int lim)
{
	int k=1;
	if((i+j) == 0)
		return;
	//down
	while(k<=lim)
	{
		
		if(i < n)
		{
			printf(" %d",ptr[i][j]);
			i++;

		}
		k++;
	}
	k=1;
	//left
	while(k<=lim)
	{
		if(j >= 0)
		{

			printf(" %d",ptr[i][j]);
			j--;
		}
		k++;
	}
	lim+=2;
	k=1;
	//up
	while(k<=lim)
	{
		if(i >= 0)
		{
			printf(" %d",ptr[i][j]);
			i--;
		}
		if((i+j) == 0)
		{
			printf(" %d",ptr[i][j]);
			return;
		}
		k++;
	}
	k=1;
	//right
	while(k<=lim)
	{
		if(j < n)
		{
			printf(" %d",ptr[i][j]);
			j++;
		}
		k++;
	}
	lim+=2;
	recursivefunctionforcoil2(ptr,i,j,n,lim);
}
void main()
{
	int n,ele=0,coil1_i_loc,coil1_j_loc,coil2_i_loc,coil2_j_loc,temp_i,temp_j;
	printf("enter the value for n:\n");
	scanf("%d",&n);
	int *ptr[4*n];
	for(int i=0;i<4*n;i++)
	   ptr[i] = (int *)malloc((4*n) * sizeof(int));
	for(int i=0;i<4*n;i++)
	{
		for(int j=0;j<4*n;j++)
			ptr[i][j] = ++ele;
	}
	printf("Matrix:\n");
	for(int i=0;i<4*n;i++)
	{
		for(int j=0;j<4*n;j++)
			printf("%d\t",ptr[i][j]);
		printf("\n");
	}
	temp_i = (n*4) / 2;
	temp_j = temp_i;
	while((temp_i+temp_j) != ((n*4)-1))
	{
		temp_j--;
	}
	printf("Coil 1:");
	recursivefunctionforcoil1(ptr,temp_i,temp_j,n*4,2);
	printf("\nCoil 2:");
	recursivefunctionforcoil2(ptr,temp_j,temp_i,n*4,2);
	printf("\n");
}
