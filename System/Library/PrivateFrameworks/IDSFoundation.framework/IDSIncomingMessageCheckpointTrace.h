/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class NSString, CUTCheckpointRange;

@interface IDSIncomingMessageCheckpointTrace : CUTCheckpointTrace {

	NSString* _guid;
	NSString* _service;
	long long _command;
	CUTCheckpointRange* _storeInMessageStore;
	CUTCheckpointRange* _decryption;
	CUTCheckpointRange* _sendToClient;

}

@property (nonatomic,retain) NSString * guid;                                         //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSString * service;                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long command;                                     //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * storeInMessageStore;              //@synthesize storeInMessageStore=_storeInMessageStore - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * decryption;                       //@synthesize decryption=_decryption - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * sendToClient;                     //@synthesize sendToClient=_sendToClient - In the implementation block
-(void)setGuid:(NSString *)arg1 ;
-(long long)command;
-(NSString *)service;
-(id)_reportMetadata;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(id)initWithService:(id)arg1 command:(long long)arg2 uniqueIdentifier:(id)arg3 ;
-(CUTCheckpointRange *)decryption;
-(CUTCheckpointRange *)storeInMessageStore;
-(CUTCheckpointRange *)sendToClient;
-(NSString *)guid;
@end
