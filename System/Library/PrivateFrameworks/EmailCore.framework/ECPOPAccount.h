/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailCore/ECAccount.h>

@interface ECPOPAccount : ECAccount

@property (assign,nonatomic) long long bigMessageWarningSize; 
@property (assign,nonatomic) long long daysAfterDownloadToDeleteMessagesFromServer; 
@property (nonatomic,readonly) BOOL daysAfterDownloadToDeleteMessagesFromServerIsSet; 
@property (assign,nonatomic) long long deletionPolicy; 
@property (assign,nonatomic) BOOL hasNotFinishedFirstTimeSync; 
+(id)standardPorts;
+(id)standardSSLPorts;
-(long long)defaultPortNumber;
-(long long)defaultSecurePortNumber;
-(long long)bigMessageWarningSize;
-(void)setBigMessageWarningSize:(long long)arg1 ;
-(long long)daysAfterDownloadToDeleteMessagesFromServer;
-(void)setDaysAfterDownloadToDeleteMessagesFromServer:(long long)arg1 ;
-(BOOL)daysAfterDownloadToDeleteMessagesFromServerIsSet;
-(long long)deletionPolicy;
-(void)setDeletionPolicy:(long long)arg1 ;
-(BOOL)hasNotFinishedFirstTimeSync;
-(void)setHasNotFinishedFirstTimeSync:(BOOL)arg1 ;
@end
