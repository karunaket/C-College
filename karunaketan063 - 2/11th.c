 #include<stdio.h>
int main()
{
	int maths, physics, chemistry, bio;
	float engg_cutoff, med_cutoff;
	
	printf("Enter the physics mark:");
	scanf("%d",&physics);
	
	printf("Enter the maths mark:");
	scanf("%d",&maths);
	
	printf("Enter the chemistry mark:");
	scanf("%d",&chemistry);
	
	printf("Enter the biology mark:");
	scanf("%d",&bio);
	
	engg_cutoff = (maths + chemistry + physics)/3;
	med_cutoff = (bio + chemistry + physics)/3;
	
	printf("\n \n Engineering cut-off is %.2f", engg_cutoff);
	printf("\n Medical dutoff is %.2f", med_cutoff);
	
	return 0;
}
