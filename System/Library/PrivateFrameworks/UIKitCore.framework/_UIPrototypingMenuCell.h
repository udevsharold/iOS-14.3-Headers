/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIStackView, UILabel, _UIPrototypingValue;

@interface _UIPrototypingMenuCell : UITableViewCell {

	UIStackView* _stackView;
	UILabel* _titleLabel;
	_UIPrototypingValue* _prototypingSetting;

}

@property (nonatomic,readonly) UIStackView * stackView;                             //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _UIPrototypingValue * prototypingSetting;              //@synthesize prototypingSetting=_prototypingSetting - In the implementation block
+(long long)_layoutAxis;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIStackView *)stackView;
-(UILabel *)titleLabel;
-(void)_prototypingSettingDidChange;
-(_UIPrototypingValue *)prototypingSetting;
-(void)setPrototypingSetting:(_UIPrototypingValue *)arg1 ;
@end
