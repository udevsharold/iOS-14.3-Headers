/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@interface CPSPointsOfInterestPickerCell : UITableViewCell {

	BOOL _chosen;

}

@property (assign,nonatomic) BOOL chosen;              //@synthesize chosen=_chosen - In the implementation block
+(id)identifier;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)chosen;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setChosen:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setupViews;
-(void)setHighlighted:(BOOL)arg1 ;
@end
