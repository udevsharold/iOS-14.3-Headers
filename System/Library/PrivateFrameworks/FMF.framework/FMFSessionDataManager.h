/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSMutableDictionary;

@interface FMFSessionDataManager : NSObject {

	NSSet* _followers;
	NSSet* _following;
	NSSet* _locations;
	NSSet* _fences;
	NSMutableDictionary* _locationsCache;

}

@property (nonatomic,retain) NSMutableDictionary * locationsCache;              //@synthesize locationsCache=_locationsCache - In the implementation block
@property (nonatomic,retain) NSSet * followers;                                 //@synthesize followers=_followers - In the implementation block
@property (nonatomic,retain) NSSet * following;                                 //@synthesize following=_following - In the implementation block
@property (nonatomic,retain) NSSet * locations;                                 //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSSet * fences;                                    //@synthesize fences=_fences - In the implementation block
+(id)sharedInstance;
-(NSSet *)fences;
-(void)abDidChange;
-(void)abPreferencesDidChange;
-(id)favoritesOrdered;
-(id)followerForHandle:(id)arg1 ;
-(id)locationForHandle:(id)arg1 ;
-(void)setFollowers:(NSSet *)arg1 ;
-(void)setFences:(NSSet *)arg1 ;
-(NSSet *)locations;
-(id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2 ;
-(void)setLocationsCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)locationsCache;
-(NSSet *)following;
-(id)followingForHandle:(id)arg1 ;
-(void)setLocations:(NSSet *)arg1 ;
-(NSSet *)followers;
-(void)setFollowing:(NSSet *)arg1 ;
@end

