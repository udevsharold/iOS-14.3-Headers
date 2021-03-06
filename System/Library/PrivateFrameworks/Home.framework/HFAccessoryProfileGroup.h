/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSNumber;

@interface HFAccessoryProfileGroup : NSObject {

	NSArray* _profiles;
	NSNumber* _groupIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * profiles;                      //@synthesize profiles=_profiles - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(id)_groupProfilesKeyedByIdentifier:(id)arg1 options:(id)arg2 ;
+(id)_groupIdentifierForProfile:(id)arg1 options:(id)arg2 ;
+(id)_hashCombiningHashes:(id)arg1 ;
+(id)groupProfiles:(id)arg1 options:(id)arg2 ;
-(NSNumber *)groupIdentifier;
-(NSArray *)profiles;
-(id)initWithProfiles:(id)arg1 groupIdentifier:(id)arg2 ;
@end

