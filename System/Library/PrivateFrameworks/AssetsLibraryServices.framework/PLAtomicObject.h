/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLAtomicObject : NSObject {

	os_unfair_lock_s _lock;
	id _object;

}
-(void)invalidateWithHandler:(/*^block*/id)arg1 ;
-(void)atomicallyPerformBlockAndWait:(/*^block*/id)arg1 ;
-(id)initWithObject:(id)arg1 ;
@end
