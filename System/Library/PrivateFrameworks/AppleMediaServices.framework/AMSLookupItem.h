/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray, NSNumber, NSURL;

@interface AMSLookupItem : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _itemDictionary;

}

@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,copy,readonly) NSArray * artwork; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSArray * categoryNames; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * itemKind; 
@property (nonatomic,copy,readonly) NSNumber * iTunesStoreIdentifier; 
@property (nonatomic,copy,readonly) NSString * offerName; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (getter=isPOIBased,nonatomic,readonly) BOOL POIBased; 
@property (nonatomic,copy,readonly) NSURL * productPageURL; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) long long numberOfUserRatingsForCurrentVersion; 
@property (nonatomic,readonly) float userRatingForCurrentVersion; 
@property (nonatomic,readonly) NSDictionary * itemDictionary;                               //@synthesize itemDictionary=_itemDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)iTunesStoreIdentifier;
-(id)initWithLookupDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)offers;
-(BOOL)isPOIBased;
-(NSArray *)artwork;
-(float)userRating;
-(NSString *)itemKind;
-(NSArray *)categoryNames;
-(long long)numberOfUserRatings;
-(long long)numberOfUserRatingsForCurrentVersion;
-(NSURL *)productPageURL;
-(float)userRatingForCurrentVersion;
-(NSDictionary *)itemDictionary;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)artistName;
-(NSString *)offerName;
-(NSString *)bundleIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayName;
@end
