/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject {

	MPModelObject* _model;
	long long _personalizationStyle;

}

@property (nonatomic,readonly) MPModelObject * model;                       //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) long long personalizationStyle;              //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
+(id)lightweightPersonalizationPropertiesForModelClass:(Class)arg1 ;
+(id)_lightweightPersonalizationPropertiesForStoreAsset;
+(id)_lightweightPersonalizationPropertiesForPlaybackPosition;
-(MPModelObject *)model;
-(id)initWithModel:(id)arg1 personalizationStyle:(long long)arg2 ;
-(long long)personalizationStyle;
@end

