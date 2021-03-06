/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTDelegatePackage;
@class NSString, MTEventHandlers, MTConfig, MTSystem, MTUtils;

@interface MTMetricsKitTemplate : NSObject {

	NSString* _topic;
	MTEventHandlers* _eventHandlers;
	MTConfig* _config;
	MTSystem* _system;
	MTUtils* _utils;
	id<MTDelegatePackage> _delegatePackage;

}

@property (nonatomic,retain) NSString * topic;                                   //@synthesize topic=_topic - In the implementation block
@property (nonatomic,retain) MTConfig * config;                                  //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) MTEventHandlers * eventHandlers;                    //@synthesize eventHandlers=_eventHandlers - In the implementation block
@property (nonatomic,retain) MTSystem * system;                                  //@synthesize system=_system - In the implementation block
@property (nonatomic,retain) MTUtils * utils;                                    //@synthesize utils=_utils - In the implementation block
@property (nonatomic,retain) id<MTDelegatePackage> delegatePackage;              //@synthesize delegatePackage=_delegatePackage - In the implementation block
+(id)kitWithTopic:(id)arg1 amsBag:(id)arg2 ;
+(id)kitWithTopic:(id)arg1 bagProfile:(id)arg2 profileVersion:(id)arg3 ;
-(void)setTopic:(NSString *)arg1 ;
-(MTEventHandlers *)eventHandlers;
-(NSString *)topic;
-(void)setSystem:(MTSystem *)arg1 ;
-(MTUtils *)utils;
-(void)setConfig:(MTConfig *)arg1 ;
-(id)initWithTopic:(id)arg1 ;
-(void)setEventHandlers:(MTEventHandlers *)arg1 ;
-(MTSystem *)system;
-(MTConfig *)config;
-(id)initWithTopic:(id)arg1 delegatePackage:(id)arg2 ;
-(void)setUtils:(MTUtils *)arg1 ;
-(id)metricsDataWithEventHandlerName:(id)arg1 pageId:(id)arg2 pageType:(id)arg3 pageContext:(id)arg4 eventData:(id)arg5 ;
-(id)metricsDataWithEventHandlerName:(id)arg1 pageData:(id)arg2 eventData:(id)arg3 ;
-(id)metricsDataWithEventHandlerName:(id)arg1 eventData:(id)arg2 ;
-(id)metricsDataWithEventHandlerName:(id)arg1 pageId:(id)arg2 pageType:(id)arg3 pageContext:(id)arg4 fields:(id)arg5 ;
-(id)metricsDataWithEventHandlerName:(id)arg1 pageData:(id)arg2 fields:(id)arg3 ;
-(id)metricsDataWithEventHandlerName:(id)arg1 fields:(id)arg2 ;
-(id<MTDelegatePackage>)delegatePackage;
-(void)setDelegatePackage:(id<MTDelegatePackage>)arg1 ;
-(id)initWithTopic:(id)arg1 bagProfile:(id)arg2 profileVersion:(id)arg3 ;
@end

