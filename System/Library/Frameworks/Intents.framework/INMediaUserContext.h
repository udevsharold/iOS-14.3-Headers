/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INUserContext.h>

@class NSNumber;

@interface INMediaUserContext : INUserContext {

	long long _subscriptionStatus;
	NSNumber* _numberOfLibraryItems;

}

@property (assign,nonatomic) long long subscriptionStatus;               //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,copy) NSNumber * numberOfLibraryItems;              //@synthesize numberOfLibraryItems=_numberOfLibraryItems - In the implementation block
+(long long)_type;
+(BOOL)supportsSecureCoding;
+(id)_sharedFormatter;
-(id)init;
-(id)safeLibraryItems;
-(NSNumber *)numberOfLibraryItems;
-(void)setNumberOfLibraryItems:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)subscriptionStatus;
-(void)setSubscriptionStatus:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

