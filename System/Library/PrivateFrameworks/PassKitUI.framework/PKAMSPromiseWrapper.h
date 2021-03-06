/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKCancelable.h>
#import <libobjc.A.dylib/PKInvalidatable.h>

@class AMSPromise, NSString;

@interface PKAMSPromiseWrapper : NSObject <PKCancelable, PKInvalidatable> {

	os_unfair_lock_s _lock;
	BOOL _invalidated;
	BOOL _canceled;
	AMSPromise* _promise;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
-(BOOL)isCanceled;
-(id)init;
-(id)initWithAMSPromise:(id)arg1 ;
-(BOOL)isInvalidated;
-(void)cancel;
-(void)invalidate;
@end

