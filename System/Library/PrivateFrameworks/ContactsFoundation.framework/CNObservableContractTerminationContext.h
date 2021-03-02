/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CNObservableContractTerminationContext : NSObject {

	NSArray* _callStack;
	unsigned long long _threadId;

}

@property (copy,readonly) NSArray * callStack;                 //@synthesize callStack=_callStack - In the implementation block
@property (readonly) unsigned long long threadId;              //@synthesize threadId=_threadId - In the implementation block
+(unsigned long long)currentThreadId;
+(id)currentContext;
-(unsigned long long)threadId;
-(id)initWithCallStack:(id)arg1 threadId:(unsigned long long)arg2 ;
-(NSArray *)callStack;
@end
