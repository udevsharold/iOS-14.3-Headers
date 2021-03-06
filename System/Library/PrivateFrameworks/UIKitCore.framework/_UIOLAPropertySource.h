/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMapTable;


@protocol _UIOLAPropertySource <_UILAPropertySource>
@property (assign,nonatomic) double spacing; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement; 
@property (assign,nonatomic) long long distribution; 
@property (assign,setter=_setItemOrderingChanged:,nonatomic) BOOL _itemOrderingChanged; 
@property (assign,setter=_setItemFittingSizeChanged:,nonatomic) BOOL _itemFittingSizeChanged; 
@property (nonatomic,readonly) NSMapTable * customSpacings; 
@required
-(void)setDistribution:(long long)arg1;
-(double)spacing;
-(NSMapTable *)customSpacings;
-(BOOL)_itemFittingSizeChanged;
-(void)setSpacing:(double)arg1;
-(void)setBaselineRelativeArrangement:(BOOL)arg1;
-(BOOL)_itemOrderingChanged;
-(BOOL)isBaselineRelativeArrangement;
-(double)customSpacingAfterItem:(id)arg1;
-(long long)distribution;
-(void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
-(void)_setItemOrderingChanged:(BOOL)arg1;
-(void)_setItemFittingSizeChanged:(BOOL)arg1;

@end

