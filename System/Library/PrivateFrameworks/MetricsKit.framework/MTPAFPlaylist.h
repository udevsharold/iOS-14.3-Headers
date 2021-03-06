/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray;

@interface MTPAFPlaylist : NSObject {

	NSArray* _metricsData;
	NSMutableArray* _items;

}

@property (copy) NSArray * metricsData;                           //@synthesize metricsData=_metricsData - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)items;
-(id)currentItems;
-(NSArray *)metricsData;
-(void)setMetricsData:(NSArray *)arg1 ;
-(void)addItemStartAtMilliseconds:(unsigned long long)arg1 endAtMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(id)initWithSharedMetricsData:(id)arg1 ;
-(void)addItemStartAtMilliseconds:(unsigned long long)arg1 durationMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(void)addItemStartAtSeconds:(double)arg1 durationSeconds:(double)arg2 metricsData:(id)arg3 ;
-(void)updateEventData:(id)arg1 ;
@end

