/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, NSString;

@interface CNPhotoPickerColorVariant : NSObject {

	UIColor* _color;
	NSString* _colorName;

}

@property (nonatomic,readonly) UIColor * color;                   //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) NSString * colorName;              //@synthesize colorName=_colorName - In the implementation block
-(UIColor *)color;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)colorName;
-(id)initWithColor:(id)arg1 named:(id)arg2 ;
@end

