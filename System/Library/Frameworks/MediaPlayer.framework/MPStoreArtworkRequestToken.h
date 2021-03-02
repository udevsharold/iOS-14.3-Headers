/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class ICStoreArtworkInfo, ICStoreVideoArtworkInfo, NSString, NSURL;

@interface MPStoreArtworkRequestToken : NSObject <NSSecureCoding, MPArtworkDataSourceVisualIdenticality> {

	long long _artworkInfoType;
	ICStoreArtworkInfo* _imageArtworkInfo;
	ICStoreVideoArtworkInfo* _videoArtworkInfo;
	NSString* _cropStyle;
	NSString* _format;
	NSString* _sourceEditorialArtworkKind;
	NSURL* _artworkURL;

}

@property (assign,nonatomic) long long artworkInfoType;                             //@synthesize artworkInfoType=_artworkInfoType - In the implementation block
@property (nonatomic,copy) ICStoreArtworkInfo * imageArtworkInfo;                   //@synthesize imageArtworkInfo=_imageArtworkInfo - In the implementation block
@property (nonatomic,copy) ICStoreVideoArtworkInfo * videoArtworkInfo;              //@synthesize videoArtworkInfo=_videoArtworkInfo - In the implementation block
@property (nonatomic,copy) NSString * cropStyle;                                    //@synthesize cropStyle=_cropStyle - In the implementation block
@property (nonatomic,copy) NSString * format;                                       //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSString * sourceEditorialArtworkKind;                   //@synthesize sourceEditorialArtworkKind=_sourceEditorialArtworkKind - In the implementation block
@property (nonatomic,copy) NSURL * artworkURL;                                      //@synthesize artworkURL=_artworkURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)tokenWithVideoArtworkInfo:(id)arg1 ;
+(id)tokenWithImageArtworkInfo:(id)arg1 ;
-(NSURL *)artworkURL;
-(id)stringRepresentation;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(long long)artworkInfoType;
-(NSString *)format;
-(id)init;
-(void)setFormat:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVideoArtworkInfo:(ICStoreVideoArtworkInfo *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)cropStyle;
-(ICStoreVideoArtworkInfo *)videoArtworkInfo;
-(ICStoreArtworkInfo *)imageArtworkInfo;
-(NSString *)sourceEditorialArtworkKind;
-(void)setImageArtworkInfo:(ICStoreArtworkInfo *)arg1 ;
-(void)setSourceEditorialArtworkKind:(NSString *)arg1 ;
-(void)setCropStyle:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setArtworkInfoType:(long long)arg1 ;
@end
