/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString;

@interface MKUGCCallToActionViewAppearance : NSObject {

	/*^block*/id _ctaTextBlock;
	long long _type;
	NSString* _leadingGlyphName;
	NSString* _trailingGlyphName;
	long long _ratingState;
	unsigned long long _numberOfPhotosAdded;

}

@property (assign,nonatomic) long long ratingState;                                //@synthesize ratingState=_ratingState - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPhotosAdded;               //@synthesize numberOfPhotosAdded=_numberOfPhotosAdded - In the implementation block
@property (nonatomic,readonly) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSAttributedString * callToActionText; 
@property (nonatomic,readonly) NSString * leadingGlyphName;                        //@synthesize leadingGlyphName=_leadingGlyphName - In the implementation block
@property (nonatomic,readonly) NSString * trailingGlyphName;                       //@synthesize trailingGlyphName=_trailingGlyphName - In the implementation block
+(id)passiveThumbsUpAppearanceForThirdPartyPlacecard;
+(id)_photosCallToActionViewWithTextRefreshBlock:(/*^block*/id)arg1 hasPhotoLibraryEmphasis:(BOOL)arg2 ;
+(id)_editSubmissionCallToActionViewWithTextRefreshBlock:(/*^block*/id)arg1 ;
+(id)_ratingsCallToActionViewWithTextRefreshBlock:(/*^block*/id)arg1 ;
+(id)activeThumbsUpAppearanceForThirdPartyPlacecard;
+(id)userRecommendedFailureAppearance;
+(id)activeAddPhotosAppearanceForThirdPartyPlacecardWithNumberOfPhotos:(unsigned long long)arg1 ;
+(id)userRecommendedAppearanceForRatingState:(long long)arg1 numberOfPhotosAdded:(unsigned long long)arg2 ;
+(id)userRecommendedLoadingAppearance;
+(id)headerAppearanceForFirstPartyPlacecardWithMapItem:(id)arg1 ;
+(id)passiveAddPhotosAppearanceForThirdPartyPlacecard;
-(long long)ratingState;
-(unsigned long long)numberOfPhotosAdded;
-(unsigned long long)hash;
-(NSAttributedString *)callToActionText;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(long long)arg1 callToActionTextRefreshBlock:(/*^block*/id)arg2 ;
-(id)initWithType:(long long)arg1 callToActionTextRefreshBlock:(/*^block*/id)arg2 leadingGlpyhName:(id)arg3 ;
-(id)initWithType:(long long)arg1 callToActionTextRefreshBlock:(/*^block*/id)arg2 leadingGlpyhName:(id)arg3 trailingGlyphName:(id)arg4 ;
-(void)setRatingState:(long long)arg1 ;
-(NSString *)leadingGlyphName;
-(void)setNumberOfPhotosAdded:(unsigned long long)arg1 ;
-(NSString *)trailingGlyphName;
@end
