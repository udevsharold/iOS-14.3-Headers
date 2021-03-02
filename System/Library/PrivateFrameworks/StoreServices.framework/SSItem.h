/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSURLConnectionRequestDelegate.h>

@class NSDate, NSArray, NSDictionary, NSString, NSMutableArray, SSURLConnectionRequest, NSNumber, SSItemOffer, NSURL, SSItemImageCollection;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {

	NSDate* _expirationDate;
	NSArray* _offers;
	NSDictionary* _properties;
	NSString* _tellAFriendBody;
	NSString* _tellAFriendBodyMIMEType;
	NSMutableArray* _tellAFriendHandlers;
	SSURLConnectionRequest* _tellAFriendRequest;
	NSString* _tellAFriendSubject;

}

@property (nonatomic,readonly) NSNumber * ITunesStoreIdentifier; 
@property (nonatomic,readonly) NSArray * allItemOffers; 
@property (nonatomic,readonly) SSItemOffer * defaultItemOffer; 
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSDate * expirationDate;                                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSString * itemTitle; 
@property (nonatomic,readonly) NSString * itemKind; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isHighDefinition,nonatomic,readonly) BOOL highDefinition; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled; 
@property (nonatomic,readonly) NSURL * viewItemURL; 
@property (nonatomic,readonly) float averageUserRating; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) SSItemImageCollection * imageCollection; 
@property (nonatomic,readonly) NSArray * thumbnailImages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isGameCenterEnabled;
-(id)collectionIdentifier;
-(id)seriesName;
-(id)buyParameters;
-(id)releaseDate;
-(id)bundleVersion;
-(BOOL)isRestricted;
-(id)seasonNumber;
-(id)collectionName;
-(id)mediaKind;
-(id)podcastFeedURL;
-(SSItemOffer *)defaultItemOffer;
-(NSNumber *)ITunesStoreIdentifier;
-(id)preOrderIdentifier;
-(id)artistIdentifier;
-(void)dealloc;
-(id)collectionArtistName;
-(id)collectionIndexInCollectionGroup;
-(id)episodeIdentifier;
-(id)episodeSortIdentifier;
-(id)indexInCollection;
-(id)numberOfCollectionsInCollectionGroup;
-(id)podcastEpisodeGUID;
-(id)numberOfItemsInCollection;
-(id)videoDetails;
-(id)softwareType;
-(BOOL)isHighDefinition;
-(id)playableMedia;
-(SSItemImageCollection *)imageCollection;
-(NSString *)itemKind;
-(long long)numberOfUserRatings;
-(id)genreName;
-(id)releaseDateString;
-(id)genreIdentifier;
-(NSString *)itemTitle;
-(NSDate *)expirationDate;
-(id)initWithItemDictionary:(id)arg1 ;
-(NSString *)description;
-(id)contentRating;
-(NSString *)artistName;
-(BOOL)isCompilation;
-(id)composerName;
-(void)requestDidFinish:(id)arg1 ;
-(id)tweetURL;
-(id)rawItemDictionary;
-(id)itemOfferForIdentifier:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)tellAFriendBody;
-(id)_tellAFriendDictionary;
-(id)priceDisplay;
-(void)_finishTellAFriendLoadWithError:(id)arg1 ;
-(NSArray *)allItemOffers;
-(float)averageUserRating;
-(void)loadTellAFriendMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)numberOfPrintedPages;
-(NSArray *)thumbnailImages;
-(id)relatedItemsForRelationType:(id)arg1 ;
-(id)tellAFriendBodyMIMEType;
-(id)tellAFriendBodyURL;
-(id)tellAFriendSubject;
-(id)tweetInitialText;
-(NSURL *)viewItemURL;
-(id)sendGiftURL;
-(id)viewReviewsURL;
-(id)valueForProperty:(id)arg1 ;
-(void)_setExpirationDate:(id)arg1 ;
-(id)networkName;
-(id)shortDescription;
-(id)bundleIdentifier;
-(id)longDescription;
-(id)_offers;
@end
