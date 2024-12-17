#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[2][2][2][2][2][2][2][2][2][2][2][2][2][2],z=0,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y;

	clrscr();
	for(a=0;a<2;a++)
	{
		for(b=0;b<2;b++)
		{
			for(c=0;c<2;c++)
			{
				for(d=0;d<2;d++)
				{
					for(e=0;e<2;e++)
					{
						for(f=0;f<2;f++)
						{
							for(g=0;g<2;g++)
							{
								for(h=0;h<2;h++)
								{
									for(i=0;i<2;i++)
									{
										for(j=0;j<2;j++)
										{
											for(k=0;k<2;k++)
											{
												for(l=0;l<2;l++)
												{
													for(m=0;m<2;m++)
													{
														for(n=0;n<2;n++)
														{
														       /*	for(o=0;o<2;o++)
															{
																for(p=0;p<2;p++)
																{
																       /*	for(q=0;q<2;q++)
																	{
																		for(r=0;r<2;r++)
																		{
																			for(s=0;s<2;s++)
																			{
																				for(t=0;t<2;t++)
																				{
																					for(u=0;u<2;u++)
																					{
																						for(v=0;v<2;v++)
																						{
																							for(w=0;w<2;w++)
																							{
																								for(x=0;x<2;x++)
																								{
																									for(y=0;y<2;y++)
																									{ */
																										arr[a][b][c][d][e][f][g][h][i][j][k][l][m][n]=z;
																										printf("\nARRAY=[%d] and BINARY no.=[%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d]",arr[a][b][c][d][e][f][g][h][i][j][k][l][m][n],a,b,c,d,e,f,g,h,i,j,k,l,m,n/*,o,p,q,r,s,t,u,v,w,x,y*/);
																										z++;
																								     /*	}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}*/
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	getch();
}