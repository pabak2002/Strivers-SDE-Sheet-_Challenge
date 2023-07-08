Node *flatten(Node *root)
{
   // Your code here
   Node *in=root;
   Node *out=root;
   
   while(out)
   {
       while(in->bottom)
       {
           in=in->bottom;
       }
       out=out->next;
       in->bottom=out;
       in=out;
   }
       vector<int> v;
       Node *p=root;
       
       while(p)
       {
           v.push_back(p->data);
           p=p->bottom;
       }
       sort(v.begin(), v.end());
       Node* ptr = root;
    
        int i=0;
        
        while(ptr)
        {
            ptr->data = v[i++];
            
            ptr = ptr->bottom;
            
            // i++;
        }
        return root;
}
