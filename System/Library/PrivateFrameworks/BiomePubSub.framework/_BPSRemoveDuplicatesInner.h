/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BPSFilterProducer.h>

@interface _BPSRemoveDuplicatesInner : BPSFilterProducer {

	/*^block*/id _isDuplicate;
	id _last;

}

@property (nonatomic,readonly) id isDuplicate;              //@synthesize isDuplicate=_isDuplicate - In the implementation block
@property (nonatomic,retain) id last;                       //@synthesize last=_last - In the implementation block
-(id)receiveNewValue:(id)arg1 ;
-(id)isDuplicate;
-(void)setLast:(id)arg1 ;
-(id)last;
-(id)initWithDownstream:(id)arg1 isDuplicate:(/*^block*/id)arg2 ;
@end
