/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLClientServerTransaction.h>

@protocol OS_dispatch_semaphore;
@class NSSet, NSString, NSObject;

@interface _PLClientTransaction : PLClientServerTransaction {

	NSSet* _changeScopes;
	long long _addChangeScopesBatch;
	NSSet* _batchScopes;
	int _fileDescriptor;
	id _processAssertion;
	NSString* _path;
	NSObject*<OS_dispatch_semaphore> _fdResourceSemaphore;
	NSString* _changeScopesDescriptionSnapshot;

}

@property (assign,nonatomic) int fileDescriptor;                                                       //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,retain) id processAssertion;                                                      //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,retain) NSString * path;                                                          //@synthesize path=_path - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_semaphore> fdResourceSemaphore;              //@synthesize fdResourceSemaphore=_fdResourceSemaphore - In the implementation block
@property (copy) NSString * changeScopesDescriptionSnapshot;                                           //@synthesize changeScopesDescriptionSnapshot=_changeScopesDescriptionSnapshot - In the implementation block
+(id)_fdIsolationQueue;
+(id)_fdResourceSemaphore;
-(void)setProcessAssertion:(id)arg1 ;
-(id)changeScopes;
-(void)_updateChangeScopesDescriptionSnapshot;
-(NSObject*<OS_dispatch_semaphore>)fdResourceSemaphore;
-(NSString *)path;
-(void)dealloc;
-(int)fileDescriptor;
-(void)addChangeScopes:(id)arg1 ;
-(void)popChangeScopesBatch;
-(NSString *)changeScopesDescriptionSnapshot;
-(void)setFdResourceSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)description;
-(void)persistTransactionScopes:(id)arg1 ;
-(id)generateChangeScopesDescription;
-(void)setChangeScopesDescriptionSnapshot:(NSString *)arg1 ;
-(void)completeTransactionScope:(id)arg1 ;
-(void)pushChangeScopesBatch;
-(void)setPath:(NSString *)arg1 ;
-(void)abortTransaction;
-(BOOL)isClientTransaction;
-(void)completeTransaction;
-(id)initWithPathManager:(id)arg1 ;
-(id)processAssertion;
-(void)setFileDescriptor:(int)arg1 ;
@end
