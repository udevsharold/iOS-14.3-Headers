/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MRPlayerPath, NSString, NSArray, _MRPlaybackQueueRequestProtobuf, NSData, NSDictionary;

@interface MRPlaybackQueueRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasLocation;
	BOOL _hasLength;
	BOOL _includeMetadata;
	BOOL _hasIncludeMetadata;
	BOOL _hasArtworkWidth;
	BOOL _hasArtworkHeight;
	BOOL _includeLyrics;
	BOOL _hasIncludeLyrics;
	BOOL _includeSections;
	BOOL _hasIncludeSections;
	BOOL _includeInfo;
	BOOL _hasIncludeInfo;
	BOOL _includeLanguageOptions;
	BOOL _hasIncludeLanguageOptions;
	BOOL _returnContentItemAssetsInUserCompletion;
	BOOL _hasReturnContentItemAssetsInUserCompletion;
	BOOL _legacyNowPlayingInfoRequest;
	BOOL _hasLegacyNowPlayingInfoRequest;
	BOOL _hasCachingPolicy;
	unsigned _cachingPolicy;
	long long _location;
	long long _length;
	double _artworkWidth;
	double _artworkHeight;
	MRPlayerPath* _playerPath;
	NSString* _requestIdentifier;
	NSString* _label;
	NSArray* _contentItemIdentifiers;

}

