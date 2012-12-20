#ifndef __SPLAY_H__
#define __SPLAY_H__

typedef int KEY_TYPE;

typedef struct splay{
	KEY_TYPE key;
	struct splay* lchild;
	struct splay* rchild;
}splay;

splay* New_Node(KEY_TYPE key);
inline splay* RR_Rotate(splay* k2);
inline splay* LL_Rotate(splay* k2);
splay* Splay(int key, splay* root);
splay* Insert(KEY_TYPE key, splay* root);
splay* Delete(KEY_TYPE key, splay* root);
splay* Search(KEY_TYPE key, splay* root);
void InOrder(splay* root);

#endif
