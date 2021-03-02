/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIKeyCommandDiscoverabilityHUDColumnView, NSArray;

@interface UIKeyCommandDiscoverabilityHUDViewCell : UICollectionViewCell {

	BOOL _constraintsForTwoColumns;
	UIKeyCommandDiscoverabilityHUDColumnView* _leftColumnView;
	UIKeyCommandDiscoverabilityHUDColumnView* _rightColumnView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDColumnView * leftColumnView;               //@synthesize leftColumnView=_leftColumnView - In the implementation block
@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDColumnView * rightColumnView;              //@synthesize rightColumnView=_rightColumnView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                                   //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) BOOL constraintsForTwoColumns;                                           //@synthesize constraintsForTwoColumns=_constraintsForTwoColumns - In the implementation block
-(void)setConstraints:(NSArray *)arg1 ;
-(NSArray *)constraints;
-(UIKeyCommandDiscoverabilityHUDColumnView *)rightColumnView;
-(UIKeyCommandDiscoverabilityHUDColumnView *)leftColumnView;
-(void)setLeftColumnView:(UIKeyCommandDiscoverabilityHUDColumnView *)arg1 ;
-(void)setRightColumnView:(UIKeyCommandDiscoverabilityHUDColumnView *)arg1 ;
-(BOOL)constraintsForTwoColumns;
-(void)setConstraintsForTwoColumns:(BOOL)arg1 ;
@end
