/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUViewControllerCollectionViewCell.h>

@class HUQuickControlCollectionViewLayoutAttributes, HUQuickControlCollectionViewCellContainerViewController;

@interface HUQuickControlViewControllerCollectionViewCell : HUViewControllerCollectionViewCell {

	HUQuickControlCollectionViewLayoutAttributes* _activeLayoutAttributes;

}

@property (nonatomic,retain) HUQuickControlCollectionViewLayoutAttributes * activeLayoutAttributes;                 //@synthesize activeLayoutAttributes=_activeLayoutAttributes - In the implementation block
@property (nonatomic,retain) HUQuickControlCollectionViewCellContainerViewController * viewController; 
+(unsigned long long)quickControlSizeForItemSize:(unsigned long long)arg1 ;
-(void)setViewController:(HUQuickControlCollectionViewCellContainerViewController *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(HUQuickControlCollectionViewLayoutAttributes *)activeLayoutAttributes;
-(void)_updateContentViewControllerForActiveLayoutAttributes;
-(void)setActiveLayoutAttributes:(HUQuickControlCollectionViewLayoutAttributes *)arg1 ;
@end
