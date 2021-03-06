/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTUnsafePromise.h>

@class CUTResult, NSMutableArray;

@interface _CUTUnsafePromise : CUTUnsafePromise {

	BOOL _done;
	CUTResult* _result;
	NSMutableArray* _resultBlocks;

}

@property (assign,nonatomic) BOOL done;                                  //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) CUTResult * result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultBlocks;              //@synthesize resultBlocks=_resultBlocks - In the implementation block
-(void)setResult:(CUTResult *)arg1 ;
-(CUTResult *)result;
-(void)_fulfillWithResult:(id)arg1 ;
-(id)init;
-(void)setResultBlocks:(NSMutableArray *)arg1 ;
-(BOOL)done;
-(id)initWithResult:(id)arg1 ;
-(void)setDone:(BOOL)arg1 ;
-(NSMutableArray *)resultBlocks;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
@end

