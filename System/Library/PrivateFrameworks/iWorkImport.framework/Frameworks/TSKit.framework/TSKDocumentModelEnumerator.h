/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol TSKModel;
@class NSMutableArray;

@interface TSKDocumentModelEnumerator : NSEnumerator {

	BOOL _stop;
	BOOL _filterBeforeAddingChildren;
	id<TSKModel> _root;
	NSMutableArray* _enumeratorStack;
	/*^block*/id _filter;

}

@property (nonatomic,retain) id<TSKModel> root;                             //@synthesize root=_root - In the implementation block
@property (nonatomic,retain) NSMutableArray * enumeratorStack;              //@synthesize enumeratorStack=_enumeratorStack - In the implementation block
@property (nonatomic,copy) id filter;                                       //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL filterBeforeAddingChildren;               //@synthesize filterBeforeAddingChildren=_filterBeforeAddingChildren - In the implementation block
-(id<TSKModel>)root;
-(id)nextObject;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(void)setRoot:(id<TSKModel>)arg1 ;
-(void)dealloc;
-(id)initWithEnumerator:(id)arg1 filter:(/*^block*/id)arg2 ;
-(void)enumerateUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithRootModelObject:(id)arg1 filter:(/*^block*/id)arg2 ;
-(void)setFilterBeforeAddingChildren:(BOOL)arg1 ;
-(void)setEnumeratorStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)enumeratorStack;
-(BOOL)filterBeforeAddingChildren;
-(void)enumerateReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
@end
