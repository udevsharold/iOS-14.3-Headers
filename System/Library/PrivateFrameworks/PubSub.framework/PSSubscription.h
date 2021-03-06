/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, PSTopic;

@interface PSSubscription : HMFObject {

	NSSet* _filters;
	NSSet* _conditionals;
	PSTopic* _topic;

}

@property (__weak,readonly) PSTopic * topic;                 //@synthesize topic=_topic - In the implementation block
@property (copy,readonly) NSSet * filters;                   //@synthesize filters=_filters - In the implementation block
@property (copy,readonly) NSSet * conditionals;              //@synthesize conditionals=_conditionals - In the implementation block
-(void)unsubscribe;
-(PSTopic *)topic;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(NSSet *)filters;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)conditionals;
-(id)initWithTopic:(id)arg1 filters:(id)arg2 conditionals:(id)arg3 ;
@end

