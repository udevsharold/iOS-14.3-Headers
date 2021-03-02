/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICoverSheetButton.h>

@class _UILegibilitySettings;

@interface CSQuickActionsButton : UICoverSheetButton {

	BOOL _permitted;
	long long _type;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL permitted;                                          //@synthesize permitted=_permitted - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(void)_updateStyle;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setType:(long long)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)initWithType:(long long)arg1 ;
-(long long)type;
-(void)setSelected:(BOOL)arg1 ;
-(id)_buttonImageNameForSelected:(BOOL)arg1 ;
-(id)_imageWithName:(id)arg1 ;
-(id)_accessoryTitleForType;
-(id)_statisticsIdentifierForType;
-(void)setPermitted:(BOOL)arg1 ;
-(BOOL)permitted;
@end
