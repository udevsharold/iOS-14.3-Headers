/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSZip : BPSPublisher {

	BPSPublisher* _a;
	BPSPublisher* _b;

}

@property (a,nonatomic,readonly) BPSPublisher * a;              //@synthesize a=_a - In the implementation block
@property (b,nonatomic,readonly) BPSPublisher * b;              //@synthesize b=_b - In the implementation block
-(BPSPublisher *)b;
-(void)subscribe:(id)arg1 ;
-(id)init;
-(BPSPublisher *)a;
-(id)initWithA:(id)arg1 b:(id)arg2 ;
@end

