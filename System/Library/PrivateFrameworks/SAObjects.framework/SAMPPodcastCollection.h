/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPCollection.h>

@class NSString, NSArray, NSNumber;

@interface SAMPPodcastCollection : SAMPCollection

@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSArray * preferredPlayOrder; 
@property (nonatomic,copy) NSString * sortArtist; 
@property (nonatomic,copy) NSNumber * subscribed; 
+(id)podcastCollection;
+(id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSortArtist:(NSString *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(void)setSubscribed:(NSNumber *)arg1 ;
-(NSString *)artist;
-(NSArray *)preferredPlayOrder;
-(void)setPreferredPlayOrder:(NSArray *)arg1 ;
-(NSNumber *)subscribed;
-(id)encodedClassName;
-(NSString *)sortArtist;
@end
