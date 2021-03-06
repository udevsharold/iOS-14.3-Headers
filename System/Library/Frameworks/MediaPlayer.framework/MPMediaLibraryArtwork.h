/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSArray, MPMediaLibraryArtworkRequest, ML3Artwork, NSURL, NSDictionary;

@interface MPMediaLibraryArtwork : NSObject {

	os_unfair_lock_s _stateLock;
	NSArray* _validSizes;
	MPMediaLibraryArtworkRequest* _artworkRequest;
	ML3Artwork* _artwork;

}

@property (assign,nonatomic,__weak) MPMediaLibraryArtworkRequest * artworkRequest;              //@synthesize artworkRequest=_artworkRequest - In the implementation block
@property (nonatomic,retain) ML3Artwork * artwork;                                              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s stateLock;                                      //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,readonly) NSArray * validSizes;                                            //@synthesize validSizes=_validSizes - In the implementation block
@property (nonatomic,copy,readonly) NSURL * originalFileURL; 
@property (nonatomic,copy) NSDictionary * effectsMetadata; 
+(BOOL)artworkExistsForRequest:(id)arg1 ;
+(BOOL)needsToFetchArtworkForRequest:(id)arg1 ;
+(id)availableArtworkWithRequest:(id)arg1 ;
+(void)fetchArtworkForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)cancelFetchingArtworkForRequest:(id)arg1 ;
+(void)fetchArtworkInfoForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setArtwork:(ML3Artwork *)arg1 ;
-(id)init;
-(os_unfair_lock_s)stateLock;
-(ML3Artwork *)artwork;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)validSizes;
-(MPMediaLibraryArtworkRequest *)artworkRequest;
-(void)setArtworkRequest:(MPMediaLibraryArtworkRequest *)arg1 ;
-(NSURL *)originalFileURL;
-(id)imageFileURLForSize:(CGSize)arg1 ;
-(id)imageFileURLForEffect:(id)arg1 ;
-(NSDictionary *)effectsMetadata;
-(void)setEffectsMetadata:(NSDictionary *)arg1 ;
@end

