/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@protocol FCFeedGroupInsertionDescriptor;
@class NSSet, NSString;

@interface FCLocalNewsFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	id<FCFeedGroupInsertionDescriptor> _insertionDescriptor;

}

@property (nonatomic,copy,readonly) id<FCFeedGroupInsertionDescriptor> insertionDescriptor;              //@synthesize insertionDescriptor=_insertionDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,readonly) BOOL shouldEmitContentInFavoritesOnlyMode; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL requiresHeavyweightContent; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupEmitterIdentifier;
-(id)init;
-(BOOL)emitsSingleRefreshSessionGroups;
-(BOOL)requiresHeavyweightContent;
-(BOOL)shouldEmitContentInFavoritesOnlyMode;
-(NSSet *)emittableGroupTypes;
-(long long)requiredForYouContentTypes;
-(BOOL)wantsToInsertGroupInContext:(id)arg1 ;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(id)backingChannelTagIDWithConfiguration:(id)arg1 ;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(id<FCFeedGroupInsertionDescriptor>)insertionDescriptor;
-(id)initWithInsertionDescriptor:(id)arg1 ;
@end

