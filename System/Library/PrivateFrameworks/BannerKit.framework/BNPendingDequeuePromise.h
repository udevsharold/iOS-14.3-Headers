/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BNPostingContext;

@interface BNPendingDequeuePromise : NSObject {

	/*^block*/id _dequeueBlock;
	BNPostingContext* _postingContext;

}

@property (nonatomic,readonly) BNPostingContext * postingContext;              //@synthesize postingContext=_postingContext - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(BOOL)isValid;
-(void)dequeue;
-(BNPostingContext *)postingContext;
-(id)initWithPostingContext:(id)arg1 dequeueBlock:(/*^block*/id)arg2 ;
@end

