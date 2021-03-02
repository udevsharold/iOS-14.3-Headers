/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BPSSubscriber.h>

@class _BPSFlatMapOuter, NSString;

@interface _BPSFlatMapSide : NSObject <BPSSubscriber> {

	long long _index;
	_BPSFlatMapOuter* _outer;

}

@property (assign,nonatomic) long long index;                       //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) _BPSFlatMapOuter * outer;              //@synthesize outer=_outer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIndex:(long long)arg1 ;
-(long long)index;
-(_BPSFlatMapOuter *)outer;
-(long long)receiveInput:(id)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(void)receiveSubscription:(id)arg1 ;
-(id)initWithIndex:(long long)arg1 outer:(id)arg2 ;
-(void)setOuter:(_BPSFlatMapOuter *)arg1 ;
@end
