/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LPiTunesMediaUnresolvedMetadata.h>

@class NSString, LPiTunesMediaAsset;

@interface LPiTunesMediaTVEpisodeUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _episodeName;
	NSString* _seasonName;
	NSString* _genre;
	LPiTunesMediaAsset* _artwork;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                   //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * episodeName;                       //@synthesize episodeName=_episodeName - In the implementation block
@property (nonatomic,copy) NSString * seasonName;                        //@synthesize seasonName=_seasonName - In the implementation block
@property (nonatomic,copy) NSString * genre;                             //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * artwork;               //@synthesize artwork=_artwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)genre;
-(void)setArtwork:(LPiTunesMediaAsset *)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(id)assetsToFetch;
-(LPiTunesMediaAsset *)artwork;
-(NSString *)storeFrontIdentifier;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(id)resolve;
-(NSString *)episodeName;
-(void)setEpisodeName:(NSString *)arg1 ;
-(NSString *)seasonName;
-(void)setSeasonName:(NSString *)arg1 ;
@end
