/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/CRObject.h>

@class CROrderedSet, CRTreeNode, CRDocument;

@interface CRTree : CRObject

@property (nonatomic,readonly) CROrderedSet * nodes; 
@property (nonatomic,readonly) CRTreeNode * root; 
@property (nonatomic,readonly) CRDocument * document; 
@property (nonatomic,readonly) long long count; 
+(id)CRProperties;
-(CRTreeNode *)root;
-(CRDocument *)document;
-(id)init;
-(void)mergeWith:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(CROrderedSet *)nodes;
-(void)removeNode:(id)arg1 ;
-(long long)count;
-(void)computeChildren;
-(void)moveNode:(id)arg1 toParent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertNode:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)insertNodeWithValue:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)insertIndexForNode:(id)arg1 childIndex:(unsigned long long)arg2 ;
-(void)setNodeTree:(id)arg1 insertAtIndex:(unsigned long long)arg2 ;
-(void)invalidateChildren;
-(void)setDocument:(CRDocument *)arg1 ;
@end
