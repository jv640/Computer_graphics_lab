#include<iostream>
using namespace  std;


struct points {
    int x;
    int y;
};

int det(points pt1,points pt2,points pt3);
int main()
{
    cout<<"Hello! please Input the number of points you want to enter ;"<<endl;
    int n;
    cin>>n;
    points pt[n];
    for(int i=0;i<n;i++)
    {
        cin>>pt[i].x>>pt[i].y;
    }

    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
                if(det(pt[i],pt[j],pt[k]))
                    count++;
        }
    }

    cout<<"The Total number of valid Triangles are "<<count;


}

int det(points pt1,points pt2,points pt3)
{
    float area = 0.5*(pt1.x*(pt2.y-pt3.y)+pt2.x*(pt3.y-pt1.y)+pt3.x*(pt1.y-pt2.y));
    return area;
}