@property (assign,getter=isLegacyNowPlayingInfoRequest,nonatomic) BOOL legacyNowPlayingInfoRequest;              //@synthesize legacyNowPlayingInfoRequest=_legacyNowPlayingInfoRequest - In the implementation block
@property (assign,nonatomic) BOOL hasLegacyNowPlayingInfoRequest;                                                //@synthesize hasLegacyNowPlayingInfoRequest=_hasLegacyNowPlayingInfoRequest - In the implementation block
@property (assign,nonatomic) unsigned cachingPolicy;                                                             //@synthesize cachingPolicy=_cachingPolicy - In the implementation block
@property (assign,nonatomic) BOOL hasCachingPolicy;                                                              //@synthesize hasCachingPolicy=_hasCachingPolicy - In the implementation block
@property (nonatomic,readonly) _MRPlaybackQueueRequestProtobuf * protobuf; 
@property (assign,nonatomic) long long location;                                                                 //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocation;                                                                   //@synthesize hasLocation=_hasLocation - In the implementation block
@property (assign,nonatomic) long long length;                                                                   //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasLength;                                                                     //@synthesize hasLength=_hasLength - In the implementation block
@property (assign,nonatomic) BOOL includeMetadata;                                                               //@synthesize includeMetadata=_includeMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeMetadata;                                                            //@synthesize hasIncludeMetadata=_hasIncludeMetadata - In the implementation block
@property (assign,nonatomic) double artworkWidth;                                                                //@synthesize artworkWidth=_artworkWidth - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkWidth;                                                               //@synthesize hasArtworkWidth=_hasArtworkWidth - In the implementation block
@property (assign,nonatomic) double artworkHeight;                                                               //@synthesize artworkHeight=_artworkHeight - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkHeight;                                                              //@synthesize hasArtworkHeight=_hasArtworkHeight - In the implementation block
@property (assign,nonatomic) BOOL includeLyrics;                                                                 //@synthesize includeLyrics=_includeLyrics - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeLyrics;                                                              //@synthesize hasIncludeLyrics=_hasIncludeLyrics - In the implementation block
@property (assign,nonatomic) BOOL includeSections;                                                               //@synthesize includeSections=_includeSections - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeSections;                                                            //@synthesize hasIncludeSections=_hasIncludeSections - In the implementation block
@property (assign,nonatomic) BOOL includeInfo;                                                                   //@synthesize includeInfo=_includeInfo - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeInfo;                                                                //@synthesize hasIncludeInfo=_hasIncludeInfo - In the implementation block
@property (assign,nonatomic) BOOL includeLanguageOptions;                                                        //@synthesize includeLanguageOptions=_includeLanguageOptions - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeLanguageOptions;                                                     //@synthesize hasIncludeLanguageOptions=_hasIncludeLanguageOptions - In the implementation block
@property (assign,nonatomic) BOOL returnContentItemAssetsInUserCompletion;                                       //@synthesize returnContentItemAssetsInUserCompletion=_returnContentItemAssetsInUserCompletion - In the implementation block
@property (assign,nonatomic) BOOL hasReturnContentItemAssetsInUserCompletion;                                    //@synthesize hasReturnContentItemAssetsInUserCompletion=_hasReturnContentItemAssetsInUserCompletion - In the implementation block
@property (nonatomic,retain) MRPlayerPath * playerPath;                                                          //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifier;                                                         //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSArray * contentItemIdentifiers;                                                     //@synthesize contentItemIdentifiers=_contentItemIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL rangeContainsNowPlayingItem; 
@property (nonatomic,readonly) BOOL shouldRequestItem; 
@property (nonatomic,readonly) BOOL shouldRequestItemNotConsideringMetadata; 
@property (nonatomic,readonly) BOOL containsNonDefaultAssets; 
@property (nonatomic,readonly) MRPlaybackQueueRequest * skeleton; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) BOOL hasRange; 
@property (nonatomic,readonly) BOOL includeArtwork; 
+(BOOL)supportsSecureCoding;
+(id)defaultPlaybackQueueRequest;
+(id)defaultPlaybackQueueRequestWithRange:(NSRange)arg1 ;
-(void)setIncludeLanguageOptions:(BOOL)arg1 ;
-(NSRange)range;
-(void)setIncludeLyrics:(BOOL)arg1 ;
-(void)setLength:(long long)arg1 ;
-(void)setReturnContentItemAssetsInUserCompletion:(BOOL)arg1 ;
-(MRPlaybackQueueRequest *)skeleton;
-(long long)length;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSArray *)contentItemIdentifiers;
-(BOOL)hasLegacyNowPlayingInfoRequest;
-(void)setHasLocation:(BOOL)arg1 ;
-(NSString *)requestIdentifier;
-(double)artworkWidth;
-(void)setIncludeInfo:(BOOL)arg1 ;
-(BOOL)hasIncludeInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIncludeLyrics;
-(NSData *)data;
-(id)initFromTransactionName:(unsigned long long)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)hasLocation;
-(BOOL)hasRange;
-(BOOL)includeLanguageOptions;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(void)setContentItemIdentifiers:(NSArray *)arg1 ;
-(BOOL)hasReturnContentItemAssetsInUserCompletion;
-(BOOL)hasLength;
-(BOOL)shouldRequestItemNotConsideringMetadata;
-(_MRPlaybackQueueRequestProtobuf *)protobuf;
-(BOOL)includeArtwork;
-(BOOL)exactMatch:(id)arg1 ;
-(MRPlayerPath *)playerPath;
-(long long)location;
-(void)setHasArtworkHeight:(BOOL)arg1 ;
-(double)artworkHeight;
-(void)setLegacyNowPlayingInfoRequest:(BOOL)arg1 ;
-(BOOL)rangeContainsNowPlayingItem;
-(id)initWithCoder:(id)arg1 ;
-(void)setHasIncludeMetadata:(BOOL)arg1 ;
-(void)setIncludeMetadata:(BOOL)arg1 ;
-(void)setArtworkWidth:(double)arg1 ;
-(id)description;
-(BOOL)hasIncludeLanguageOptions;
-(id)initWithRange:(NSRange)arg1 ;
-(BOOL)hasIncludeMetadata;
-(BOOL)isLegacyNowPlayingInfoRequest;
-(BOOL)shouldRequestItem;
-(BOOL)includeMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)includeLyrics;
-(void)setLocation:(long long)arg1 ;
-(BOOL)match:(id)arg1 ;
-(BOOL)hasArtworkWidth;
-(void)setHasIncludeInfo:(BOOL)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)hasArtworkHeight;
-(void)setHasIncludeLyrics:(BOOL)arg1 ;
-(id)initWithIdentifiers:(id)arg1 ;
-(void)setArtworkHeight:(double)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setHasLength:(BOOL)arg1 ;
-(void)setHasIncludeLanguageOptions:(BOOL)arg1 ;
-(id)initWithIdentifiers:(id)arg1 range:(NSRange)arg2 ;
-(void)setHasArtworkWidth:(BOOL)arg1 ;
-(BOOL)containsNonDefaultAssets;
-(BOOL)includeSections;
-(void)setHasCachingPolicy:(BOOL)arg1 ;
-(BOOL)hasCachingPolicy;
-(void)setHasReturnContentItemAssetsInUserCompletion:(BOOL)arg1 ;
-(BOOL)returnContentItemAssetsInUserCompletion;
-(NSString *)label;
-(void)setHasIncludeSections:(BOOL)arg1 ;
-(unsigned)cachingPolicy;
-(void)setHasLegacyNowPlayingInfoRequest:(BOOL)arg1 ;
-(void)setCachingPolicy:(unsigned)arg1 ;
-(BOOL)hasIncludeSections;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)includeInfo;
-(void)setIncludeSections:(BOOL)arg1 ;
@end

