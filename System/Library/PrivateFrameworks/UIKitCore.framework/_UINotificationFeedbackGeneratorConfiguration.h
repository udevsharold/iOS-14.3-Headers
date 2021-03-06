/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UINotificationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	BOOL _includePrivateEvents;
	NSDictionary* _feedbacks;

}

@property (assign,nonatomic) BOOL includePrivateEvents;              //@synthesize includePrivateEvents=_includePrivateEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * feedbacks;               //@synthesize feedbacks=_feedbacks - In the implementation block
+(id)defaultConfiguration;
+(id)privateConfiguration;
+(id)privateConfigurationForTypes:(id)arg1 ;
-(NSDictionary *)feedbacks;
-(id)feedbackKeyPaths;
-(void)setIncludePrivateEvents:(BOOL)arg1 ;
-(void)setFeedbacks:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)includePrivateEvents;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)defaultEnabled;
@end

