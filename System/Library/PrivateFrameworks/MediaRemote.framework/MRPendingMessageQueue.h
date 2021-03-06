/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MRPendingMessageQueue : NSObject {

	NSMutableArray* _messages;
	NSMutableArray* _delayableMessages;
	unsigned long long _lowPriorityMessagesCount;
	unsigned long long _maxLowPriorityMessagesAllowed;

}
-(void)push:(id)arg1 ;
-(void)dealloc;
-(void)pop;
-(id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1 ;
-(id)peek;
@end

