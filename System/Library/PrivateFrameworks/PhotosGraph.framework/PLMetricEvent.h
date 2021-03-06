/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol PLMetricEvent <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDictionary * payload; 
@required
-(NSDictionary *)payload;
-(NSString *)identifier;
-(void)gatherMetricsWithProgressBlock:(/*^block*/id)arg1;

@end

