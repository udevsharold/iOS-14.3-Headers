/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISirilandSnippet.h>

@class NSArray, NSDictionary;

@interface SARestaurantRestaurantsSnippet : SAUISirilandSnippet

@property (nonatomic,copy) NSArray * attributionOrder; 
@property (nonatomic,copy) NSArray * contributingProviderIds; 
@property (nonatomic,copy) NSDictionary * providerPunchOutMap; 
@property (nonatomic,copy) NSArray * restaurants; 
+(id)restaurantsSnippet;
+(id)restaurantsSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)attributionOrder;
-(void)setAttributionOrder:(NSArray *)arg1 ;
-(NSArray *)contributingProviderIds;
-(NSArray *)restaurants;
-(void)setContributingProviderIds:(NSArray *)arg1 ;
-(NSDictionary *)providerPunchOutMap;
-(void)setProviderPunchOutMap:(NSDictionary *)arg1 ;
-(void)setRestaurants:(NSArray *)arg1 ;
-(id)encodedClassName;
@end
