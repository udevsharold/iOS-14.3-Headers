/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBSInvalidatable;
@class NSMutableSet, NSSet;

@interface RBSStateCaptureSetSegment : NSObject {

	id<RBSInvalidatable> _invalidatable;
	NSMutableSet* _items;

}

@property (nonatomic,readonly) NSSet * items; 
-(void)removeItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSSet *)items;
-(void)addItem:(id)arg1 withLength:(unsigned long long)arg2 ;
-(id)_stateCapture;
-(unsigned long long)count;
-(BOOL)containsItem:(id)arg1 ;
@end

