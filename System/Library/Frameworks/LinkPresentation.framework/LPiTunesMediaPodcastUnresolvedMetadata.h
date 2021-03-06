/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LPiTunesMediaUnresolvedMetadata.h>

@class NSString, LPiTunesMediaAsset, NSArray;

@interface LPiTunesMediaPodcastUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _name;
	NSString* _artist;
	LPiTunesMediaAsset* _artwork;
	NSArray* _offers;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                   //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * artist;                            //@synthesize artist=_artist - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * artwork;               //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSArray * offers;                           //@synthesize offers=_offers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setArtwork:(LPiTunesMediaAsset *)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(id)assetsToFetch;
-(NSArray *)offers;
-(LPiTunesMediaAsset *)artwork;
-(NSString *)storeFrontIdentifier;
-(void)setOffers:(NSArray *)arg1 ;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(id)resolve;
-(NSString *)name;
-(NSString *)artist;
@end

