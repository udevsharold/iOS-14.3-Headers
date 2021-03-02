/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MIPMultiverseIdentifier, MPMediaLibrary, MPMediaItem;

@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding> {

	MIPMultiverseIdentifier* _multiverseIdentifier;

}

@property (nonatomic,readonly) BOOL isDownloadable; 
@property (nonatomic,readonly) BOOL isDownloadableStoreOffer; 
@property (nonatomic,readonly) BOOL isPurchasableStoreOffer; 
@property (nonatomic,readonly) long long preferredStoreOfferVariant; 
@property (nonatomic,readonly) MPMediaLibrary * mediaLibrary; 
@property (nonatomic,readonly) MPMediaItem * representativeItem; 
@property (nonatomic,readonly) MIPMultiverseIdentifier * multiverseIdentifier;              //@synthesize multiverseIdentifier=_multiverseIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long persistentID; 
+(BOOL)supportsSecureCoding;
+(BOOL)canFilterByProperty:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)preferredStoreOfferVariant;
-(id)buyOffer;
-(id)buyOfferForVariant:(long long)arg1 ;
-(BOOL)isDownloadableStoreOffer;
-(BOOL)isPurchasableStoreOffer;
-(id)completionOfferForVariant:(long long)arg1 ;
-(id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2 ;
-(MIPMultiverseIdentifier *)multiverseIdentifier;
-(id)genericModelObjectWithRequestedProperties:(id)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)hash;
-(MPMediaItem *)representativeItem;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidateCachedProperties;
-(id)cachedValueForProperty:(id)arg1 isCached:(BOOL*)arg2 ;
-(unsigned long long)persistentID;
-(BOOL)isDownloadable;
-(BOOL)isEqual:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
