/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCCacheCoordinatorDelegate <NSObject>
@optional
-(unsigned long long)cacheCoordinatorPreemptiveFlushSize:(id)arg1;

@required
-(unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
-(void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;

@end

