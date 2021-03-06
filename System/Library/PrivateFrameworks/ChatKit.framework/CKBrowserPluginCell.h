/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKBrowserCell.h>

@class UIImageView, IMBalloonPlugin;

@interface CKBrowserPluginCell : CKBrowserCell {

	UIImageView* _selectionOutline;
	IMBalloonPlugin* _plugin;
	UIImageView* _browserImage;

}

@property (nonatomic,retain) IMBalloonPlugin * plugin;                //@synthesize plugin=_plugin - In the implementation block
@property (nonatomic,retain) UIImageView * browserImage;              //@synthesize browserImage=_browserImage - In the implementation block
+(id)reuseIdentifier;
-(IMBalloonPlugin *)plugin;
-(id)iconView;
-(UIImageView *)browserImage;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
-(void)layoutSubviews;
-(void)setPlugin:(id)arg1 hideShinyStatus:(BOOL)arg2 ;
-(void)setBrowserImage:(UIImageView *)arg1 ;
-(void)_setImageForPlugin:(id)arg1 ;
-(void)_updateShinyStatus;
-(void)setSelected:(BOOL)arg1 ;
@end

