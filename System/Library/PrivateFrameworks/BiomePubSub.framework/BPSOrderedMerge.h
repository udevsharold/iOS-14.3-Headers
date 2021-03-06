/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BPSPublisher.h>

@class NSArray;

@interface BPSOrderedMerge : BPSPublisher {

	NSArray* _publishers;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) NSArray * publishers;              //@synthesize publishers=_publishers - In the implementation block
@property (nonatomic,copy) id comparator;                         //@synthesize comparator=_comparator - In the implementation block
-(id)bookmarkableUpstreams;
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(void)subscribe:(id)arg1 ;
-(id)init;
-(id)comparator;
-(NSArray *)publishers;
-(void)setComparator:(id)arg1 ;
-(id)initWithPublishers:(id)arg1 comparator:(/*^block*/id)arg2 ;
-(id)initWithA:(id)arg1 b:(id)arg2 comparator:(/*^block*/id)arg3 ;
@end

