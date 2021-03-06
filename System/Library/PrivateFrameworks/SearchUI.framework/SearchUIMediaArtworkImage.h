/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIMediaArtworkImage : SearchUIImage {

	NSString* _persistentID;
	NSString* _universalLibraryID;
	NSString* _spotlightIdentifier;
	long long _mediaEntityType;

}

@property (retain) NSString * persistentID;                     //@synthesize persistentID=_persistentID - In the implementation block
@property (retain) NSString * universalLibraryID;               //@synthesize universalLibraryID=_universalLibraryID - In the implementation block
@property (retain) NSString * spotlightIdentifier;              //@synthesize spotlightIdentifier=_spotlightIdentifier - In the implementation block
@property (assign) long long mediaEntityType;                   //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
-(void)setPersistentID:(NSString *)arg1 ;
-(void)setMediaEntityType:(long long)arg1 ;
-(void)setUniversalLibraryID:(NSString *)arg1 ;
-(long long)mediaEntityType;
-(NSString *)universalLibraryID;
-(id)initWithSFImage:(id)arg1 ;
-(void)setSpotlightIdentifier:(NSString *)arg1 ;
-(NSString *)spotlightIdentifier;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(NSString *)persistentID;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSpotlightIdentifier:(id)arg1 ;
-(Class)classForCoder;
@end

