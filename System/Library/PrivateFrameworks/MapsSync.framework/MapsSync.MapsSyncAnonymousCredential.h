/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSSet, NSData, NSDate;

@interface MapsSync.MapsSyncAnonymousCredential : MapsSync.MapsSyncBaseItem {

	 _anonymousId;
	 _mapsToken;
	??? _mapsTokenCreatedAt;
	 _mapsTokenTTL;
	 _reviewedPlaces;
	 _reviewedPlacesUnstored;

}

@property (copy,nonatomic) NSSet * _reviewedPlacesUnstored; 
@property (readonly,nonatomic) NSData * anonymousId; 
@property (readonly,nonatomic) NSData * mapsToken; 
@property (readonly,nonatomic) NSDate * mapsTokenCreatedAt; 
@property (readonly,nonatomic) unsigned long long mapsTokenTTL; 
@property (readonly,nonatomic) NSSet * reviewedPlaces; 
+(id)fetchLatestAnonymousCredential;
+(id)fetchWithAnonymousId:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)setPropertiesWithObject:(id)arg1 ;
-(Class)mutableObjectClass;
-(BOOL)isEqual:(id)arg1 ;
-(void)executeOnFirstSave:(id)arg1 ;
-(Class)managedObjectClass;
-(NSData *)anonymousId;
-(NSDate *)mapsTokenCreatedAt;
-(unsigned long long)mapsTokenTTL;
-(NSSet *)_reviewedPlacesUnstored;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(void)set_reviewedPlacesUnstored:(NSSet *)arg1 ;
-(NSSet *)reviewedPlaces;
-(NSData *)mapsToken;
@end
