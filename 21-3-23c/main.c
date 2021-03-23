//#include<stdio.h>
//#include<string.h>
//char cheng[3][3]={{1,1,0},{2,1,0},{0,2,2}};
//int main()
//{
//    char arr[21];
//    scanf("%s",arr);
//    int len=strlen(arr);
//    int i,j,k;
//    int ji[len][len][3];
//    memset(ji,0,sizeof(ji));
//    for(i=0;i<len;i++)
//        if(arr[i]-'a'==0)
//            ji[i][i][0]++;
//        else if(arr[i]-'a'==1)
//            ji[i][i][1]++;
//        else
//            ji[i][i][2]++;
//    for(i=1;i<len;i++)
//        for(j=0;j<len-i;j++)
//            for(k=j;k<i+j;k++)
//            {
//                ji[j][i+j][0]+=ji[j][k][0]*ji[k+1][i+j][2]+ji[j][k][1]*ji[k+1][i+j][2]+ji[j][k][2]*ji[k+1][i+j][0];
//                ji[j][i+j][1]+=ji[j][k][0]*ji[k+1][i+j][0]+ji[j][k][0]*ji[k+1][i+j][1]+ji[j][k][1]*ji[k+1][i+j][1];
//                ji[j][i+j][2]+=ji[j][k][1]*ji[k+1][i+j][0]+ji[j][k][2]*ji[k+1][i+j][1]+ji[j][k][2]*ji[k+1][i+j][2];
//
//            }
//    printf("%d",ji[0][len-1][0]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i,n,count=1;
//    scanf("%d",&n);
//    for(i=0;i<n-1;i++)
//        count=(count+1)*2;
//    printf("%d",count);
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    int count=0;
//    char tmp;
//    while((tmp=getchar())!='.')
//    {
//        if(isdigit(tmp))
//            count++;
//    }
//    printf("%d",count);
//    return 0;
//}
