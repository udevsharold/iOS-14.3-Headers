/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString, TPSExperiment;

@interface TPSAnalyticsEventHintDisplayed : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	unsigned long long _displayType;
	unsigned long long _displayCount;
	TPSExperiment* _experiment;

}

@property (nonatomic,readonly) NSString * contentID;                        //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned long long displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (assign,nonatomic) unsigned long long displayCount;               //@synthesize displayCount=_displayCount - In the implementation block
@property (nonatomic,readonly) TPSExperiment * experiment;                  //@synthesize experiment=_experiment - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 experiment:(id)arg5 date:(id)arg6 ;
-(id)eventName;
-(unsigned long long)displayCount;
-(NSString *)bundleID;
-(TPSExperiment *)experiment;
-(NSString *)contentID;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)displayType;
-(void)setDisplayCount:(unsigned long long)arg1 ;
-(id)duetEvent;
-(id)_initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 experiment:(id)arg5 date:(id)arg6 ;
-(void)setDataProvider:(id)arg1 ;
-(NSString *)context;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
@end
