/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKAcceptSharesOperationCallbacks.h>

@class NSArray, NSMutableDictionary, CKAcceptSharesOperationInfo;

@interface CKAcceptSharesOperation : CKOperation <CKAcceptSharesOperationCallbacks> {

	/*^block*/id _perShareCompletionBlock;
	/*^block*/id _acceptSharesCompletionBlock;
	NSArray* _shareMetadatas;
	NSMutableDictionary* _errorsByShareURL;
	NSMutableDictionary* _shareMetadatasByShareURL;

}

@property (nonatomic,retain) NSMutableDictionary * errorsByShareURL;                                           //@synthesize errorsByShareURL=_errorsByShareURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareMetadatasByShareURL;                                   //@synthesize shareMetadatasByShareURL=_shareMetadatasByShareURL - In the implementation block
@property (nonatomic,readonly) id<CKAcceptSharesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKAcceptSharesOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * shareMetadatas;                                                           //@synthesize shareMetadatas=_shareMetadatas - In the implementation block
@property (nonatomic,copy) id perShareCompletionBlock;                                                         //@synthesize perShareCompletionBlock=_perShareCompletionBlock - In the implementation block
@property (nonatomic,copy) id acceptSharesCompletionBlock;                                                     //@synthesize acceptSharesCompletionBlock=_acceptSharesCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)setShareMetadatas:(NSArray *)arg1 ;
-(NSArray *)shareMetadatas;
-(void)setErrorsByShareURL:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)errorsByShareURL;
-(id)perShareCompletionBlock;
-(id)acceptSharesCompletionBlock;
-(NSMutableDictionary *)shareMetadatasByShareURL;
-(void)handleShareAcceptanceForURL:(id)arg1 share:(id)arg2 error:(id)arg3 ;
-(void)setShareMetadatasByShareURL:(NSMutableDictionary *)arg1 ;
-(id)activityCreate;
-(void)setPerShareCompletionBlock:(id)arg1 ;
-(id)initWithShareMetadatas:(id)arg1 ;
-(void)setAcceptSharesCompletionBlock:(id)arg1 ;
-(void)performCKOperation;
@end
