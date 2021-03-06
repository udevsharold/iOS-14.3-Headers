/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CKDClientProxy, CKDClientContext;

@interface CKDProxySetupOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	CKDClientProxy* _proxy;
	CKDClientContext* _context;

}

@property (assign,nonatomic,__weak) CKDClientProxy * proxy;                  //@synthesize proxy=_proxy - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                               //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                //@synthesize isFinished=_isFinished - In the implementation block
+(id)operationWithProxy:(id)arg1 context:(id)arg2 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(CKDClientProxy *)proxy;
-(BOOL)isExecuting;
-(void)_setIsExecuting:(BOOL)arg1 ;
-(void)_setIsFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isAsynchronous;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)start;
-(CKDClientContext *)context;
-(id)initWithProxy:(id)arg1 context:(id)arg2 ;
-(void)_markFinished;
@end

