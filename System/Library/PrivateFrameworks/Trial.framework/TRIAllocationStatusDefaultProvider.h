/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRIAllocationStatusProvider.h>

@class _PASXPCClientHelper, _PASLock;

@interface TRIAllocationStatusDefaultProvider : NSObject <TRIAllocationStatusProvider> {

	_PASXPCClientHelper* _clientHelper;
	_PASLock* _lock;

}
-(id)enumerateExperimentStatusesForEnvironment:(int)arg1 startingFromCursor:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)enumerateActiveExperimentsForEnvironment:(int)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)syncProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)addStatusUpdateHandlerForEnvironment:(int)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)_defaultQueue;
-(BOOL)removeUpdateHandlerForToken:(id)arg1 ;
@end

