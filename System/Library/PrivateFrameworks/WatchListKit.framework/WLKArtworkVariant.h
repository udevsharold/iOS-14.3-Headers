/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchListKit/WatchListKit-Structs.h>
@class NSString, NSURL;

@interface WLKArtworkVariant : NSObject {

	NSString* _artworkURLTemplate;
	BOOL _supportsLayeredImage;
	BOOL _alpha;
	NSString* _artworkURLString;
	long long _artworkType;
	NSString* _format;
	CGSize _artworkSize;

}

@property (nonatomic,copy,readonly) NSURL * artworkURL; 
@property (nonatomic,copy,readonly) NSString * artworkURLString;              //@synthesize artworkURLString=_artworkURLString - In the implementation block
@property (nonatomic,readonly) CGSize artworkSize;                            //@synthesize artworkSize=_artworkSize - In the implementation block
@property (nonatomic,readonly) long long artworkType;                         //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,copy,readonly) NSString * format;                        //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) BOOL supportsLayeredImage;                       //@synthesize supportsLayeredImage=_supportsLayeredImage - In the implementation block
@property (assign,getter=hasAlpha,nonatomic) BOOL alpha;                      //@synthesize alpha=_alpha - In the implementation block
+(id)artworkURLFromTemplate:(id)arg1 forSize:(CGSize)arg2 cropCode:(id)arg3 format:(id)arg4 ;
+(id)artworkURLFromTemplate:(id)arg1 forSize:(CGSize)arg2 format:(id)arg3 ;
-(NSURL *)artworkURL;
-(NSString *)format;
-(NSString *)artworkURLString;
-(id)artworkURLForSize:(CGSize)arg1 ;
-(void)setAlpha:(BOOL)arg1 ;
-(id)description;
-(long long)artworkType;
-(BOOL)supportsLayeredImage;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSupportsLayeredImage:(BOOL)arg1 ;
-(BOOL)hasAlpha;
-(CGSize)artworkSize;
-(id)artworkURLForSize:(CGSize)arg1 format:(id)arg2 ;
-(id)artworkURLForSize:(CGSize)arg1 cropCode:(id)arg2 format:(id)arg3 ;
-(id)_sizeDescription:(CGSize)arg1 ;
-(id)artworkSizeTemplateURL;
@end

