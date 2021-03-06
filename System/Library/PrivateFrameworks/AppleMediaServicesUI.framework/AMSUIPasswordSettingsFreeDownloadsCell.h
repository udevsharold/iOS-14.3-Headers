/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol AMSUIPasswordSettingsFreeDownloadsCellDelegate;
@class UISwitch;

@interface AMSUIPasswordSettingsFreeDownloadsCell : UITableViewCell {

	id<AMSUIPasswordSettingsFreeDownloadsCellDelegate> _delegate;
	UISwitch* _toggle;

}

@property (assign,nonatomic) id<AMSUIPasswordSettingsFreeDownloadsCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISwitch * toggle;                                                        //@synthesize toggle=_toggle - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)toggle;
-(void)layoutSubviews;
-(void)setDelegate:(id<AMSUIPasswordSettingsFreeDownloadsCellDelegate>)arg1 ;
-(void)setToggle:(UISwitch *)arg1 ;
-(long long)selectionStyle;
-(id<AMSUIPasswordSettingsFreeDownloadsCellDelegate>)delegate;
-(void)toggleChanged:(id)arg1 ;
@end

