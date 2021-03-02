/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFTreeObserver;
@class NSArray, NSMutableArray, NSIndexPath;

@interface WFTreeNode : NSObject {

	id _representedObject;
	WFTreeNode* _parentNode;
	id<WFTreeObserver> _observer;
	NSArray* _flattenedDescendents;
	NSMutableArray* _mutableChildNodes;

}

@property (nonatomic,readonly) NSMutableArray * mutableChildNodes;              //@synthesize mutableChildNodes=_mutableChildNodes - In the implementation block
@property (nonatomic,retain) id representedObject;                              //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath; 
@property (getter=isLeaf,nonatomic,readonly) BOOL leaf; 
@property (nonatomic,copy) NSArray * childNodes; 
@property (nonatomic,__weak,readonly) WFTreeNode * parentNode;                  //@synthesize parentNode=_parentNode - In the implementation block
@property (assign,nonatomic,__weak) id<WFTreeObserver> observer;                //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSArray * flattenedDescendents;                  //@synthesize flattenedDescendents=_flattenedDescendents - In the implementation block
-(NSIndexPath *)indexPath;
-(id)init;
-(void)addNode:(id)arg1 ;
-(id<WFTreeObserver>)observer;
-(void)removeNodeAtIndex:(unsigned long long)arg1 ;
-(void)setRepresentedObject:(id)arg1 ;
-(BOOL)isLeaf;
-(WFTreeNode *)parentNode;
-(void)setObserver:(id<WFTreeObserver>)arg1 ;
-(NSArray *)childNodes;
-(void)setParentNode:(WFTreeNode *)arg1 ;
-(void)removeNode:(id)arg1 ;
-(id)representedObject;
-(id)debugDescription;
-(void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setChildNodes:(NSArray *)arg1 ;
-(id)initWithRepresentedObject:(id)arg1 ;
-(NSMutableArray *)mutableChildNodes;
-(id)descendentNodeAtRelativeIndexPath:(id)arg1 ;
-(NSArray *)flattenedDescendents;
-(void)moveNodeFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)childDescendentsDidChange:(id)arg1 oldValue:(id)arg2 changeSource:(id)arg3 ;
-(void)setFlattenedDescendents:(id)arg1 changeSource:(id)arg2 ;
-(id)debugDescriptionAtDepth:(unsigned long long)arg1 ;
-(id)paddedStringAtDepth:(unsigned long long)arg1 ;
@end
