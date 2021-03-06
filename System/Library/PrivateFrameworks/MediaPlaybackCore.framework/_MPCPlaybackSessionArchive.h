/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MSVSegmentedCodingPackage.h>

@class MPNowPlayingContentItem, UIImage, NSString, NSDate;

@interface _MPCPlaybackSessionArchive : MSVSegmentedCodingPackage {

	MPNowPlayingContentItem* _contentItem;
	UIImage* _artworkImage;
	NSString* _identifier;
	NSDate* _lastModifiedDate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) MPNowPlayingContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,copy) UIImage * artworkImage;                             //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                 //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
+(id)packageTypeIdentifier;
-(UIImage *)artworkImage;
-(id)initWithURL:(id)arg1 identifier:(id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)description;
-(MPNowPlayingContentItem *)contentItem;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContentItem:(MPNowPlayingContentItem *)arg1 ;
-(BOOL)writeWithError:(id*)arg1 ;
-(BOOL)saveWithError:(id*)arg1 ;
-(NSDate *)lastModifiedDate;
@end

