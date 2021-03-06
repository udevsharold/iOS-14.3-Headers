/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSData;

@interface BlastDoorCombinedPluginAttachmentInfo : NSObject {

	??? combinedPluginAttachmentInfo;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSURL * attachmentURL; 
@property (readonly,nonatomic) NSData * signature; 
@property (readonly,nonatomic) NSString * ownerID; 
@property (readonly,nonatomic) unsigned long long expectedFileSize; 
@property (readonly,nonatomic) NSData * encryptionKey; 
-(NSData *)signature;
-(id)init;
-(NSData *)encryptionKey;
-(NSString *)ownerID;
-(NSString *)description;
-(NSURL *)attachmentURL;
-(unsigned long long)expectedFileSize;
@end

