/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKOperationCallbacks.h>

@class NSString, Protocol;

@interface CKDLongLivedOperationPersistedCallbackProxy : NSObject <CKOperationCallbacks> {

	NSString* _operationID;
	Protocol* _callbackProtocol;
	SEL _completionSelector;

}

@property (nonatomic,copy) NSString * operationID;                     //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) Protocol * callbackProtocol;              //@synthesize callbackProtocol=_callbackProtocol - In the implementation block
@property (assign,nonatomic) SEL completionSelector;                   //@synthesize completionSelector=_completionSelector - In the implementation block
-(NSString *)operationID;
-(void)forwardInvocation:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setOperationID:(NSString *)arg1 ;
-(void)setCallbackProtocol:(Protocol *)arg1 ;
-(Protocol *)callbackProtocol;
-(id)initWithOperationID:(id)arg1 callbackProtocol:(id)arg2 completionSelector:(SEL)arg3 ;
-(SEL)completionSelector;
-(void)setCompletionSelector:(SEL)arg1 ;
@end
