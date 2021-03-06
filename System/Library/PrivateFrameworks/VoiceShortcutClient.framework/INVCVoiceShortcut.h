/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INShortcut;


@protocol INVCVoiceShortcut <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * phrase; 
@property (nonatomic,readonly) INShortcut * shortcut; 
@required
-(NSString *)identifier;
-(INShortcut *)shortcut;
-(NSString *)phrase;

@end

