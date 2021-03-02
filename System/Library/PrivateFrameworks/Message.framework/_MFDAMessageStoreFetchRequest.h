/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailboxFetchMessageRequest.h>
#import <libobjc.A.dylib/MFDAMailAccountRequest.h>

@protocol MFRequestQueueResponseConsumerDAMailAccountStreamConsumerFactory;
@class MFDAMessageStore, MFMessage, MFMimePart;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {

	id<MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> consumer;
	MFDAMessageStore* store;
	MFMessage* message;
	MFMimePart* part;
	int format;
	BOOL partial;

}

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(unsigned long long)hash;
-(BOOL)isUserRequested;
-(id)deferredOperation;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldSend;
-(unsigned long long)generationNumber;
@end
