/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairDataMessage.h>

@interface IDSSocketPairResourceTransferMessage : IDSSocketPairDataMessage
+(id)resumeMessageWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 nextByteOffset:(unsigned long long)arg4 ;
+(id)cancelMessageWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 cancelReason:(unsigned char)arg4 ;
-(unsigned char)command;
-(unsigned long long)byteOffset;
-(unsigned char)cancelReason;
-(unsigned char)type;
@end
