/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol VCShortcutSyncService <NSObject>
@property (nonatomic,copy,readonly) NSString * syncServiceIdentifier; 
@property (nonatomic,copy,readonly) NSURL * directoryURL; 
@required
-(void)requestFullResync;
-(NSURL *)directoryURL;
-(void)requestSync;
-(NSString *)syncServiceIdentifier;

@end

