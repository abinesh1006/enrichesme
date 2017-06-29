void insertFirst(int i,char* name){
    struct Student* s=(struct Student*)malloc(sizeof(struct Student));
    char *t=(char*)malloc(101);
    strcpy(t,name);
    s->id=i;
    s->name=t;
   // head=s;
    if(tail==NULL){
        tail=s;
    }else {
        head->prev=s;
    }
    s->next=head;
    head=s;
}
void append(int id,char *name){
    struct Student* s=(struct Student*)malloc(sizeof(struct Student));
    struct Student *last=tail;
    char *t=(char*)malloc(101);
    strcpy(t,name);
    s->id=id;
    s->name=t;
    if(tail==NULL || head==NULL){
        s->prev=NULL;
        head=s;
        return;
    }while(last->next!=NULL)last=last->next;
        tail->next=s;
        s->prev=tail;
    tail=s;
    //return;
}
