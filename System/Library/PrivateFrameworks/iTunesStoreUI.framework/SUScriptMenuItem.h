/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptMenuItem : SUScriptObject {

	BOOL _enabled;
	NSString* _title;
	id _userInfo;

}

@property (assign) BOOL enabled; 
@property (retain) NSString * title; 
@property (retain) id userInfo; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)init;
-(BOOL)enabled;
-(id)attributeKeys;
-(void)dealloc;
-(id)userInfo;
-(id)_className;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)title;
-(id)scriptAttributeKeys;
-(void)_sendDidChange;
@end
