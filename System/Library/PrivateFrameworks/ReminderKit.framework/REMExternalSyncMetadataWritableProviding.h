/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol REMExternalSyncMetadataWritableProviding
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
@required
-(NSString *)daSyncToken;
-(void)setDaPushKey:(id)arg1;
-(void)setDaSyncToken:(id)arg1;
-(NSString *)externalModificationTag;
-(void)setExternalIdentifier:(id)arg1;
-(NSString *)externalIdentifier;
-(void)setExternalModificationTag:(id)arg1;
-(NSString *)daPushKey;

@end

