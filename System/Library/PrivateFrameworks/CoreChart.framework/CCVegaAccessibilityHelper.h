/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreChart/CoreChart-Structs.h>
@class NSMutableArray;

@interface CCVegaAccessibilityHelper : NSObject {

	stack<CCVegaAccessibilityHelperState, std::__1::deque<CCVegaAccessibilityHelperState, std::__1::allocator<CCVegaAccessibilityHelperState> > >* _stateStack;
	SCD_Struct_CC17 _currentState;
	NSMutableArray* _elementCache;
	NSMutableArray* _rootAccessibilityElements;
	NSMutableArray* _children;
	NSMutableArray* _groupStack;
	id container;

}

@property (__weak) id container; 
-(void)saveState;
-(id)container;
-(void)setContainer:(id)arg1 ;
-(void)restoreState;
-(id)initWithElements:(id)arg1 ;
-(void)addElementWithLabel:(id)arg1 roleDescription:(id)arg2 frame:(CGRect)arg3 ;
-(id)newAccessibilityElementWithFrame:(CGRect)arg1 ;
-(void)translateX:(double)arg1 Y:(double)arg2 ;
-(void)markAriaHidden;
-(void)enterGroupWithLabel:(id)arg1 roleDescription:(id)arg2 frame:(CGRect)arg3 ;
-(void)exitGroup;
-(id)getElements;
@end
