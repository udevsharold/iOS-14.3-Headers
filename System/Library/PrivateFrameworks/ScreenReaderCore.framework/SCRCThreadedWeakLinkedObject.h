/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject {

	NSLock* _releaseLock;
	int _referenceCount;
	BOOL _calledDealloc;

}
-(id)init;
@end
