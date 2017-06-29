package stale;

public  class FindPasswordof {
	public int Findpassword(int input1,int input2,int input3,int input4,int input5)
	{
		int[] a=new int[5];
		int[] s=new int[5];
		int[] uns=new int[5];
		int password=0;
		a[0]=input1;
		a[1]=input2;
		a[2]=input3;
		a[3]=input4;
		a[4]=input5;
		int i,len1=0,len2=0;
	// password=number of unstable elemts -number of stable elemets
	/*
		int stable_cout=0,unstable_cout=0;
		for(i=0;i<5;i++)
		{
			if(stable(a[i])==1)
					{
						stable_cout++;
					}
			else
			{
				unstable_cout++;
			}
		}
		password=stable_cout-unstable_cout;
		return password;
	*/
		// for sum of stable elemets
		/*for(i=0;i<5;i++)
		{
			if(stable(a[i])==1)
					{
						password+=a[i];
					}
		}
		
		return password;
		
		
		*/
		
		// for find max and minn
		
		
		
		
		for(i=0;i<5;i++)
		{
			if(stable(a[i])==1)
					{
						s[len1++]=a[i];
					}
			else
			{
				uns[len2++]=a[i];
			}
		}
	
		// s is stable elemts array find min and max in this.....and compute given formula
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	//same for all type;
	public int stable(int a)
	{
		int[] array=new int[10];
		int[] ar=new int[10];
		int i,j,k=0;
		for(i=0;i<10;i++)
		{
			array[a%10]++;
			a=a/10;
		}
		for(i=0;i<10;i++)
		{
			if(array[i]!=0)
			{
				ar[k++]=array[i];
			}
		}
		for(i=0;i<k;i++)
		{
			for(j=i+1;j<k;j++)
			{
				if(ar[i]!=ar[j])
				{
					return 0;
				}
			}
		}
		return 1;
		
	}
}
