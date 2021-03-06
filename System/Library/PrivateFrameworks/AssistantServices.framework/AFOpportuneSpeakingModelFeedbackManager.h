/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying;
@class AFOpportuneSpeakingModelFeedback, NSMutableDictionary;

@interface AFOpportuneSpeakingModelFeedbackManager : NSObject {

	AFOpportuneSpeakingModelFeedback* _feedback;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSMutableDictionary* _usageEventsBySpeakableId;

}
-(void)loadIfNecessary;
-(id)init;
-(void)save;
-(id)lastNegativeFeedbackForContact:(id)arg1 ;
-(void)setLastNegativeFeedbackForContact:(id)arg1 ;
-(BOOL)interactionDetectedForSpeakableId:(id)arg1 ;
-(void)fetchNotificationUsageForSpeakableId:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

