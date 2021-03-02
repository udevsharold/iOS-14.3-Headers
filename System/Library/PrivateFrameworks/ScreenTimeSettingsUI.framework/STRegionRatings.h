/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface STRegionRatings : NSObject {

	NSDictionary* _ratingsPlist;

}

@property (readonly) NSDictionary * ratingsPlist;                             //@synthesize ratingsPlist=_ratingsPlist - In the implementation block
@property (copy,readonly) NSString * preferredRegion; 
@property (copy,readonly) NSDictionary * localizedRegionsByCode; 
@property (copy,readonly) NSArray * localizedRegionAndCodePairs; 
+(id)sharedRatings;
-(id)init;
-(NSDictionary *)localizedRegionsByCode;
-(id)localizedMovieRatingsForRegion:(id)arg1 ;
-(id)localizedTVRatingsForRegion:(id)arg1 ;
-(id)localizedAppRatingsForRegion:(id)arg1 ;
-(NSString *)preferredRegion;
-(id)localizedStringForAppRatingLabel:(id)arg1 ;
-(NSDictionary *)ratingsPlist;
-(id)_overrideValueForString:(id)arg1 ;
-(id)_localizedLabelForRegion:(id)arg1 rating:(id)arg2 ;
-(id)_localizedRatingsForRegion:(id)arg1 type:(id)arg2 allContentKey:(id)arg3 noContentKey:(id)arg4 ;
-(NSArray *)localizedRegionAndCodePairs;
@end
