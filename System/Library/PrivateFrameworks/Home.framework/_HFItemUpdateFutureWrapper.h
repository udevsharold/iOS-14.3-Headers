/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NAFuture, HFItem, HFItemUpdateOutcome;

@interface _HFItemUpdateFutureWrapper : NSObject {

	BOOL _isInternal;
	NAFuture* _future;
	HFItem* _item;
	HFItemUpdateOutcome* _outcome;

}

@property (nonatomic,retain) NAFuture * future;                          //@synthesize future=_future - In the implementation block
@property (nonatomic,retain) HFItem * item;                              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL isInternal;                            //@synthesize isInternal=_isInternal - In the implementation block
@property (nonatomic,retain) HFItemUpdateOutcome * outcome;              //@synthesize outcome=_outcome - In the implementation block
+(id)wrapperWithFuture:(id)arg1 item:(id)arg2 isInternal:(BOOL)arg3 ;
+(id)futuresFromWrappers:(id)arg1 ;
-(HFItem *)item;
-(BOOL)isInternal;
-(void)setItem:(HFItem *)arg1 ;
-(NAFuture *)future;
-(void)setFuture:(NAFuture *)arg1 ;
-(HFItemUpdateOutcome *)outcome;
-(void)setOutcome:(HFItemUpdateOutcome *)arg1 ;
-(void)setIsInternal:(BOOL)arg1 ;
@end
