/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLQueueNode;

@interface NSURLQueue : NSObject {

	unsigned long long count;
	NSURLQueueNode* head;
	NSURLQueueNode* tail;
	id monitor;
	BOOL waitOnTake;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;

}
+(id)newNode;
-(BOOL)remove:(id)arg1 ;
-(void)put:(id)arg1 ;
-(id)take;
-(id)peekAt:(unsigned long long)arg1 ;
-(void)clear;
-(long long)indexOf:(id)arg1 ;
-(BOOL)isEmpty;
-(id)init;
-(void)dealloc;
-(BOOL)waitOnTake;
-(void)setWaitOnTake:(BOOL)arg1 ;
-(unsigned long long)count;
-(id)peek;
@end
