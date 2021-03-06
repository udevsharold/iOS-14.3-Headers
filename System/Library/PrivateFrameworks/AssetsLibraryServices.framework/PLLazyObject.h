/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLLazyObject : NSObject {

	BOOL _shouldRetryBlockOnNil;
	os_unfair_lock_s _lock;
	/*^block*/id _block;
	id _object;

}

@property (readonly) id objectValue; 
-(id)objectValue;
-(id)init;
-(void)invalidateWithHandler:(/*^block*/id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithRetry:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(void)accessLazyObjectAtomically:(/*^block*/id)arg1 ;
-(void)invalidate;
-(id)initWithRetriableBlock:(/*^block*/id)arg1 ;
@end

