/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemGroupItem.h>
#import <libobjc.A.dylib/HFAccessoryProfileVendor.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFCharacteristicValueSource;
@class NSSet, NSNumber, NSString;

@interface HFAccessoryProfileGroupItem : HFItemGroupItem <HFAccessoryProfileVendor, NSCopying> {

	NSSet* _profiles;
	NSNumber* _groupIdentifier;
	id<HFCharacteristicValueSource> _valueSource;

}

@property (nonatomic,readonly) NSSet * profiles;                                         //@synthesize profiles=_profiles - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * groupIdentifier;                          //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * services; 
-(NSNumber *)groupIdentifier;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(NSSet *)profiles;
-(id)accessories;
-(id)initWithProfiles:(id)arg1 groupIdentifier:(id)arg2 valueSource:(id)arg3 ;
-(NSSet *)services;
-(id)_buildProfileItems;
@end

