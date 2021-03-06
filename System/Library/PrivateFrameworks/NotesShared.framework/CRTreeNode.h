/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/CRObject.h>

@class CRTree, NSArray, CRWeakReference;

@interface CRTreeNode : CRObject {

	CRTree* _tree;
	NSArray* _children;

}

@property (assign,nonatomic,__weak) CRTree * tree;                     //@synthesize tree=_tree - In the implementation block
@property (assign,nonatomic,__weak) CRTreeNode * parent; 
@property (nonatomic,retain) CRWeakReference * parentRef; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) NSArray * children;                       //@synthesize children=_children - In the implementation block
+(id)CRProperties;
-(CRTree *)tree;
-(CRTreeNode *)parent;
-(NSArray *)children;
-(void)removeNode:(id)arg1 ;
-(BOOL)isLoopNode;
-(id)parentReference;
-(id)initWithValue:(id)arg1 parent:(id)arg2 tree:(id)arg3 ;
-(id)insertNodeWithValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)isInLoop;
-(void)setTree:(CRTree *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setParent:(CRTreeNode *)arg1 ;
@end

