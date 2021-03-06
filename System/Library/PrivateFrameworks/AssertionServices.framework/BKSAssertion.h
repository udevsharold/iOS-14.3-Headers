/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/RBSAssertionObserving.h>

@class RBSAssertion, RBSTarget, NSMutableArray, NSString;

@interface BKSAssertion : NSObject <RBSAssertionObserving> {

	RBSAssertion* _internalAssertion;
	/*^block*/id _acquisitionHandler;
	/*^block*/id _invalidationHandler;
	RBSTarget* _target;
	NSMutableArray* _attributes;
	NSString* _name;
	os_unfair_lock_s _lock;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy) id invalidationHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_lock_setInternalAssertion:(id)arg1 ;
-(id)_target;
-(void)setName:(NSString *)arg1 ;
-(void)assertion:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(unsigned long long)_bksErrorForRBSAssertionError:(unsigned long long)arg1 ;
-(id)_lock_internalAssertion;
-(void)_lock:(/*^block*/id)arg1 ;
-(id)init;
-(id)_lock_attributes;
-(/*^block*/id)_acquisitionHandler;
-(void)_lock_reaquireAssertion;
-(void)_lock_setAttributes:(id)arg1 ;
-(void)dealloc;
-(void)_invalidateSynchronously:(BOOL)arg1 ;
-(id)_attributes;
-(id)_initWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)valid;
-(void)_acquireAsynchronously;
-(BOOL)acquire;
-(void)_lock_setName:(id)arg1 ;
-(void)_setTarget:(id)arg1 ;
-(void)_setAttributes:(id)arg1 ;
-(/*^block*/id)_lock_acquisitionHandler;
-(id)_internalAssertion;
-(void)assertionWillInvalidate:(id)arg1 ;
-(id)_lock_name;
-(NSString *)name;
-(void)invalidate;
-(id)invalidationHandler;
@end

