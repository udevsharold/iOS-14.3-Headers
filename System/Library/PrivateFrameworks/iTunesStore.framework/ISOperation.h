/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol ISOperationDelegate;
@class NSError, NSLock, NSRunLoop, SSOperationProgress, NSString, NSArray, NSMutableArray;

@interface ISOperation : NSOperation {

	id<ISOperationDelegate> _delegate;
	NSError* _error;
	NSLock* _lock;
	NSRunLoop* _operationRunLoop;
	ISOperation* _parentOperation;
	SSOperationProgress* _progress;
	BOOL _shouldMessageMainThread;
	NSString* _powerAssertionIdentifier;
	NSArray* _serializationLockIdentifiers;
	NSMutableArray* _subOperations;
	BOOL _shouldRunWithBackgroundPriority;
	BOOL _stopped;
	BOOL _success;

}

@property (retain) ISOperation * parentOperation;                           //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,readonly) SSOperationProgress * progress; 
@property (retain) NSRunLoop * operationRunLoop;                            //@synthesize operationRunLoop=_operationRunLoop - In the implementation block
@property (copy) NSArray * serializationLockIdentifiers; 
@property (__weak) id<ISOperationDelegate> delegate; 
@property (assign) BOOL shouldMessageMainThread; 
@property (retain) NSString * powerAssertionIdentifier;                     //@synthesize powerAssertionIdentifier=_powerAssertionIdentifier - In the implementation block
@property (readonly) NSString * uniqueKey; 
@property (assign) BOOL shouldRunWithBackgroundPriority;                    //@synthesize shouldRunWithBackgroundPriority=_shouldRunWithBackgroundPriority - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (assign) BOOL success;                                            //@synthesize success=_success - In the implementation block
@property (readonly) long long progressWeight; 
-(void)sendCompletionCallback:(id)arg1 ;
-(void)setScriptOptions:(id)arg1 ;
-(id)authenticatedAccountDSID;
-(void)setSuccess:(BOOL)arg1 ;
-(void)run;
-(NSError *)error;
-(id)init;
-(NSString *)uniqueKey;
-(void)main;
-(void)unlock;
-(void)run:(BOOL)arg1 ;
-(void)setPowerAssertionIdentifier:(NSString *)arg1 ;
-(NSString *)powerAssertionIdentifier;
-(void)_main:(BOOL)arg1 ;
-(void)setParentOperation:(ISOperation *)arg1 ;
-(ISOperation *)parentOperation;
-(void)cancel;
-(void)_keepAliveTimer:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setDelegate:(id<ISOperationDelegate>)arg1 ;
-(SSOperationProgress *)progress;
-(void)lock;
-(BOOL)success;
-(id<ISOperationDelegate>)delegate;
-(BOOL)stopRunLoop;
-(BOOL)runSubOperation:(id)arg1 returningError:(id*)arg2 ;
-(void)setShouldMessageMainThread:(BOOL)arg1 ;
-(BOOL)loadURLBagWithContext:(id)arg1 returningError:(id*)arg2 ;
-(id)loadedURLBagWithContext:(id)arg1 returningError:(id*)arg2 ;
-(void)_addSubOperation:(id)arg1 ;
-(void)dispatchCompletionBlock;
-(void)_removeSubOperation:(id)arg1 ;
-(NSRunLoop *)operationRunLoop;
-(BOOL)shouldFailAfterUniquePredecessorError:(id)arg1 ;
-(BOOL)shouldRunWithBackgroundPriority;
-(void)_failAfterException;
-(id)copyActivePowerAssertionIdentifiers;
-(NSArray *)serializationLockIdentifiers;
-(BOOL)shouldMessageMainThread;
-(void)delegateDispatch:(/*^block*/id)arg1 ;
-(void)_sendErrorToDelegate:(id)arg1 ;
-(void)setOperationRunLoop:(NSRunLoop *)arg1 ;
-(void)sendProgressToDelegate;
-(void)_sendWillStartToDelegate;
-(void)_sendSuccessToDelegate;
-(long long)progressWeight;
-(int)runRunLoopUntilStopped;
-(BOOL)runSubOperation:(id)arg1 onQueue:(id)arg2 error:(id*)arg3 ;
-(id)copySerializationLocks;
-(void)releasePowerAssertionsDuringBlock:(/*^block*/id)arg1 ;
-(void)sendDidTakeSerializationLocks;
-(void)setSerializationLockIdentifiers:(NSArray *)arg1 ;
-(void)setShouldRunWithBackgroundPriority:(BOOL)arg1 ;
-(unsigned long long)authenticatedAccountCredentialSource;
-(id)loadedURLBagWithContext:(id)arg1 accountDSID:(id)arg2 returningError:(id*)arg3 ;
-(BOOL)copyAccountID:(id*)arg1 credentialSource:(unsigned long long*)arg2 byHandlingAuthenticateResponse:(id)arg3 returningError:(id*)arg4 ;
-(BOOL)copyAccountID:(id*)arg1 credentialSource:(unsigned long long*)arg2 byAuthenticatingWithContext:(id)arg3 returningError:(id*)arg4 ;
-(BOOL)loadSoftwareMapReturningError:(id*)arg1 ;
@end
