class node{
    public:
    node*lc,*rc;
    int data;
    node(int data)
    {
        this->data=data;
        lc=rc=NULL;
    }
};
class queue{
    public:
    node**arr;
    int front,rear,size;
    queue(int size)
    {

        front=rear=-1;
        this->size=size;
        arr=new node*[size];
    }
void enq(node*val)
{
    if((rear+1)%size == front)
     return;   
    else {
        rear=(rear+1)%size;
        arr[rear]=val;
    }
}
node* deq()
{
    node*x=NULL;
   
    if(front==rear)
    {
       return x;
    }
    else {
        front=(front+1)%(size);
        x=arr[front];
    }
    return x;

}
bool isempty()
{
    return front==rear;
}
};
