/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HLPAnalyticsEvent.h>

@class NSString;

@interface HLPAnalyticsEventContentViewed : HLPAnalyticsEvent {

	NSString* _externalURLString;
	NSString* _fromTopicID;
	NSString* _topicID;
	NSString* _source;
	NSString* _viewMode;
	unsigned long long _viewNum;

}

@property (nonatomic,retain) NSString * topicID;                        //@synthesize topicID=_topicID - In the implementation block
@property (nonatomic,retain) NSString * source;                         //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * viewMode;                       //@synthesize viewMode=_viewMode - In the implementation block
@property (assign,nonatomic) unsigned long long viewNum;                //@synthesize viewNum=_viewNum - In the implementation block
@property (nonatomic,retain) NSString * externalURLString;              //@synthesize externalURLString=_externalURLString - In the implementation block
@property (nonatomic,retain) NSString * fromTopicID;                    //@synthesize fromTopicID=_fromTopicID - In the implementation block
+(id)eventWithTopicID:(id)arg1 source:(id)arg2 interfaceStyle:(long long)arg3 ;
-(id)eventName;
-(void)log;
-(NSString *)topicID;
-(void)setTopicID:(NSString *)arg1 ;
-(NSString *)externalURLString;
-(void)setExternalURLString:(NSString *)arg1 ;
-(NSString *)viewMode;
-(NSString *)source;
-(void)setViewMode:(NSString *)arg1 ;
-(unsigned long long)viewNum;
-(void)setSource:(NSString *)arg1 ;
-(void)setFromTopicID:(NSString *)arg1 ;
-(id)_initWithTopicID:(id)arg1 source:(id)arg2 interfaceStyle:(long long)arg3 ;
-(id)caRepresentation;
-(NSString *)fromTopicID;
-(void)setViewNum:(unsigned long long)arg1 ;
@end
