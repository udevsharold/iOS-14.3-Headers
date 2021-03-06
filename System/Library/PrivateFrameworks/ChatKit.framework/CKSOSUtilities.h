/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKSOSUtilities : NSObject

@property (getter=isMMSEnabled,nonatomic,readonly) BOOL MMSEnabled; 
+(id)sharedUtilities;
+(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 ;
+(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)sendMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 ;
-(BOOL)isMMSEnabled;
-(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)_sendMessageAndObserveNotification:(id)arg1 ;
-(id)_sendMessageAndReturnGUIDs:(id)arg1 ;
-(id)sendComposition:(id)arg1 toConversation:(id)arg2 useStandalone:(BOOL)arg3 ;
-(id)_uniqueFilePathForFilename:(id)arg1 ;
-(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
@end

