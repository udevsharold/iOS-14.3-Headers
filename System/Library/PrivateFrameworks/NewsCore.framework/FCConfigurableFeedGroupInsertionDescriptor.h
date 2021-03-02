/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedGroupInsertionDescriptor.h>

@class NSString, NSSet;

@interface FCConfigurableFeedGroupInsertionDescriptor : NSObject <FCFeedGroupInsertionDescriptor> {

	NSString* _sourceIdentifier;
	NSSet* _precedingSourceIdentifiers;
	unsigned long long _firstGroupMinPrecedingTopicGroups;
	unsigned long long _minPrecedingTopicGroups;

}

@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                                  //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * precedingSourceIdentifiers;                           //@synthesize precedingSourceIdentifiers=_precedingSourceIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long firstGroupMinPrecedingTopicGroups;              //@synthesize firstGroupMinPrecedingTopicGroups=_firstGroupMinPrecedingTopicGroups - In the implementation block
@property (nonatomic,readonly) unsigned long long minPrecedingTopicGroups;                        //@synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sourceIdentifier;
-(unsigned long long)firstGroupMinPrecedingTopicGroups;
-(NSSet *)precedingSourceIdentifiers;
-(id)initWithSourceIdentifier:(id)arg1 precedingSourceIdentifiers:(id)arg2 firstGroupMinPrecedingTopicGroups:(unsigned long long)arg3 minPrecedingTopicGroups:(unsigned long long)arg4 ;
-(unsigned long long)minPrecedingTopicGroups;
-(BOOL)wantsToInsertGroupInContext:(id)arg1 ;
@end
