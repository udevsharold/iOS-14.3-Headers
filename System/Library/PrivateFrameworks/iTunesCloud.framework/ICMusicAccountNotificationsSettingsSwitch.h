/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary, NSString;

@interface ICMusicAccountNotificationsSettingsSwitch : NSObject {

	NSDictionary* _itemResponseDictionary;
	NSMutableDictionary* _valueDictionary;
	BOOL _isToggled;
	BOOL _hasBeenPreviouslyToggled;

}

@property (assign,nonatomic) BOOL isToggled; 
@property (nonatomic,readonly) BOOL hasBeenPreviouslyToggled; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDictionary * itemResponseDictionary;              //@synthesize itemResponseDictionary=_itemResponseDictionary - In the implementation block
-(BOOL)hasBeenPreviouslyToggled;
-(NSDictionary *)itemResponseDictionary;
-(NSString *)identifier;
-(void)setIsToggled:(BOOL)arg1 ;
-(id)initWithToggleState:(BOOL)arg1 hasBeenToggled:(BOOL)arg2 identifier:(id)arg3 ;
-(void)setHasBeenPreviouslyToggled:(BOOL)arg1 ;
-(BOOL)isToggled;
-(id)initWithItemResponseDictionary:(id)arg1 ;
@end
