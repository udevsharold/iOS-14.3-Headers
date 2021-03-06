/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VUIDebugViewDataSource : NSObject {

	NSArray* _metricsDataSource;
	NSArray* _defaultsDataSource;

}

@property (nonatomic,retain) NSArray * metricsDataSource;               //@synthesize metricsDataSource=_metricsDataSource - In the implementation block
@property (nonatomic,retain) NSArray * defaultsDataSource;              //@synthesize defaultsDataSource=_defaultsDataSource - In the implementation block
-(id)init;
-(NSArray *)metricsDataSource;
-(NSArray *)defaultsDataSource;
-(id)_createMetricsDataSource;
-(id)_createDefaultsDataSource;
-(void)setMetricsDataSource:(NSArray *)arg1 ;
-(void)setDefaultsDataSource:(NSArray *)arg1 ;
@end

