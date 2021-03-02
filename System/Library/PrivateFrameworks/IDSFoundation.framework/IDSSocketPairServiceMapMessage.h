/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString;

@interface IDSSocketPairServiceMapMessage : IDSSocketPairMessage {

	unsigned char _reason;
	unsigned short _mappedStreamID;
	NSString* _serviceName;

}

@property (nonatomic,readonly) unsigned char reason;                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned short mappedStreamID;              //@synthesize mappedStreamID=_mappedStreamID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                     //@synthesize serviceName=_serviceName - In the implementation block
-(NSString *)serviceName;
-(unsigned char)command;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithReason:(unsigned char)arg1 mappedStreamID:(unsigned short)arg2 serviceName:(id)arg3 ;
-(unsigned short)mappedStreamID;
-(unsigned char)reason;
@end
