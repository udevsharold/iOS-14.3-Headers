/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@class NSString, UIColor;

@interface RUIChoice : RUIElement {

	unsigned long long _choiceType;
	NSString* _title;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) unsigned long long choiceType;              //@synthesize choiceType=_choiceType - In the implementation block
@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                        //@synthesize tintColor=_tintColor - In the implementation block
-(UIColor *)tintColor;
-(NSString *)title;
-(void)startActivityIndicator;
-(void)stopActivityIndicator;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(unsigned long long)typeForChoiceString:(id)arg1 ;
-(unsigned long long)choiceType;
@end

